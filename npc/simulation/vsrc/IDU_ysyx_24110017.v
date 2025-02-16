module IDU_ysyx_24110017(inst,rd,sel,rs1,imm,wr_en);
input [31:0]inst;
output [4:0]rd;
output [2:0]sel;
output [4:0]rs1;
output [31:0]imm;
output wr_en;

wire [19:0]sext;
wire [6:0]op;
wire [2:0]funct3;

import "DPI-C" function void npc_trap();
assign op = inst[6:0];
assign rd = inst[11:7];
assign funct3 = inst[14:12];
assign rs1 = inst[19:15];
assign sext = {(20){inst[31]}};
assign imm = {sext,inst[31:20]};//SEXT

/***riscv32i-control***/
assign sel = ((op == 7'b0010011) && (funct3 == 3'b000))? 3'b000:3'b000;//addi
assign wr_en = (op == 7'b0010011) ? 1'b1:1'b0;
always@(*) begin
	if(inst == 32'b00000000000100000000000001110011) begin
		npc_trap();
	end
end
endmodule
