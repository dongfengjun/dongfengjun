module IFU(
input [31:0]pc;
output [31:0]inst;
);

always@(pc)
	begin
		inst[7:0] <= im[pc+3];
		inst[15:8] <= im[pc+2];
		inst[15:8] <= im[pc+1];
		inst[15:8] <= im[pc];
	end
endmodule
