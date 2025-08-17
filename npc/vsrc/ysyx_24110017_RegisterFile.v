//`define YOSYS_STA
module ysyx_24110017_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
	input [ADDR_WIDTH-1:0]raddr1,
	output [DATA_WIDTH-1:0]r1,
	input [ADDR_WIDTH-1:0]raddr2,
	output [DATA_WIDTH-1:0]r2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
	always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

	assign r1 = (raddr1 == 0) ? 32'b0 : rf[raddr1];
	assign r2 = (raddr2 == 0) ? 32'b0 : rf[raddr2];	

/***DPI-C***/
`ifndef YOSYS_STA
export "DPI-C" function gpr_reg_grab;
function int gpr_reg_grab(int addr);
	begin
		assign gpr_reg_grab = (addr == 0) ? 32'b0 : rf[addr];
	end
endfunction
`endif
/***E*N*D***/

endmodule
