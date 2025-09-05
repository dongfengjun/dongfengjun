//`define Associative //w != 0
module ysyx_24110017_BTB 
#(B_N = 2, B_W = 0, BTAG = 16, BTARG = 8, J_N = 1, J_W = 0, JTAG = 16, JTARG = 16) 
(
	input  wire        clk,
	input  wire        rst,

	input  wire [31:0] pc_i,
	output wire [31:0] snpc_o,

	input  wire [20:0] prepc_i,
	input  wire [31:0] prepc_tag_i,
	input  wire [ 1:0] prepc_en_i
);
	
	reg  [JTARG-1:0]        jsnpc_reg [(1<<J_N)-1:0];
  reg  [JTAG-3-J_N+J_W:0] jtag_reg  [(1<<J_N)-1:0];
  wire [JTAG-3-J_N+J_W:0] jtag   = pc_i[JTAG-1:2+J_N-J_W];
  wire [J_N-J_W-1:0]			jindex = pc_i[J_N-J_W+1:2];

	reg  [BTARG-1:0]        bsnpc_reg [(1<<B_N)-1:0];
  reg  [BTAG-3-B_N+B_W:0] btag_reg  [(1<<B_N)-1:0];
	wire [BTAG-3-B_N+B_W:0] btag   = pc_i[BTAG-1:2+B_N-B_W];
	wire [B_N-B_W-1 :0]			bindex = pc_i[B_N-B_W+1:2];

	wire [JTAG-3-J_N+J_W:0] jtag_pre   = prepc_tag_i[JTAG-1:2+J_N-J_W];
	wire [J_N-J_W-1:0]      jindex_pre = prepc_tag_i[J_N-J_W+1:2];
	wire [BTAG-3-B_N+B_W:0] btag_pre   = prepc_tag_i[BTAG-1:2+B_N-B_W];
	wire [J_N-J_W-1 :0]     bindex_pre = prepc_tag_i[B_N-B_W+1:2];

	function integer blog2;
    input [(1<<B_W) - 1 : 0] value;
    integer loop_var;
    begin
      for (loop_var = 0; loop_var < (1<<B_W); loop_var = loop_var + 1) begin
        if(value != 0) begin
          value = value >> 1;
          blog2 = loop_var;
        end
      end
    end
  endfunction
	function integer jlog2;
    input [(1<<J_W) - 1 : 0] value;
    integer loop_var;
    begin
      for (loop_var = 0; loop_var < (1<<J_W); loop_var = loop_var + 1) begin
	      if(value != 0) begin
          value = value >> 1;
          jlog2 = loop_var;
        end
      end
    end
  endfunction

	wire [(1<<B_W)-1:0]bhit;
	generate 
    genvar i; 
      for(i = 0; i < (1<<B_W); i = i + 1) begin : comparator_b
        assign bhit[i] = (btag == btag_reg[bindex * (1<<B_W) + i]);
			end
	endgenerate

	wire [(1<<J_N)-1:0]jhit;
  generate
    genvar j;
      for(j = 0; j < (1<<J_N); j = j + 1) begin : comparator_j
        assign jhit[j] = (jtag == jtag_reg[jindex * (1<<J_W) + j]);
      end
  endgenerate

`ifdef Associative
	wire [(1<<B_W)-1:0]balready;
  generate
    genvar k;
      for(k = 0; k < (1<<B_W); k = k + 1) begin : comparator_b
        assign balready[k] = (btag_pre == btag_reg[bindex_pre * (1<<B_W) + k]);
      end
  endgenerate

	wire [(1<<J_W)-1:0]jalready;
  generate
    genvar l;
      for(l = 0; l < (1<<J_W); l = l + 1) begin : comparator_j
        assign jalready[l] = (jtag_pre == jtag_reg[jindex_pre * (1<<J_W) + l]);
      end
  endgenerate
`endif

	assign snpc_o = (|jhit) ? {pc_i[31:JTARG],jsnpc_reg[jindex * (1<<J_W) + jlog2(jhit)]} : (|bhit) ? {pc_i[31:BTARG],bsnpc_reg[bindex * (1<<B_W) + blog2(bhit)]} : pc_i + 4;

  always @(posedge clk) begin
`ifdef Associative
    if(prepc_en_i[1] && (!jalready)) begin
`else
    if(prepc_en_i[1]) begin
`endif
      integer a;                                                                                                                                              
      for (a = 1; a < (1<<J_W); a = a + 1) begin
        jsnpc_reg[jindex_pre * (1<<J_W) + a] <= jsnpc_reg[jindex_pre * (1<<J_W) + a - 1];
      end
      jsnpc_reg[jtag_pre * (1<<J_W)] <= prepc_i[JTARG-1:0];
    end
  end
  always @(posedge clk) begin
`ifdef Associative
    if(prepc_en_i[1] && (!jalready)) begin
`else
    if(prepc_en_i[1]) begin
`endif
      integer a;
      for (a = 1; a < (1<<J_W); a = a + 1) begin
	      jtag_reg[jindex_pre * (1<<J_W) + a]  <= jtag_reg[jindex_pre * (1<<J_W) + a - 1];
      end
		jtag_reg[jindex_pre * (1<<J_W)]  <= prepc_tag_i[JTAG:2+J_N-J_W];
		end
	end


	always @(posedge clk) begin
`ifdef Associative
		if(prepc_en_i[0] && (!balready)) begin
`else
		if(prepc_en_i[0]) begin
`endif
			integer a;
			for (a = 1; a < (1<<B_W); a = a + 1) begin
				bsnpc_reg[bindex_pre * (1<<B_W) + a] <= bsnpc_reg[bindex_pre * (1<<B_W) + a - 1];
			end
			bsnpc_reg[bindex_pre * (1<<B_W)] <= prepc_i[BTARG-1:0];
		end
	end
	always @(posedge clk) begin
`ifdef Associative
		if(prepc_en_i[0] && (!balready)) begin
`else
		if(prepc_en_i[0]) begin
`endif
			integer a;
			for (a = 1; a < (1<<B_W); a = a + 1) begin
				btag_reg[bindex_pre * (1<<B_W) + a]  <= btag_reg[bindex_pre * (1<<B_W) + a - 1];                            
			end
			btag_reg[bindex_pre * (1<<B_W)]  <= prepc_tag_i[BTAG:2+B_N-B_W];
		end
	end

endmodule
