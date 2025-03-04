module WBU_ysyx_24110017(clk,rst,res,o_mepc,o_mstatus,o_mcause,o_mtvec,xrd,w_mepc,w_mstatus,w_mcause,w_mtvec);
input clk;
input rst;
input [31:0]res;
input [31:0]o_mepc,o_mstatus,o_mcause,o_mtvec;
output [31:0]xrd;
output [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

wire [31:0]xrd;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

assign xrd = res;
assign w_mepc = o_mepc;
assign w_mstatus = o_mstatus;
assign w_mcause = o_mcause;
assign w_mtvec = o_mtvec;

endmodule
