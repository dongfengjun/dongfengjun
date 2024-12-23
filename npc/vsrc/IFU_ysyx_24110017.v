module IFU_ysyx_24110017(pc,inst);
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
reg [31:0]inst;

import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
	inst = pmem_read(pc);
end

endmodule
