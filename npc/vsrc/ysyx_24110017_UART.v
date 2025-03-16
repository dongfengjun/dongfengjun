module UART_ysyx_24110017(
    input wire clk,
    input wire rst,
    input wire [31:0]U_AXI_AWADDR,
    input wire U_AXI_AWVALID,
    output wire U_AXI_AWREADY,
    input wire [31:0]U_AXI_WDATA,
    input wire [7:0]U_AXI_WSTRB,
    input wire U_AXI_WVALID,
    output wire U_AXI_WREADY,
    output wire [1:0]U_AXI_BRESP,
    output wire U_AXI_BVALID,
    input wire U_AXI_BREADY,

    input wire [31:0]U_AXI_ARADDR,
    input wire U_AXI_ARVALID,
    output wire U_AXI_ARREADY,
    output wire [31:0]U_AXI_RDATA,
    output wire [1:0]U_AXI_RRESP,
    output wire U_AXI_RVALID,
    input wire U_AXI_RREADY
);

reg axi_arready,axi_rvalid,axi_awready,axi_wready,axi_bvalid;
reg [1:0]axi_rresp,axi_bresp;
reg [31:0]axi_rdata;
reg [31:0]axi_araddr;
assign U_AXI_ARREADY = axi_arready;
assign U_AXI_RVALID = axi_rvalid;
assign U_AXI_AWREADY = axi_awready;
assign U_AXI_WREADY = axi_wready;
assign U_AXI_BRESP = axi_bresp;
assign U_AXI_BVALID = axi_bvalid;
assign U_AXI_RDATA = axi_rdata;

localparam DEVICE_UART_ADDR = 32'ha00003f8;
reg [31:0] device_uart_reg;
reg ureg_wen;

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
