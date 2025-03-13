module CLINT_ysyx_24110017(
    input wire clk,
    input wire rst,
    input wire [31:0]C_AXI_AWADDR,
    input wire C_AXI_AWVALID,
    output wire C_AXI_AWREADY,
    input wire [31:0]C_AXI_WDATA,
    input wire [7:0]C_AXI_WSTRB,
    input wire C_AXI_WVALID,
    output wire C_AXI_WREADY,
    output wire [1:0]C_AXI_BRESP,
    output wire C_AXI_BVALID,
    input wire C_AXI_BREADY,

    input wire [31:0]C_AXI_ARADDR,
    input wire C_AXI_ARVALID,
    output wire C_AXI_ARREADY,
    output wire [31:0]C_AXI_RDATA,
    output wire [1:0]C_AXI_RRESP,
    output wire C_AXI_RVALID,
    input wire C_AXI_RREADY
);

reg axi_arready,axi_rvalid,axi_awready,axi_wready,axi_bvalid;
reg [1:0]axi_rresp,axi_bresp;
wire [31:0]axi_rdata;
reg [31:0]axi_araddr;
assign C_AXI_ARREADY = axi_arready;
assign C_AXI_RVALID = axi_rvalid;
assign C_AXI_AWREADY = axi_awready;
assign C_AXI_WREADY = axi_wready;
assign C_AXI_BRESP = axi_bresp;
assign C_AXI_BVALID = axi_bvalid;
assign C_AXI_RDATA = axi_rdata;

localparam DEVICE_CLINT_LOW_ADDR = 32'ha0000048;
localparam DEVICE_CLINT_HIGH_ADDR = 32'ha000004c;
reg [63:0] mtime;
always @(posedge clk) begin
	if(rst) begin
		mtime <= 64'b0;
	end
	else begin
		mtime <= mtime + 1;
	end
end

assign axi_rdata = {32{(axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | {32{(axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];

always @(posedge clk) begin
  if(rst) begin
    axi_arready <= 0;
    axi_rvalid <= 0;
		axi_awready <= 0;
		axi_wready <= 0;
		axi_bresp <= 2'b00;
		axi_bvalid <= 0;
  end 
	else begin
	  if(C_AXI_ARVALID && !C_AXI_ARREADY) begin
			axi_arready <= 1; //判断条件
    end
		if(C_AXI_ARVALID && C_AXI_ARREADY) begin
			axi_araddr <= C_AXI_ARADDR;
			axi_rvalid <= 1; //判断条件
			axi_arready <= 0;
			axi_rresp  <= 2'b00;
		end
		if(C_AXI_RVALID && C_AXI_RREADY) begin
			axi_rvalid <= 0;
		end
		if(C_AXI_AWVALID && !C_AXI_AWREADY) begin
			axi_awready <= 1; //判断条件
		end
		if(C_AXI_AWVALID && C_AXI_AWREADY) begin
			axi_awready <= 0;
		end
		if(C_AXI_WVALID && !C_AXI_WREADY) begin
			axi_wready <= 1;
		end
		if(C_AXI_WVALID && C_AXI_WREADY) begin
			axi_wready <= 0; //无写权限
			axi_bvalid <= 1;
		end
		if(C_AXI_BVALID && C_AXI_BREADY) begin
			axi_bvalid <= 0;
			axi_bresp <= 2'b11; //无写权限
		end
	end
end

endmodule
