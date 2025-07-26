module ysyx_24110017_CLINT(
    input wire clk,
    input wire rst,
		    output wire c_axi_awready,
    input wire c_axi_awvalid,
    input wire [3:0]c_axi_awid,
    input wire [31:0]c_axi_awaddr,
    input wire [7:0]c_axi_awlen,
    input wire [2:0]c_axi_awsize,
    input wire [1:0]c_axi_awburst,
    output wire c_axi_wready,
    input wire c_axi_wvalid,
    input wire [31:0]c_axi_wdata,
    input wire [3:0]c_axi_wstrb,
    input wire c_axi_wlast,
    input wire c_axi_bready,
    output wire c_axi_bvalid,
    output wire [3:0]c_axi_bid,
    output wire [1:0]c_axi_bresp,

    output wire c_axi_arready,
    input wire c_axi_arvalid,
    input wire [3:0]c_axi_arid,
    input wire [31:0]c_axi_araddr,
    input wire [7:0]c_axi_arlen,
    input wire [2:0]c_axi_arsize,
    input wire [1:0]c_axi_arburst,
    input wire c_axi_rready,
    output wire c_axi_rvalid,
    output wire [3:0]c_axi_rid,
    output wire [31:0]c_axi_rdata,
    output wire [1:0]c_axi_rresp,
    output wire c_axi_rlast
);

reg axi_awready,axi_wready,axi_bvalid,axi_arready,axi_rvalid;
reg axi_rlast;
reg [1:0]axi_bresp,axi_rresp;
reg [3:0]axi_bid,axi_rid;
reg [31:0]axi_rdata;
assign c_axi_awready = axi_awready;
assign c_axi_wready = axi_wready;
assign c_axi_bvalid = axi_bvalid;
assign c_axi_arready = axi_arready;
assign c_axi_rvalid = axi_rvalid;
assign c_axi_rlast = axi_rlast;
assign c_axi_bresp = axi_bresp;
assign c_axi_rresp = axi_rresp;
assign c_axi_bid = axi_bid;
assign c_axi_rid = axi_rid;
assign c_axi_rdata = axi_rdata;

reg [31:0]axi_araddr;
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

wire [31:0]c_rdata;
assign c_rdata = {32{(c_axi_arvalid && c_axi_arready)}} &
 {32{(c_axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | 
 {32{(c_axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];

always @(posedge clk) begin
  if(rst) begin
		axi_awready <= 0;
    axi_wready <= 0;
    axi_bvalid <= 0;
    axi_arready <= 0;
    axi_rvalid <= 0;
    axi_rlast <= 0;
    axi_bresp <= 2'b0;
    axi_rresp <= 2'b0;
    axi_bid <= 4'b0;
    axi_rid <= 4'b0;
    axi_rdata <= 32'b0;
	end 
	else begin
	  if(c_axi_arvalid && !c_axi_arready) begin
			axi_arready <= 1; //判断条件
    end
		if(c_axi_arvalid && c_axi_arready) begin
			axi_araddr <= c_axi_araddr;
			axi_rvalid <= 1;
			axi_arready <= 0;
			axi_rdata <= c_rdata;
			axi_rresp  <= 2'b00;
		end
		if(c_axi_rvalid && c_axi_rready) begin
			axi_araddr <= 32'b0;
			axi_rvalid <= 0;
			axi_rdata <= 32'h0;
		end
		if(c_axi_awvalid && !c_axi_awready) begin
			axi_awready <= 1; //判断条件
		end
		if(c_axi_awvalid && c_axi_awready) begin
			axi_awready <= 0;
		end
		if(c_axi_wvalid && !c_axi_wready) begin
			axi_wready <= 1;
		end
		if(c_axi_wvalid && c_axi_wready) begin
			axi_wready <= 0; //无写权限
			axi_bvalid <= 1;
		end
		if(c_axi_bvalid && c_axi_bready) begin
			axi_bvalid <= 0;
			axi_bresp <= 2'b11; //无写权限
		end
	end
end

endmodule
