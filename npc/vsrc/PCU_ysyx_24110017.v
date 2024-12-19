module PCU_ysyx_24110017(clk,rst,op,funct3,offset,r1,r2,pc,dnpc);
input	clk;
input rst;
input [6:0]op;
input [2:0]funct3;
input [31:0]offset;
input [31:0]r1;
input [31:0]r2;
output [31:0]pc;
output [31:0]dnpc;
reg [31:0]pc;
wire [31:0]dnpc;

always@(posedge clk)begin
	if(rst)
		pc <= 32'h80000000;
	else
		pc <= dnpc;
end

assign jalen = (op == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op == 7'b1100111) ? 1'b1 : 1'b0;
assign beqen = (op == 7'b1100011 && funct3 == 3'b000 && (r1 == r2));
assign bneen = (op == 7'b1100011 && funct3 == 3'b001 && (r1 != r2));
assign blten = (op == 7'b1100011 && funct3 == 3'b100 && ($signed(r1) < $signed(r2)));
assign bgeen = (op == 7'b1100011 && funct3 == 3'b101 && ($signed(r1) >= $signed(r2)));
assign bltuen = (op == 7'b1100011 && funct3 == 3'b110 && (r1 < r2));
assign bgeuen = (op == 7'b1100011 && funct3 == 3'b111 && (r1 >= r2));

assign dnpc = (jalen) ? (pc + offset)	//jal
	: (jalren) ? ((r1 + offset) & ~1) //jalr
	: (beqen) ? (pc + offset)	//beq
	: (bneen) ? (pc + offset)	//bne
	: (blten) ? (pc + offset)	//blt
	: (bgeen) ? (pc + offset)	//bge
	: (bltuen) ? (pc + offset)	//bltu
	:	(bgeuen) ? (pc + offset)	//bgeu
	: pc + 4;

endmodule
