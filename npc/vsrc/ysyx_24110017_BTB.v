module ysyx_24110017_BTB #(n = 2, w = 0) (
	input  wire        clk,
	input  wire        rst,

	input  wire [31:0] pc_i,
	output wire [31:0] snpc_o,

	input  wire [20:0] prepc_i,
	input  wire [31:0] prepc_tag_i,
	input  wire [ 1:0] prepc_en_i
);
	
	reg  [20:0] jsnpc_reg;
	reg  [29:0] jtag_reg;
	wire [29:0] jtag = pc_i[31:2];
	wire jhit = (jtag == jtag_reg);

	reg  [ 7:0]     snpc_reg [(1<<n)-1:0];
  reg  [29-n+w:0] tag_reg  [(1<<n)-1:0];
	wire [29-n+w:0] tag   = pc_i[31:2+n-w];
	wire [n-1-w :0] index = pc_i[1+n-w:2];

	wire [29-n+w:0] prepc_tag   = prepc_tag_i[31 : 2+n-w];
	wire [n-1-w :0] prepc_index = prepc_tag_i[1+n-w : 2];

	function integer log2;
    input [(1<<w) - 1 : 0] value;
    integer loop_var;
    begin
      for (loop_var = 0; loop_var < (1<<w); loop_var = loop_var + 1) begin
        if(value != 0) begin
          value = value >> 1;
          log2 = loop_var;
        end
      end
    end
  endfunction
  
	wire [(1<<w)-1:0]hit;
	generate 
    genvar i; 
      for(i = 0; i < (1<<w); i = i + 1) begin : comparator_o
        assign hit[i] = (tag == tag_reg[index * (1<<w) + i]);
			end
	endgenerate

`define IS_NONZERO(w) (w != 0)
`ifdef IS_NONZERO
	wire [(1<<w)-1:0]already;
  generate
    genvar k;
      for(k = 0; k < (1<<w); k = k + 1) begin : comparator_i
        assign already[k] = (prepc_tag == tag_reg[prepc_index * (1<<w) + k]);
      end
  endgenerate
`endif

	assign snpc_o = (jhit) ? {pc_i[31:21],jsnpc_reg} : (hit != 0) ? {pc_i[31:8],snpc_reg[index * (1<<w) + log2(hit)]} : pc_i + 4;
	
	reg [1:0]enable;
	always @(posedge clk) begin
		if(rst) enable <= 2'b0;
		else enable <= prepc_en_i;
	end

	always @(posedge clk) begin
		if(prepc_en_i[1] && !enable[1]) begin
			jsnpc_reg <= prepc_i;
      jtag_reg  <= prepc_tag_i[31:2];
		end
		else if(prepc_en_i[0] && !enable[0]) begin // && (already == 0)) begin
			integer a;
			for (a = 1; a < (1<<w); a = a + 1) begin
        snpc_reg[prepc_index * (1<<w) + a] <= snpc_reg[prepc_index * (1<<w) + a - 1];
        tag_reg[prepc_index * (1<<w) + a]  <= tag_reg[prepc_index * (1<<w) + a - 1];
      end
			snpc_reg[prepc_index * (1<<w)] <= prepc_i[7:0];
			tag_reg[prepc_index * (1<<w)]  <= prepc_tag;
		end
	end

endmodule
