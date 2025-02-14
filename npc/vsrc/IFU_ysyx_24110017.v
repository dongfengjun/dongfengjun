module IFU_ysyx_24110017(clk,pc,inst);
input clk;
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
reg [31:0]inst;
//wire [31:0]inst;

/***DPIC***/
import "DPI-C" function int pmem_read(input int raddr);

wire ifuen;
assign ifuen = 1'b1;
//(pc != 32'h00000000) ? 1'b1:1'b0;
always @(*) begin
	if(ifuen) begin
		inst = pmem_read(pc);
	end
	else begin
		inst = 32'h00000000;
	end
end
/***E*N*D***/

/***yosys-sta***
wire wen;
wire [7:0]waddr;
wire [31:0]wdata;
Sta_RegisterFile Sta_RegisterFile(clk,wdata,wdata[7:0],wen,pc[7:0],inst);
***E*N*D***/

endmodule
