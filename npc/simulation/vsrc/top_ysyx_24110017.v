module top_ysyx_24110017(clk,rst,pc,inst);
input clk;
input rst;
output [31:0]pc;
input [31:0]inst;

wire [4:0]rd;
wire [2:0]sel;
wire [4:0]rs1;
wire [31:0]imm;
wire wr_en;
wire [31:0]res;
wire [31:0]r1;

PCU_ysyx_24110017 PCU(clk,rst,pc);
//IFU_ysyx_24110017 IFU(pc,inst); //c++
IDU_ysyx_24110017 IDU(inst,rd,sel,rs1,imm,wr_en);	//仅addi
RegisterFile_ysyx_24110017 #(5,32) RF(clk,res,rd,wr_en,rs1,r1);
EXU_ysyx_24110017 EXU(r1,imm,sel,res);
endmodule
