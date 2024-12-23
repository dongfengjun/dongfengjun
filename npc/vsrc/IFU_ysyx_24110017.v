module IFU_ysyx_24110017(pc,inst);
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
wire [31:0]inst;

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void ifu(input int raddr, output int rdata);

always @(*) begin
	ifu(pc, inst);
end

endmodule
