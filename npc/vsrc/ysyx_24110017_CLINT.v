module ysyx_24110017_CLINT(
    input  wire clk,
    input  wire rst,

    output reg	      c_axi_arready,
    input  wire       c_axi_arvalid,
    input  wire [ 3:0]c_axi_arid,
    input  wire [31:0]c_axi_araddr,
    input  wire [ 7:0]c_axi_arlen,
    input  wire [ 2:0]c_axi_arsize,
    input  wire [ 1:0]c_axi_arburst,
    input  wire       c_axi_rready,
    output reg        c_axi_rvalid,
    output wire [ 3:0]c_axi_rid,
    output reg [31:0]c_axi_rdata,
    output wire [ 1:0]c_axi_rresp,
    output wire       c_axi_rlast
);

localparam DEVICE_CLINT_LOW_ADDR = 32'h02000000;
localparam DEVICE_CLINT_HIGH_ADDR = 32'h02000004;

wire[31:0] c_rdata = {32{(c_axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | {32{(c_axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];

always @(posedge clk) begin
  if(rst) begin
    c_axi_arready <= 1'b0;
    c_axi_rvalid  <= 1'b0;
	end
	else begin
		c_axi_arready <= 1'b1;
		if(c_axi_arvalid && c_axi_arready) begin
			c_axi_rvalid <= 1'b1;
			c_axi_rdata  <= c_rdata;
		end
		if(c_axi_rvalid && c_axi_rready) begin
			c_axi_rvalid <= 1'b0;
		end
	end
end

/***基本二进制***/
reg [63:0] mtime;
always @(posedge clk) begin
	if(rst) begin
		mtime <= 64'b0;
	end
	else begin
		mtime <= mtime + 1;
	end
end

endmodule
