module RegisterFile_ysyx_24110017 #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
	input [ADDR_WIDTH-1:0]raddr,
	output [DATA_WIDTH-1:0]rdata,
	output [DATA_WIDTH-1:0]a0
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
	always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

	assign rdata = (raddr == 0) ? 32'b0 : rf[raddr];	
	assign a0 = rf[10];
/***DPI-C***/
export "DPI-C" function gpr_reg_display;
function int gpr_reg_display(int addr);
	begin
		assign gpr_reg_display = rf[addr];
	end
endfunction

endmodule
