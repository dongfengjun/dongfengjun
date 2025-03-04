module WBU_ysyx_24110017(clk,rst,op,imm,funct3,
												pc,r1,r2,res,xrd,
												mepc,mstatus,mcause,mtvec,
												csrs,csrs_in,mepc_in,mcause_in
);
input clk;
input rst;
input [6:0]op;
input [31:0]imm;
input [2:0]funct3;
input [31:0]pc;
input [31:0]r1,r2;
input [31:0]res;
output [31:0]xrd;
input [31:0]mepc,mstatus,mcause,mtvec;
output [31:0]csrs;
input [31:0]csrs_in;
output [31:0]mepc_in,mcause_in;

wire [31:0]xrd;
wire [31:0]csrs,csrs_in,mepc_in,mepc,mstatus,mcause_in,mcause,mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;

assign xrd = res;
assign csrs = (op == 7'b1110011 && imm == 32'd833) ? mepc
 : (op == 7'b1110011 && imm == 32'd768) ? mstatus
 : (op == 7'b1110011 && imm == 32'd834) ? mcause
 : (op == 7'b1110011 && imm == 32'd773) ? mtvec
 : 32'b0;
assign mepc_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? pc
 : csrs_in; //ecall
assign mcause_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? r2 : csrs_in; //ecall

endmodule
