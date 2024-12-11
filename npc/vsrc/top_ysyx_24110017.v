module top_ysyx_24110017(clk,rst,pc,inst,a0,r1);
input clk;
input rst;
output [31:0]pc;//if
input [31:0]inst;
input [4:0]a0;//npc_trap
output [31:0]r1;

wire [6:0]op;
wire [4:0]rd;
wire [2:0]sel;
wire [4:0]rs1,raddr;
wire [31:0]imm,offset;
wire wr_en,jalen,jalren;
wire [31:0]res;
wire [31:0]r1,a,b,xrd;

PCU_ysyx_24110017 PCU(clk,rst,jalen,jalren,offset,r1,pc);
//IFU_ysyx_24110017 IFU(pc,inst); //c++
IDU_ysyx_24110017 IDU(inst,op,rd,sel,rs1,imm,offset,wr_en);
RegisterFile_ysyx_24110017 #(5,32) RF(clk,xrd,rd,wr_en,raddr,r1);
EXU_ysyx_24110017 EXU(a,b,sel,res);

assign b = imm;
assign a = (op == 7'b0010011) ? r1 : pc;
assign xrd = (op == 7'b0110111 && op == 7'b1100111) ? imm : (op == 7'b1101111) ? (pc + 4) : res;
assign jalen = (op == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op == 7'b1100111) ? 1'b1 : 1'b0;
assign raddr = (inst == 32'b00000000000100000000000001110011) ? a0 : rs1;
endmodule
