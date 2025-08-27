module ysyx_24110017_RegisterFile #(ADDR_WIDTH = 4, DATA_WIDTH = 32) (
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
    if (wen && (waddr != 0)) rf[waddr] <= wdata;
	end

	wire [31:0] rdata1_low = {
		({32{raddr1[3:0] == 'd1}} & rf[1]) |
		({32{raddr1[3:0] == 'd2}} & rf[2]) |
		({32{raddr1[3:0] == 'd3}} & rf[3]) |
		({32{raddr1[3:0] == 'd4}} & rf[4]) |
		({32{raddr1[3:0] == 'd5}} & rf[5]) |
		({32{raddr1[3:0] == 'd6}} & rf[6]) |
		({32{raddr1[3:0] == 'd7}} & rf[7]) 
	};
	wire [31:0] rdata1_high = {
		({32{raddr1[3:0] == 'd8 }} & rf[8]) |
		({32{raddr1[3:0] == 'd9 }} & rf[9]) |
		({32{raddr1[3:0] == 'd10}} & rf[10]) |
		({32{raddr1[3:0] == 'd11}} & rf[11]) |
		({32{raddr1[3:0] == 'd12}} & rf[12]) |
		({32{raddr1[3:0] == 'd13}} & rf[13]) |
		({32{raddr1[3:0] == 'd14}} & rf[14]) |
		({32{raddr1[3:0] == 'd15}} & rf[15])
	};

	wire [31:0] rdata2_low = {
		({32{raddr2[3:0] == 'd1}} & rf[1]) |
		({32{raddr2[3:0] == 'd2}} & rf[2]) |
		({32{raddr2[3:0] == 'd3}} & rf[3]) |
		({32{raddr2[3:0] == 'd4}} & rf[4]) |
		({32{raddr2[3:0] == 'd5}} & rf[5]) |
		({32{raddr2[3:0] == 'd6}} & rf[6]) |
		({32{raddr2[3:0] == 'd7}} & rf[7])
	};
	wire [31:0] rdata2_high = {
		({32{raddr2[3:0] == 'd8 }} & rf[8]) |
		({32{raddr2[3:0] == 'd9 }} & rf[9]) |
		({32{raddr2[3:0] == 'd10}} & rf[10]) |
		({32{raddr2[3:0] == 'd11}} & rf[11]) |
		({32{raddr2[3:0] == 'd12}} & rf[12]) |
		({32{raddr2[3:0] == 'd13}} & rf[13]) |
		({32{raddr2[3:0] == 'd14}} & rf[14]) |
		({32{raddr2[3:0] == 'd15}} & rf[15])
 };
 assign r1 = raddr1[3] ? rdata1_high : rdata1_low;
 assign r2 = raddr2[3] ? rdata2_high : rdata2_low;

/***DPI-C***/
`ifndef YOSYS_STA
export "DPI-C" function gpr_reg_grab;
function int gpr_reg_grab(int addr);
	begin
		assign gpr_reg_grab = rf[addr];
	end
endfunction
`endif
/***E*N*D***/

endmodule
