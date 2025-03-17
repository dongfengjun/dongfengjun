module ysyx_24110017_SRAM(clk,rst,
		S_AXI_AWADDR,S_AXI_AWVALID,S_AXI_AWREADY,
    S_AXI_AWID,S_AXI_AWLEN,S_AXI_AWSIZE,S_AXI_AWBURST,S_AXI_WLAST,
    S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WVALID,S_AXI_WREADY,
    S_AXI_BRESP,S_AXI_BVALID,S_AXI_BREADY,S_AXI_BID,
    S_AXI_ARADDR,S_AXI_ARVALID,S_AXI_ARREADY,
    S_AXI_ARID,S_AXI_ARLEN,S_AXI_ARSIZE,S_AXI_ARBURST,
    S_AXI_RDATA,S_AXI_RRESP,S_AXI_RVALID,S_AXI_RREADY,
    S_AXI_RID,S_AXI_RLAST
);
input clk;
input rst;
output S_AXI_AWREADY;
input S_AXI_AWVALID;
input [3:0]S_AXI_AWID;
input [31:0] S_AXI_AWADDR; 
input [7:0]S_AXI_AWLEN;
input [2:0]S_AXI_AWSIZE;
input [1:0]S_AXI_AWBURST;
output S_AXI_WREADY;
input S_AXI_WVALID;
input [31:0]S_AXI_WDATA;
input [3:0]S_AXI_WSTRB;
input S_AXI_WLAST;
input S_AXI_BREADY;
output S_AXI_BVALID;
output [3:0]S_AXI_BID;
output [1:0]S_AXI_BRESP;

output S_AXI_ARREADY;
input S_AXI_ARVALID;
input [3:0]S_AXI_ARID;
input [31:0]S_AXI_ARADDR;
input [7:0]S_AXI_ARLEN;
input [2:0]S_AXI_ARSIZE;
input [1:0]S_AXI_ARBURST;
input S_AXI_RREADY;
output S_AXI_RVALID;
output [3:0]S_AXI_RID;
output [31:0] S_AXI_RDATA;
output [1:0] S_AXI_RRESP;
output S_AXI_RLAST;


wire [31:0]S_AXI_AWADDR,S_AXI_WDATA,S_AXI_ARADDR,S_AXI_RDATA;
wire [7:0]S_AXI_WSTRB;
wire [7:0]S_AXI_AWLEN,S_AXI_ARLEN;
wire [3:0]S_AXI_AWID,S_AXI_BID,S_AXI_ARID,S_AXI_RID;
wire [3:0]S_AXI_AWSIZE,S_AXI_ARSIZE;
wire [2:0]S_AXI_AWBURST,S_AXI_ARBURST;
wire [1:0]S_AXI_BRESP,S_AXI_RRESP;
wire S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WVALID,S_AXI_WREADY,S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RVALID,S_AXI_RREADY,S_AXI_RLAST;
reg axi_awready,axi_wready,axi_bvalid,axi_arready,axi_rvalid;
reg axi_rlast;
reg [1:0]axi_bresp,axi_rresp;
reg [3:0]axi_bid,axi_rid;
reg [31:0]axi_rdata;
assign S_AXI_AWREADY = axi_awready;
assign S_AXI_WREADY = axi_wready;
assign S_AXI_BVALID = axi_bvalid;
assign S_AXI_ARREADY = axi_arready;
assign S_AXI_RVALID = axi_rvalid;
assign S_AXI_RLAST = axi_rlast;
assign S_AXI_BRESP = axi_bresp;
assign S_AXI_RRESP = axi_rresp;
assign S_AXI_BID = axi_bid;
assign S_AXI_RID = axi_rid;
assign S_AXI_RDATA = axi_rdata;

reg [31:0]axi_araddr;
reg s_wen;

/***DELAY_TEST_RAND***
wire [7:0]rand_delay;
reg [7:0]delay_counter;
lfsr_ysyx_24110017 lfsr_ysyx_20110017(clk,rst,rand_delay);
***END***/

always @(posedge clk) begin
  if(rst) begin
		//delay_counter <= 8'b0; //delay_test_rand
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
	  if(S_AXI_ARVALID && !S_AXI_ARREADY) begin
			axi_arready <= 1;//判断条件
    end
/***DELAY_TEST_RAND***
    if(S_AXI_ARVALID && !S_AXI_ARREADY) begin
      if(delay_counter == 0) begin
        delay_counter <= rand_delay;
      end
			else if(delay_counter == 1) begin
				axi_arready <= 1;
				delay_counter <= 0;
			end
			else begin
				delay_counter <= delay_counter - 1;
			end
		end
***END***/
		if(S_AXI_ARVALID && S_AXI_ARREADY) begin
			axi_araddr <= S_AXI_ARADDR;
			axi_rvalid <= 1;//判断条件
			axi_arready <= 0;
			axi_rresp  <= 2'b11;
		end
		if(S_AXI_RVALID && S_AXI_RREADY) begin
			axi_rvalid <= 0;
			axi_rdata <= s_rdata;
		end
		if(S_AXI_AWVALID && !S_AXI_AWREADY) begin
			axi_awready <= 1;//判断条件
		end
/***DELAY_TEST_RAND*AWREADY***
    if(S_AXI_AWVALID && !S_AXI_AWREADY) begin
      if(delay_counter == 0) begin
        delay_counter <= rand_delay;
      end
      else if(delay_counter == 1) begin
        axi_awready <= 1;
        delay_counter <= 0;
      end
      else begin
        delay_counter <= delay_counter - 1;
      end
    end
***END***/
		if(S_AXI_AWVALID && S_AXI_AWREADY) begin
			axi_awready <= 0;
		end
		if(S_AXI_WVALID && !S_AXI_WREADY) begin
			axi_wready <= 1;
		end
/***DELAY_TEST_RAND*AWREADY***
    if(S_AXI_WVALID && !S_AXI_WREADY) begin
      if(delay_counter == 0) begin
        delay_counter <= rand_delay;
      end
      else if(delay_counter == 1) begin
        axi_wready <= 1;
        delay_counter <= 0;
      end
      else begin
        delay_counter <= delay_counter - 1;
      end
		end
***END***/
		if(S_AXI_WVALID && S_AXI_WREADY) begin
			axi_wready <= 0;
			axi_bvalid <= 1;
			s_wen <= 1;
		end
		if(s_wen == 1) begin
			s_wen <= 0;
		end
		if(S_AXI_BVALID && S_AXI_BREADY) begin
			axi_bvalid <= 0;
			axi_bresp <= 2'b00;
		end
	end
end

/***DPIC***/
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
 
reg [31:0]s_rdata;
always @(*) begin
  if(S_AXI_RVALID && S_AXI_RREADY) begin
    s_rdata = pmem_read(S_AXI_ARADDR);
	end
	else begin
    s_rdata = 32'h0;
  end
end
always @(*) begin
  if(s_wen) begin
    pmem_write(S_AXI_AWADDR,S_AXI_WDATA,S_AXI_WSTRB);
  end
end
/***END***/
/***yosys-sta***
reg [31:0]sta_rf[1024:0];
wire [31:0]s_rdata;
wire [9:0]waddr = S_AXI_AWADDR[9:0];
wire [9:0]raddr = S_AXI_ARADDR[9:0];

always @(posedge clk) begin
  if (s_wen) sta_rf[waddr] <= S_AXI_WDATA;
end

assign s_rdata = (raddr == 0) ? 32'b0 : sta_rf[raddr];
/***END***/

endmodule
