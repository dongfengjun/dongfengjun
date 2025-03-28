module IDU_ysyx_24110017(clk,rst,inst,op,rd,funct3,rs1,rs2,imm,funct7,shamt,wr_en,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen);
input clk;
input rst;
input [31:0]inst;
output [6:0]op;
output [4:0]rd;
output [2:0]funct3;
output [4:0]rs1;
output [4:0]rs2;
output [31:0]imm;
output [6:0]funct7;
output [4:0]shamt;
output wr_en,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;

/***TPYE***/
wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B
wire [4:0]rs2;	//R S B
wire [31:0]immI, immU, immS, immB, immJ;
wire [6:0]funct7;	//R


wire [4:0]shamt;	//I shamt
wire wr_en;	//gpr_wr
wire mepc_wen,mstatus_wen,mcause_wen,mtvec_wen; //csr_wr
import "DPI-C" function void npc_trap();

/***pattern***/
assign op = inst[6:0];
assign rd = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || 
op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111
 || op == 7'b1110011 || op == 7'b0110011) ? inst[11:7] : 5'b0;
assign funct3 = inst[14:12];
assign rs1 = (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I
 || op == 7'b1100011	//B
 || op == 7'b0100011	//S
 || op == 7'b0110011) ? //R
 inst[19:15] : 5'b0;
assign rs2 = (op == 7'b1100011  //B
 || op == 7'b0100011  //S
 || op == 7'b0110011) ? inst[24:20] //R
 : (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 5'd15 //ecall
 : 5'b0;
assign funct7 = (op == 7'b0110011 || op == 7'b0010011) ? inst[31:25] : 7'b0;
assign immI = {{20{inst[31]}},inst[31:20]};	//SEXTIimmediate
assign shamt = {inst[24:20]};	//I shamt
assign immU = {inst[31:12],{12{1'b0}}};	//UEXTUimm
assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};	//SEXTSimm
assign immB = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};	//SEXTBimm
assign immJ = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};	//SEXTJimm

assign imm = (op == 7'b0110111 || op == 7'b0010111) ? immU
 : (op == 7'b1101111) ? immJ
 : (op == 7'b1100011) ? immB
 : (op == 7'b0100011) ? immS
 : (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011) ? immI 
 : 32'b0;

/***riscv32e-control***/
assign wr_en = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011 || op == 7'b0110011) ? 1'b1 : 1'b0;
assign mepc_wen = ((op == 7'b1110011 && imm == 32'd833) || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mstatus_wen = (op == 7'b1110011 && imm == 32'd768) ? 1'b1 : 1'b0;
assign mcause_wen = (op == 7'b1110011 && imm == 32'd834 || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mtvec_wen = (op == 7'b1110011 && imm == 32'd773) ? 1'b1 : 1'b0;

/***DPIC***/
always@(*) begin
	if(inst == 32'b00000000000100000000000001110011) begin
		npc_trap();
	end
end
/***E*N*D***/

endmodule
