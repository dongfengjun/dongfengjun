module SRAM_LSU_ysyx_24110017(clk,rst,
				S_AXI_AWADDR,S_AXI_AWVALID,S_AXI_AWREADY,
        S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WVALID,S_AXI_WREADY,
        S_AXI_BRESP,S_AXI_BVALID,S_AXI_BREADY,
        S_AXI_ARADDR,S_AXI_ARVALID,S_AXI_ARREADY,
        S_AXI_RDATA,S_AXI_RRESP,S_AXI_RVALID,S_AXI_RREADY);
input clk;
input rst;
input [31:0] S_AXI_AWADDR;
input S_AXI_AWVALID;
output S_AXI_AWREADY;
input [31:0] S_AXI_WDATA;
input [3:0] S_AXI_WSTRB;
input S_AXI_WVALID;
output S_AXI_WREADY;
output [1:0] S_AXI_BRESP;
output S_AXI_BVALID;
input S_AXI_BREADY;

input [31:0]S_AXI_ARADDR;
input S_AXI_ARVALID;
output S_AXI_ARREADY;
output [31:0] S_AXI_RDATA;
output [1:0] S_AXI_RRESP;
output S_AXI_RVALID;
input S_AXI_RREADY;

wire [31:0] S_AXI_AWADDR,S_AXI_WDATA,S_AXI_ARADDR,S_AXI_RDATA;
wire [3:0] S_AXI_WSTRB;
wire [1:0] S_AXI_BRESP,S_AXI_RRESP;
wire S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WVALID,S_AXI_WREADY,S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RVALID,S_AXI_RREADY;
reg axi_arready,axi_rvalid,axi_awready,axi_wready,axi_bvalid;
reg [1:0]axi_rresp,axi_bresp;
reg [31:0]axi_rdata;
assign S_AXI_ARREADY = axi_arready;
assign S_AXI_RVALID = axi_rvalid;
assign S_AXI_AWREADY = axi_awready;
assign S_AXI_WREADY = axi_wready;
assign S_AXI_BRESP = axi_bresp;
assign S_AXI_BVALID = axi_bvalid;
assign S_AXI_RDATA = axi_rdata;

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
	  if(S_AXI_ARVALID && !S_AXI_ARREADY) begin
			axi_arready <= 1;//判断条件
    end
    if(S_AXI_ARVALID && S_AXI_ARREADY) begin
      axi_rvalid <= 1;//判断条件
      axi_arready <= 0;
      axi_rresp  <= 2'b0;
    end
    if(S_AXI_RREADY) begin
      axi_rvalid <= 0;
      axi_rdata <= rdata;
    end
		if(S_AXI_AWVALID && !S_AXI_AWREADY) begin
			axi_awready <= 1;//判断条件
		end
		if(S_AXI_AWVALID && S_AXI_AWREADY) begin
			axi_awready <= 0;
			axi_wready <= 1;
		end
		if(S_AXI_WVALID && S_AXI_WREADY) begin
			axi_wready <= 0;
			axi_bvalid <= 1;
		end
		if(S_AXI_BVALID && S_AXI_BREADY) begin
			axi_bvalid <= 0;
			axi_bresp <= 2'b0;
		end
  end
end

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
 
reg [31:0]rdata;
always @(*) begin
  if(S_AXI_ARVALID && S_AXI_ARREADY) begin // 有读写请求时
    rdata = pmem_read(S_AXI_ARADDR);
	end
  else if(S_AXI_WVALID && S_AXI_WREADY) begin // 有写请求时
    pmem_write(S_AXI_AWADDR,S_AXI__WDATA,S_AXI_WSTRB);
  end
	else begin
    rdata = 32'h0;
  end
end


endmodule
