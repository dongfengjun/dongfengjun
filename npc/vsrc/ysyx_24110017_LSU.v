module ysyx_24110017_LSU(clk,rst,sram_lsu_read,sram_lsu_write,LSU_DONE,
		ls_rdata,
		valid,wen,waddr,wdata,raddr,wmask,awsize,arsize,awlen,arlen,awburst,arburst,
		M_AXI_AWREADY,M_AXI_AWVALID,M_AXI_AWID,M_AXI_AWADDR,
		M_AXI_AWLEN,M_AXI_AWSIZE,M_AXI_AWBURST,
		M_AXI_WREADY,M_AXI_WVALID,M_AXI_WDATA,M_AXI_WSTRB,M_AXI_WLAST,          
		M_AXI_BREADY,M_AXI_BVALID,M_AXI_BID,M_AXI_BRESP,
		M_AXI_ARREADY,M_AXI_ARVALID,M_AXI_ARID,M_AXI_ARADDR,
		M_AXI_ARLEN,M_AXI_ARSIZE,M_AXI_ARBURST,
		M_AXI_RREADY,M_AXI_RVALID,M_AXI_RID,M_AXI_RDATA,M_AXI_RRESP,M_AXI_RLAST
);
input clk;
input rst;
input sram_lsu_read,sram_lsu_write;
output LSU_DONE;
output [31:0]ls_rdata;

input valid,wen;
input [31:0]waddr,wdata,raddr;
input [3:0]wmask;
input [2:0]awsize,arsize;
input [7:0]awlen,arlen;
input [1:0]awburst,arburst;

input M_AXI_AWREADY;
output M_AXI_AWVALID;
output [3:0]M_AXI_AWID;
output [31:0]M_AXI_AWADDR;
output [7:0]M_AXI_AWLEN;
output [2:0]M_AXI_AWSIZE;
output [1:0]M_AXI_AWBURST;
input M_AXI_WREADY;
output M_AXI_WVALID;
output [31:0]M_AXI_WDATA;
output [3:0]M_AXI_WSTRB;
output M_AXI_WLAST;
output M_AXI_BREADY;
input M_AXI_BVALID;
input [3:0]M_AXI_BID;
input [1:0]M_AXI_BRESP;

input M_AXI_ARREADY;
output M_AXI_ARVALID;
output [3:0]M_AXI_ARID;
output [31:0]M_AXI_ARADDR;
output [7:0]M_AXI_ARLEN;
output [2:0]M_AXI_ARSIZE;
output [1:0]M_AXI_ARBURST;
output M_AXI_RREADY;
input M_AXI_RVALID;
input [3:0]M_AXI_RID;
input [31:0]M_AXI_RDATA;
input [1:0]M_AXI_RRESP;
input M_AXI_RLAST;


reg LSU_DONE;
reg [31:0]ls_rdata;

/***单周期*DPIC***
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(raddr);
    if (wen) begin // 有写请求时
      pmem_write(waddr, wdata, wmask);
    end
  end
  else begin
    rdata = 0;
  end
end
/***E*N*D***/

/***单周期*yosys-sta***
Sta_RegisterFile Sta_RegisterFile(clk,wdata,wdata[7:0],wen,raddr[7:0],rdata);
***E*N*D***/

/***多周期***/
/***DELAY_TEST_RAND***
wire [7:0]rand_delay;
reg [7:0]delay_counter,avalid_delay_counter,wvalid_delay_counter;
LFSR_ysyx_24110017 LFSR_ysyx_20110017(clk,rst,rand_delay);
***END***/
import "DPI-C" function void diff_skip_ref();

wire [31:0]M_AXI_AWADDR,M_AXI_WDATA,M_AXI_ARADDR,M_AXI_RDATA;             
wire [3:0]M_AXI_WSTRB;
wire [7:0]M_AXI_AWLEN,M_AXI_ARLEN;
wire [3:0]M_AXI_AWID,M_AXI_BID,M_AXI_ARID;
wire [3:0]M_AXI_AWSIZE,M_AXI_ARSIZE;
wire [2:0]M_AXI_AWBURST,M_AXI_ARBURST;
wire [1:0]M_AXI_BRESP,M_AXI_RRESP;
wire M_AXI_AWVALID,M_AXI_AWREADY,M_AXI_WVALID,M_AXI_WREADY,M_AXI_BVALID,M_AXI_BREADY,M_AXI_ARVALID,M_AXI_ARREADY,M_AXI_RVALID,M_AXI_RREADY,M_AXI_WLAST,M_AXI_RLAST;

