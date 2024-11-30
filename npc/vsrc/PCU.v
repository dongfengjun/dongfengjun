module PCU(
	input	clk,
	input rst,
	output [31:0]pc
);
always@(posedge clk or negedge rst)
	if(!rst)
		pc <= 32'h80000000;
	else
		pc <= pc + 4;
endmodule
