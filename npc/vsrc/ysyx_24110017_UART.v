module ysyx_24110017_UART(
    input wire clk,
    input wire rst,
		output wire U_AXI_AWREADY,
    input wire U_AXI_AWVALID,
    input wire [3:0]U_AXI_AWID,
    input wire [31:0]U_AXI_AWADDR,
    input wire [7:0]U_AXI_AWLEN,
    input wire [2:0]U_AXI_AWSIZE,
    input wire [1:0]U_AXI_AWBURST,
    output wire U_AXI_WREADY,
    input wire U_AXI_WVALID,
    input wire [31:0]U_AXI_WDATA,
    input wire [3:0]U_AXI_WSTRB,
    input wire U_AXI_WLAST,
    input wire U_AXI_BREADY,
    output wire U_AXI_BVALID,
    output wire [3:0]U_AXI_BID,
    output wire [1:0]U_AXI_BRESP,

		output wire U_AXI_ARREADY,
    input wire U_AXI_ARVALID,
    input wire [3:0]U_AXI_ARID,
    input wire [31:0]U_AXI_ARADDR,
    input wire [7:0]U_AXI_ARLEN,
    input wire [2:0]U_AXI_ARSIZE,
    input wire [1:0]U_AXI_ARBURST,
    input wire U_AXI_RREADY,
    output wire U_AXI_RVALID,
    output wire [3:0]U_AXI_RID,
    output wire [31:0]U_AXI_RDATA,
    output wire [1:0]U_AXI_RRESP,
    output wire U_AXI_RLAST
);

reg axi_awready,axi_wready,axi_bvalid,axi_arready,axi_rvalid;
reg axi_rlast;
reg [1:0]axi_bresp,axi_rresp;
reg [3:0]axi_bid,axi_rid;
reg [31:0]axi_rdata;
assign U_AXI_AWREADY = axi_awready;
assign U_AXI_WREADY = axi_wready;
assign U_AXI_BVALID = axi_bvalid;
assign U_AXI_ARREADY = axi_arready;
assign U_AXI_RVALID = axi_rvalid;
assign U_AXI_RLAST = axi_rlast;
assign U_AXI_BRESP = axi_bresp;
assign U_AXI_RRESP = axi_rresp;
assign U_AXI_BID = axi_bid;
assign U_AXI_RID = axi_rid;
assign U_AXI_RDATA = axi_rdata;

reg [31:0]axi_araddr;
localparam DEVICE_UART_ADDR = 32'ha00003f8;
reg [31:0]device_uart_reg;
reg ureg_wen;

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
	  if(U_AXI_ARVALID && !U_AXI_ARREADY) begin
			axi_arready <= 1;//判断条件
    end
		if(U_AXI_ARVALID && U_AXI_ARREADY) begin
			axi_araddr <= U_AXI_ARADDR;
			axi_rvalid <= 1;//判断条件
			axi_arready <= 0;
			axi_rresp  <= 2'b11; //无读权限
		end
		if(U_AXI_RVALID && U_AXI_RREADY) begin
			axi_rvalid <= 0;
			axi_rdata <= 32'h0; //无读权限
		end
		if(U_AXI_AWVALID && !U_AXI_AWREADY) begin
			axi_awready <= 1;//判断条件
		end
		if(U_AXI_AWVALID && U_AXI_AWREADY) begin
			axi_awready <= 0;
		end
		if(U_AXI_WVALID && !U_AXI_WREADY) begin
			axi_wready <= 1;
		end
		if(U_AXI_WVALID && U_AXI_WREADY) begin
			axi_wready <= 0;
			axi_bvalid <= 1;
			ureg_wen <= 1;
		end
		if(ureg_wen) begin
			if(U_AXI_AWADDR == DEVICE_UART_ADDR) begin
        device_uart_reg <= U_AXI_WDATA;
        $write("%c",U_AXI_WDATA[7:0]);
      end
			ureg_wen <= 0;
		end
		if(U_AXI_BVALID && U_AXI_BREADY) begin
			axi_bvalid <= 0;
			axi_bresp <= 2'b00;
		end
	end
end

endmodule
