module PCU_ysyx_24110017(clk,rst,jalen,jalren,offset,r1,pc);
input	clk;
input rst;
input jalen;
input jalren;
input [31:0]offset;
input [31:0]r1;
output [31:0]pc;
reg[31:0]pc;

always@(posedge clk)
	if(rst)
		pc <= 32'h80000000;
	else begin
		if(jalen)
			pc <= pc + offset;//jal
		else if(jalren)
			pc <= ((r1 + offset) & ~1);//jalr
		else
			pc <= pc + 4;
	end
endmodule
