module WBU_ysyx_24110017(clk,rst,op,imm,funct3,pc,r1,r2,res,a,b,xrd,mepc,mstatus,mcause,mtvec,csrs,csrs_in,mepc_in,mcause_in);
input clk;
input rst;
input [6:0]op;
input [31:0]imm;
input [2:0]funct3;
input [31:0]pc;
input [31:0]r1,r2;
input [31:0]res;
output [31:0]a;
output [31:0]b;
output [31:0]xrd;
input [31:0]mepc,mstatus,mcause,mtvec;
output [31:0]csrs;
input [31:0]csrs_in;
output [31:0]mepc_in,mcause_in;

wire [31:0]a,b,xrd;
wire [31:0]csrs,csrs_in,mepc_in,mepc,mstatus,mcause_in,mcause,mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;

assign b = (op == 7'b0110011 || op == 7'b0100011) ? r2 : imm;
assign a = (op == 7'b0010011 || op == 7'b0000011 || op == 7'b0100011 || op == 7'b0110011/*R*/ || (op == 7'b1110011 && (funct3 == 3'b001 || funct3 == 3'b010 || funct3 == 3'b011))/*csr*/) ? r1 : pc;
assign xrd = (op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011  //I
 || op == 7'b0100011 //S
 || op == 7'b0110011)//R
 ? res
 : (op == 7'b1101111) ? (pc + 4) //I_jal
 : (op == 7'b1100111) ? (pc + 4) //I_jalr
 : (op == 7'b0110111) ? imm //U_lui
 : (op == 7'b0010111) ? (pc + imm) //U_auipc
 : 32'b0;
assign csrs = (op == 7'b1110011 && imm == 32'd833) ? mepc
 : (op == 7'b1110011 && imm == 32'd768) ? mstatus
 : (op == 7'b1110011 && imm == 32'd834) ? mcause
 : (op == 7'b1110011 && imm == 32'd773) ? mtvec
 : 32'b0;
assign mepc_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? pc
 : csrs_in; //ecall
assign mcause_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? r2 : csrs_in; //ecall

endmodule
