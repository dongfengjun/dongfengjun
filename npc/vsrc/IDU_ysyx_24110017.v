module IDU_ysyx_24110017(inst,op,rd,sel,rs1,imm,offset,wr_en);
input [31:0]inst;
output [6:0]op;
output [4:0]rd;
output [2:0]sel;
output [4:0]rs1;
output [31:0]imm;
output [31:0]offset;	//J
output wr_en;

wire [6:0]op;
wire [2:0]funct3;
wire [31:0]immI,immU;
wire [20:0]offset;
wire wr_en;
import "DPI-C" function void npc_trap();
/***pattern***/
assign op = inst[6:0];
assign rd = inst[11:7];
assign funct3 = inst[14:12];
assign rs1 = inst[19:15];
assign immI = {{20{inst[31]}},inst[31:20]};//SEXTIimmediate
assign immU = {inst[31:12],{12{1'b0}}};//Uimm
assign imm = (op == 7'b0010011) ? immI : immU;
assign offset = (op == 7'b1101111) ? {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0} : {{20{inst[31]}},inst[31:20]};//SEXToffset

/***riscv32e-control***/
assign sel = ((op == 7'b0010011) && (funct3 == 3'b000))? 3'b000:3'b000;//addi
assign wr_en = (op == 7'b0010011 || op == 7'b0010111 || op == 7'b1101111 || op == 7'b1100111) ? 1'b1 : 1'b0;

always@(*) begin
	if(inst == 32'b00000000000100000000000001110011) begin
		npc_trap();
	end
end
endmodule
