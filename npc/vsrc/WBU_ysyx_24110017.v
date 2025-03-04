module WBU_ysyx_24110017(clk,rst,res,xrd);
input clk;
input rst;
input [31:0]res;
output [31:0]xrd;

wire [31:0]xrd;

assign xrd = res;

endmodule