parameter IDLE=2'b0,READ=2'b01,WRITE=2'b10,DONE=2'b11;
reg [1:0]state;

reg axi_awvalid,axi_wvalid;
reg [3:0]axi_awid;
reg [31:0]axi_awaddr,axi_wdata;
reg [7:0]axi_awlen;
reg [2:0]axi_awsize;
reg [1:0]axi_awburst;
reg [3:0]axi_wstrb;
reg axi_bready;
reg axi_wlast;
assign M_AXI_AWVALID = axi_awvalid;
assign M_AXI_WVALID = axi_wvalid;
assign M_AXI_AWID = axi_awid;
assign M_AXI_AWADDR = axi_awaddr;
assign M_AXI_WDATA = (M_AXI_WVALID && M_AXI_WREADY) ? wdata : 32'h0;//axi_wdata;
assign M_AXI_AWLEN = axi_awlen;
assign M_AXI_AWSIZE = axi_awsize;
assign M_AXI_AWBURST = axi_awburst;
assign M_AXI_WSTRB = (M_AXI_WVALID && M_AXI_WREADY) ? wmask : 4'b0;//axi_wstrb;
assign M_AXI_BREADY = axi_bready;
assign M_AXI_WLAST = axi_wlast;

reg axi_arvalid,axi_rready;
reg [3:0]axi_arid;
reg [31:0]axi_araddr;
reg [7:0]axi_arlen;
reg [2:0]axi_arsize;
reg [1:0]axi_arburst;
assign M_AXI_ARVALID = axi_arvalid;
assign M_AXI_RREADY = axi_rready;
assign M_AXI_ARID = axi_arid;
assign M_AXI_ARADDR = axi_araddr;
assign M_AXI_ARLEN = axi_arlen;
assign M_AXI_ARSIZE = axi_arsize;
assign M_AXI_ARBURST = axi_arburst;

always @(posedge clk or posedge rst) begin
		if (rst) begin
			state <= IDLE;
      axi_arvalid <= 0;
      axi_rready <= 0;
      axi_araddr <= 32'h0;
      axi_awvalid <= 0;
      axi_awaddr <= 32'h0;
			axi_arsize <= 3'b0;
			axi_arlen <= 8'b0;
			axi_arburst <= 2'b01;
			axi_awsize <= 3'b0; 
      axi_wdata <= 32'h0;
      axi_wstrb <= 4'b0;
		  axi_wvalid <= 0;
			axi_awlen <= 8'b0;
			axi_awburst <= 2'b01;
			axi_wlast <= 0;
      axi_bready <= 0;
			LSU_DONE <= 0;
			ls_rdata <= 32'h0;
//			delay_counter <= 0;
//			avalid_delay_counter <= 0;
//			wvalid_delay_counter <= 0;
    end 
		else begin
      case (state)
        IDLE: begin
				  if(sram_lsu_read) begin
            state <= READ;
					  axi_arvalid <= 1'b1;//非DELAY_TEST
						axi_araddr <= raddr;
						axi_arsize <= arsize;
						axi_arlen <= arlen;
						axi_arburst <= arburst;
					end
					if(sram_lsu_write) begin
		        state <= WRITE;
						axi_awvalid <= 1'b1;//非DELAY_TEST
						axi_awaddr <= waddr;
						axi_awsize <= awsize;
						axi_awlen <= awlen;
						axi_awburst <= awburst;
	        end
/***DELAY_TEST_AR*AWVALID***
					if(sram_lsu_read || sram_lsu_write) begin
						avalid_delay_counter <= rand_delay;
					end
/***END***/
				end
				READ: begin
