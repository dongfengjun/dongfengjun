module PCU_ysyx_24110017(clk,rst,pc);
input	clk;
input rst;
output [31:0]pc;
reg[31:0]pc;

always@(posedge clk)
	if(rst)
		pc <= 32'h80000000;
	else
		pc <= pc + 4;
endmodule
