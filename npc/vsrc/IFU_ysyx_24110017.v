module IFU_ysyx_24110017(clk,pc,inst);
input clk;
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
reg [31:0]inst;
//wire [31:0]inst;

/***单周期***
import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
	if(pc != 32'h0) begin
		inst = pmem_read(pc);
	end
	else begin
		inst = 32'h0;
	end
end
/***E*N*D***/

/***yosys-sta***
wire wen;
wire [7:0]waddr;
wire [31:0]wdata;
Sta_RegisterFile Sta_RegisterFile(clk,wdata,wdata[7:0],wen,pc[7:0],inst);
/***E*N*D***/

/***多周期sram***/
import "DPI-C" function int pmem_read(input int raddr);

reg [31:0]rdata
always @(*) begin
  if(pc != 32'h0) begin
    rdata = pmem_read(pc);
  end
  else begin
    rdata = 32'h0;
  end
end

always @(posedge clk) begin
	if(rst) begin
		inst <= 32'h0;
	end
	else begin
		inst <= rdata;
	end
end

endmodule
