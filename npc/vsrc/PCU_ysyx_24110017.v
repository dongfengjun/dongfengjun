module PCU_ysyx_24110017(clk,rst,op,funct3,offset,r1,r2,mtvec,mepc,pc,dnpc,INIT_AXI_TXN,TXN_DONE);
input	clk;
input rst;
input [6:0]op;
input [2:0]funct3;
input [31:0]offset;
input [31:0]r1;
input [31:0]r2;
input [31:0]mtvec;
input [31:0]mepc;
output [31:0]pc;
output [31:0]dnpc;
output INIT_AXI_TXN;
input TXN_DONE;

reg [31:0]pc;
wire [31:0]dnpc;
reg INIT_AXI_TXN;


always@(posedge clk)begin
	if(rst)
		pc <= 32'h80000000;
	else if(TXN_DONE)
		pc <= dnpc;
		INIT_AXI_TXN <= 1'b1;
	else
		pc <= pc;
		INIT_AXI_TXN <= 1'b0;
end

wire jalen,jalren,beqen,bneen,blten,bgeen,bltuen,bgeuen,ecall_en,mret_en;
assign jalen = (op == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op == 7'b1100111) ? 1'b1 : 1'b0;
assign beqen = (op == 7'b1100011 && funct3 == 3'b000 && (r1 == r2));
assign bneen = (op == 7'b1100011 && funct3 == 3'b001 && (r1 != r2));
assign blten = (op == 7'b1100011 && funct3 == 3'b100 && ($signed(r1) < $signed(r2)));
assign bgeen = (op == 7'b1100011 && funct3 == 3'b101 && ($signed(r1) >= $signed(r2)));
assign bltuen = (op == 7'b1100011 && funct3 == 3'b110 && (r1 < r2));
assign bgeuen = (op == 7'b1100011 && funct3 == 3'b111 && (r1 >= r2));
assign ecall_en = (op == 7'b1110011 && offset == 32'd0 && funct3 == 3'b000);
assign mret_en = (op == 7'b1110011 && offset == 32'b1100000010 && funct3 == 3'b000);

assign dnpc = (jalen) ? (pc + offset - 4)	//jal
	: (jalren) ? ((r1 + offset) & ~1) //jalr
	: (beqen) ? (pc + offset - 4)	//beq
	: (bneen) ? (pc + offset - 4)	//bne
	: (blten) ? (pc + offset - 4)	//blt
	: (bgeen) ? (pc + offset - 4)	//bge
	: (bltuen) ? (pc + offset - 4)	//bltu
	:	(bgeuen) ? (pc + offset - 4)	//bgeu
	: (ecall_en) ? mtvec  //ecall
	: (mret_en) ? mepc  //mret
	: pc + 4;

endmodule