/***DELAY_TEST_AR*ARVALID***
		      if(avalid_delay_counter == 0) begin
	          avalid_delay_counter <= avalid_delay_counter;
          end
          else if(avalid_delay_counter == 1) begin
            axi_arvalid <= 1;
            avalid_delay_counter <= 0;
          end
          else begin
            avalid_delay_counter <= avalid_delay_counter - 1;
          end
/***END***/
          if(M_AXI_ARVALID && M_AXI_ARREADY) begin
						axi_arvalid <= 1'b0;
						//axi_araddr <= raddr;
          end
					if(M_AXI_RVALID && !M_AXI_RREADY) begin
						axi_rready <= 1'b1;
						ls_rdata <= M_AXI_RDATA;
					end
/***DELAY_TEST_RAND*RREADY***
          if(M_AXI_RVALID && !M_AXI_RREADY) begin
            if(delay_counter == 0) begin
              delay_counter <= rand_delay;
            end
            else if(delay_counter == 1) begin
              axi_rready <= 1;
              delay_counter <= 0;
            end
            else begin
              delay_counter <= delay_counter - 1;
            end
          end
/***END***/
	        if(M_AXI_RVALID && M_AXI_RREADY) begin
            axi_rready <= 0;
            state <= DONE;
						LSU_DONE <= 1'b1;
						if(M_AXI_ARADDR == 32'h01000000 || M_AXI_ARADDR == 32'h01000004) begin
							diff_skip_ref();
						end
          end
        end
				WRITE: begin
/***DELAY_TEST_AR*AWVALID***
          if(avalid_delay_counter == 0) begin
            avalid_delay_counter <= avalid_delay_counter;
          end
          else if(avalid_delay_counter == 1) begin
            axi_awvalid <= 1;
            avalid_delay_counter <= 0;
          end
          else begin
            avalid_delay_counter <= avalid_delay_counter - 1;
          end
/***END***/
					if(M_AXI_AWVALID && M_AXI_AWREADY) begin
						axi_awvalid <= 0;
						axi_wvalid <= 1;
						axi_wlast <= 1;
						//axi_awaddr <= waddr;
					end
/***DELAY_TEST_WVALID***
					if(M_AXI_AWVALID && M_AXI_AWREADY) begin
            wvalid_delay_counter <= rand_delay;
          end
					else begin
						if(wvalid_delay_counter == 0) begin
              wvalid_delay_counter <= wvalid_delay_counter;
            end
						else if(wvalid_delay_counter == 1) begin
							axi_wvalid <= 1;
							wvalid_delay_counter <= 0;
						end
						else begin
							wvalid_delay_counter <= wvalid_delay_counter - 1;
						end
					end
/***END***/
					if(M_AXI_WVALID && M_AXI_WREADY) begin
						axi_wvalid <= 0;
						//axi_wdata <= wdata;//加判断条件
						//axi_wstrb <= wmask;
					end
					if(M_AXI_BVALID && !M_AXI_BREADY) begin
						axi_bready <= 1;
					end
/***DELAY_TEST_RAND*BREADY***
					if(M_AXI_BVALID && !M_AXI_BREADY) begin
			      if(delay_counter == 0) begin
			        delay_counter <= rand_delay;
			      end
						else if(delay_counter == 1) begin
							axi_bready <= 1;
							delay_counter <= 0;
						end
						else begin
							delay_counter <= delay_counter - 1;
						end
					end
/***END***/
					if(M_AXI_BVALID && M_AXI_BREADY) begin
						axi_bready <= 0;
						state <= DONE;
						LSU_DONE <= 1'b1;
					end
				end
        DONE: begin
					axi_arvalid <= 0;
					axi_rready <= 0;
					axi_araddr <= 32'h0;
					axi_awvalid <= 0;
					axi_awaddr <= 0;
					axi_wdata <= 32'h0;
					axi_wstrb <= 4'b0;
					axi_arsize <= 3'b0;
					axi_awsize <= 3'b0;
					axi_awburst <= 2'b0;
					axi_arburst <= 2'b0;
					axi_awlen <= 8'b0;
					axi_arlen <= 8'b0;
					axi_wvalid <= 0;
					axi_bready <= 0;
					LSU_DONE <= 0;
					ls_rdata <= 32'h0;
          state <= IDLE;
        end
      endcase
		end
end

/***E*N*D***/
endmodule
