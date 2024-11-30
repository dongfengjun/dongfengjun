module top(
  input clk,
  input rst
);
  wire clk,rst;

	PCU PCU(clk,rst,pc);
	IMU IMU();//C++
	IFU IFU(pc,inst);
	IDU IDU(inst,op,rd,funct3,rs1,imm);//仅addi
	EXU EXU(a,b,sel,res);
endmodule
