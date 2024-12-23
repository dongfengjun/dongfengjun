module IFU_ysyx_24110017(pc,inst);
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
reg [31:0]inst;

import "DPI-C" function int pmem_read(input int raddr);

wire ifuen;
assign ifuen = (pc != 32'h00000000) ? 1'b1:1'b0;
always @(*) begin
	if(ifuen) begin
		inst = pmem_read(pc);
	end
	else begin
		inst = 32'h00000000;
	end
end

endmodule
