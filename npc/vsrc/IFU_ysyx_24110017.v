module IFU_ysyx_24110017(pc,inst);
input [31:0]pc;
output [31:0]inst;
reg [31:0]inst;

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

assign ifen = (pc != 0) ? 1'b1 : 1'b0;
always @(*) begin
	if(ifen) begin
		inst = pmem_read(pc);
	end
end

endmodule
