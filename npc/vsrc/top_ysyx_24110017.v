module top_ysyx_24110017(clk,rst,pc,dnpc,inst);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;

wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
wire wr_en;
wire [31:0]inst;

wire [31:0]res;
wire [4:0]raddr1,raddr2;
wire [31:0]r1,r2,a,b,xrd;
wire [31:0]csrs, csrs_in, mepc_in, mepc, mstatus, mcause_in, mcause, mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;


PCU_ysyx_24110017 PCU(clk,rst,op,funct3,imm,r1,r2,mtvec,mepc,pc,dnpc);
IFU_ysyx_24110017 IFU(pc,inst);
IDU_ysyx_24110017 IDU(inst,op,rd,funct3,rs1,rs2,imm,funct7,shamt,wr_en);
RegisterFile_ysyx_24110017 #(5,32) RF (clk,xrd,rd,wr_en,raddr1,r1,raddr2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk, rst, mepc_in, mepc, mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk, rst, csrs_in, mstatus, mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk, rst, mcause_in, mcause, mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk, rst, csrs_in, mtvec, mtvec_wen);
EXU_ysyx_24110017 EXU(a, b, funct3, op, funct7, shamt, imm, r1, r2, csrs, csrs_in, res);


/***riscv32 control***/
assign raddr1 = rs1;
assign raddr2 = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 5'd17 : rs2; //ecall
assign b = (op == 7'b0110011 || op == 7'b0100011) ? r2 : imm;
assign a = (op == 7'b0010011 || op == 7'b0000011 || op == 7'b0100011 || op == 7'b0110011/*R*/) ? r1 : pc;
assign xrd = (op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I 
 || op == 7'b0100011 //S
 || op == 7'b0110011)//R
 ? res 
 : (op == 7'b1101111) ? (pc + 4) //I_jal
 : (op == 7'b1100111) ? (pc + 4) //I_jalr
 : (op == 7'b0110111) ? imm	//U_lui
 : (op == 7'b0010111) ? (pc + imm) //U_auipc
 : 32'b0;
assign csrs = (op == 7'b1110011 && imm == 32'd833) ? mepc :
							(op == 7'b1110011 && imm == 32'd768) ? mstatus : 
							(op == 7'b1110011 && imm == 32'd834) ? mcause :
							(op == 7'b1110011 && imm == 32'd773) ? mtvec : 32'b0;
assign mepc_wen = ((op == 7'b1110011 && imm == 32'd833) || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mstatus_wen = (op == 7'b1110011 && imm == 32'd768) ? 1'b1 : 1'b0;
assign mcause_wen = (op == 7'b1110011 && imm == 32'd834 || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mtvec_wen =	(op == 7'b1110011 && imm == 32'd773) ? 1'b1 : 1'b0;
assign mepc_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? pc : csrs_in;	//ecall
assign mcause_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? r2 : csrs_in; //ecall
/***DPI-C***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction

endmodule
