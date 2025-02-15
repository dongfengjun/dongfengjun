module SRAM_LSU_ysyx_24110017(clk,rst,valid,wen,waddr,wdata,wmask,raddr,rdata);
input clk;
input rst;
input valid;
input wen;
input [31:0]waddr;
input [31:0]wdata;
input [7:0]wmask;
input [31:0]raddr;
output [31:0]rdata;

wire [31:0]waddr;
wire [31:0]wdata;
wire [7:0]wmask;
wire [31:0]raddr;
reg [31:0]rdata;

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

always @(*) begin
	if(valid) begin
		rdata = pmem_read(raddr);
		if(wen) begin
			pmem_write(waddr,wdata,wmask);
		end
	end
	else begin
		rdata = 0;
	end
end

endmodule
