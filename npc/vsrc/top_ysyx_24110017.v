module top_ysyx_24110017(clk,rst,pc,dnpc,inst);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
input [31:0]inst;

wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]sel,funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
wire wr_en;


wire jalen,jalren;
wire [31:0]res;
wire [4:0]raddr1,raddr2;
wire [31:0]r1,r2,a,b,xrd;


PCU_ysyx_24110017 PCU(clk,rst,op,funct3,imm,r1,r2,pc,dnpc);
//IFU_ysyx_24110017 IFU(pc,inst); //c++
IDU_ysyx_24110017 IDU(inst,op,rd,funct3,sel,rs1,rs2,imm,funct7,shamt,wr_en);
RegisterFile_ysyx_24110017 #(5,32) RF(clk,xrd,rd,wr_en,raddr1,r1,raddr2,r2);
EXU_ysyx_24110017 EXU(a,b,sel,op,shamt,imm,res);


/***riscv32 control***/
assign raddr1 = rs1;
assign raddr2 = rs2;
assign b = (op == 7'b0110011 || op == 7'b0100011) ? r2 : imm;
assign a = (op == 7'b0010011 || op == 7'b0000011 || op == 7'b0100011) ? r1 : pc;
assign xrd = (op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I 
 || op == 7'b0100011 //S
 || op == 7'b0110011)//R
 ? res 
 : (op == 7'b1101111) ? (pc + 4) //I_jalr
 : (op == 7'b0110111) ? imm	//U_lui
 : (op == 7'b0010111) ? (pc + imm) //U_auipc
 : 32'b0;
assign jalen = (op == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op == 7'b1100111) ? 1'b1 : 1'b0;

endmodule
