module PCU_ysyx_24110017(clk,rst,op,funct3,offset,r1,r2,mtvec,mepc,pc,dnpc,IF_DONE);
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
input [31:0]dnpc;
input IF_DONE;
reg [31:0]pc;
wire [31:0]dnpc;

always@(posedge clk)begin
	if(rst)
		pc <= 32'h80000000;
	else if(IF_DONE)
		pc <= dnpc;
	else
		pc <= pc;
end

endmodule
