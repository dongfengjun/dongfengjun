module IDU(
input [31:0]inst,
output [2:0]sel
output [4:0]rs1,
output [11:0]imm
);

assign op = inst[6:0];
assign rd = inst[11:7];
assign funct3 = inst[14:12];
assign rs1 = inst[19:15];
assign imm = {(20){inst[31]},inst[31:20]};

assign sel = ((op == 7'b0010011) && (funct3 == 3'b000))? 3'b000;

endmodule
