module PCU_ysyx_24110017(clk,rst,pc,dnpc,IF_DONE);
input	clk;
input rst;
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
