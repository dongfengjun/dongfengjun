module SRAM_IFU_ysyx_24110017(clk,rst,raddr,rdata);
input clk;
input rst;
input [31:0]raddr;
output [31:0]rdata;

wire [31:0]raddr,rdata;
reg[31:0]tmp;
import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
	if(raddr != 32'h0) begin
		tmp = pmem_read(raddr);
	end
	else begin
		tmp = 32'h0;
	end
end

always @(*) begin
	if(rst) begin
		rdata <= 32'h0;
	end
	else begin
		rdata <= tmp;
	end
end

endmodule
