//`define YOSYS_STA
module ysyx_24110017_PCU(
	input  wire				 clk,
	input  wire				 rst,
	input  wire				 isCHazard,
	output reg  [31:0] pc_o,
	input  wire [31:0] dnpc_i,
	input  wire [31:0] snpc_i,
	input  wire				 if_ready_i
);

localparam RESET_PC = 32'h30000000;

always @(posedge clk) begin
  casez({rst, isCHazard, if_ready_i})
    3'b1??:  pc_o <= RESET_PC;
    3'b01?:  pc_o <= dnpc_i;
    3'b001:  pc_o <= snpc_i;
		default: pc_o <= pc_o;
	endcase
end

/***
`ifndef YOSYS_STA
always @(posedge clk) begin
	if(((dnpc_i < 32'h30000000) || (dnpc_i >= 32'h40000000)) 
     && ((dnpc_i < 32'h0f000000) || (dnpc_i >= 32'h0f002000))
     && ((dnpc_i < 32'h80000000) || (dnpc_i >= 32'h84000000))
     && ((dnpc_i < 32'ha0000000) || (dnpc_i >= 32'hc0000000))) begin
     $fwrite(32'h80000002, "Assertion failed: Invalid PC `%xh`\n",dnpc_i);
     $fatal;
	end
end
`endif
***/

endmodule
