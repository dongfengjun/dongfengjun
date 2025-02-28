module SRAM_IFU_ysyx_24110017(
input clk,
input rst,
input wire [31:0] S_AXI_AWADDR,
input wire  S_AXI_AWVALID,
output wire  S_AXI_AWREADY,
input wire [31:0] S_AXI_WDATA,
input wire [3:0] S_AXI_WSTRB,
input wire  S_AXI_WVALID,
output wire  S_AXI_WREADY,
output wire [1:0] S_AXI_BRESP,
output wire  S_AXI_BVALID,
input wire  S_AXI_BREADY,

input wire [31: 0] S_AXI_ARADDR,
input wire  S_AXI_ARVALID,
output wire  S_AXI_ARREADY,
output wire [31:0] S_AXI_RDATA,
output wire [1:0] S_AXI_RRESP,
output wire  S_AXI_RVALID,
input wire  S_AXI_RREADY
);

reg [31:0]axi_rdata;
reg[31:0]tmp;
import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
	if(S_AXI_ARADDR != 32'h0) begin
		tmp = pmem_read(S_AXI_ARADDR);
	end
	else begin
		tmp = 32'h0;
	end
end
/***
always @(posedge clk) begin
	if(rst) begin
		rdata <= 32'h0;
	end
	else begin
		rdata <= tmp;
	end
end
***/
reg axi_arready,axi_rvalid;
assign S_AXI_ARREADY = axi_arready;
assign S_AXI_RVALID = axi_rvalid;
assign S_AXI_RDATA = axi_rdata;

always @(posedge clk) begin
        if (rst) begin
            axi_arready <= 0;
            axi_rvalid <= 0;
        end else begin
            if (S_AXI_ARVALID && !S_AXI_ARREADY) begin
                axi_arready <= 1;
            end
            if (axi_arready & S_AXI_ARVALID) begin
                axi_rvalid <= 1;
                axi_arready <= 0;
            end
            if (S_AXI_RVALID && S_AXI_RREADY) begin
								axi_rdata <= tmp;
                axi_rvalid <= 0;
            end
        end
    end
		
endmodule
