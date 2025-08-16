module ysyx_24110017_BTB #(n = 4, w = 3) (
	input clk,
	input rst,
	input  wire [31:0] pc_i,
	output wire [31:0] snpc_o,
	input  wire [31:0] dnpc_i,
	input  wire [31:0] dnpc_tag_i,
	input  wire dnpc_en_i
);
	
	reg [31:0] snpc_reg [(1<<n)-1 : 0];
  reg [29-n+w : 0] tag_reg [(1<<n)-1 : 0];
	wire [29-n+w : 0]tag = pc_i[31 : 2+n-w];
	wire [n-1-w : 0]index = pc_i[1+n-w : 2];

  wire [(1<<w) - 1 : 0]hit;
	generate 
    genvar i; 
      for(i = 0; i < (1<<w); i = i + 1) begin : comparator
        assign hit[i] = (tag == tag_reg[index * (1<<w) + i]);
			end
	endgenerate
	
	assign snpc_o = (hit != 0) ? snpc_reg[index * (1 << w) + $clog2(hit)] : pc_i + 4;

	reg enable;
	always @(posedge clk) begin
		if(rst) enable <= 1'b0;
		else enable <= dnpc_en_i;
	end

	always @(posedge clk) begin
		if(rst) begin
      integer j;
			for (j = 0; j < (1<<n); j = j + 1) begin : init_reg
				snpc_reg[j]	<= 0;
				tag_reg[j]		<= 0;
			end
		end
		else if(dnpc_en_i && !enable) begin
			integer a;
			for (a = 1; a < (1<<w); a = a + 1) begin
        snpc_reg[index * (1<<w) + a] <= snpc_reg[index * (1<<w) + a - 1];
        tag_reg[index * (1<<w) + a] <= tag_reg[index * (1<<w) + a - 1];
      end
			snpc_reg[index * (1<<w)] <= dnpc_i;
			tag_reg[index * (1<<w)] <= dnpc_tag_i[31 : 2+n-w];
		end
	end

endmodule
