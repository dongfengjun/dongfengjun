module ysyx_24110017_CLINT(
    input  wire clk,
    input  wire rst,
		output wire c_axi_awready,
    input  wire c_axi_awvalid,
    input  wire [ 3:0]c_axi_awid,
    input  wire [31:0]c_axi_awaddr,
    input  wire [ 7:0]c_axi_awlen,
    input  wire [ 2:0]c_axi_awsize,
    input  wire [ 1:0]c_axi_awburst,
    output wire c_axi_wready,
    input  wire c_axi_wvalid,
    input  wire [31:0]c_axi_wdata,
    input  wire [ 3:0]c_axi_wstrb,
    input  wire c_axi_wlast,
    input  wire c_axi_bready,
    output wire c_axi_bvalid,
    output wire [ 3:0]c_axi_bid,
    output wire [ 1:0]c_axi_bresp,

    output reg  c_axi_arready,
    input  wire c_axi_arvalid,
    input  wire [ 3:0]c_axi_arid,
    input  wire [31:0]c_axi_araddr,
    input  wire [ 7:0]c_axi_arlen,
    input  wire [ 2:0]c_axi_arsize,
    input  wire [ 1:0]c_axi_arburst,
    input  wire c_axi_rready,
    output reg  c_axi_rvalid,
    output reg  [ 3:0]c_axi_rid,
    output reg  [31:0]c_axi_rdata,
    output wire [1:0]c_axi_rresp,
    output wire c_axi_rlast
);

localparam DEVICE_CLINT_LOW_ADDR = 32'h02000000;
localparam DEVICE_CLINT_HIGH_ADDR = 32'h02000004;
reg [63:0] mtime;

always @(posedge clk) begin
	if(rst) begin
		mtime <= 64'b0;
	end
	else begin
		mtime <= mtime + 1;
	end
end

wire[31:0] c_rdata = {32{(c_axi_arvalid && c_axi_arready)}} &
 {32{(c_axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | 
 {32{(c_axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];

always @(posedge clk) begin
  if(rst) begin
    c_axi_arready <= 1'b0;
    c_axi_rvalid  <= 1'b0;
    c_axi_rdata   <= 32'b0;
	end 
	else begin
		axi_arready <= 1'b1;
		if(c_axi_arvalid && c_axi_arready) begin
			c_axi_rvalid <= 1'b1;
			c_axi_rdata  <= c_rdata;
		end
		if(c_axi_rvalid && c_axi_rready) begin
			c_axi_rvalid <= 1'b0;
			c_axi_rdata	 <= 32'h0;
		end
	end
end

endmodule
