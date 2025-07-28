//`define YOSYS_STA
`include "common.vh"
module ysyx_24110017_LSU(
	input clk,
	input rst,
	input ls_read_i,ls_write_i,
	output ls_done_o,
	output [31:0]ls_rdata_o,

	input valid_i,wen_i,
	input [31:0]waddr_i,wdata_i,raddr_i,
	input [3:0]wmask_i,
	input [2:0]awsize_i,arsize_i,
	input [7:0]awlen_i,arlen_i,
	input [1:0]awburst_i,arburst_i,

	input ls_axi_awready,
	output ls_axi_awvalid,
	output [3:0]ls_axi_awid,
	output [31:0]ls_axi_awaddr,
	output [7:0]ls_axi_awlen,
	output [2:0]ls_axi_awsize,
	output [1:0]ls_axi_awburst,
	input ls_axi_wready,
	output ls_axi_wvalid,
	output [31:0]ls_axi_wdata,
	output [3:0]ls_axi_wstrb,
	output ls_axi_wlast,
	output ls_axi_bready,
	input ls_axi_bvalid,
	input [3:0]ls_axi_bid,
	input [1:0]ls_axi_bresp,

	input ls_axi_arready,
	output ls_axi_arvalid,
	output [3:0]ls_axi_arid,
	output [31:0]ls_axi_araddr,
	output [7:0]ls_axi_arlen,
	output [2:0]ls_axi_arsize,
	output [1:0]ls_axi_arburst,
	output ls_axi_rready,
	input ls_axi_rvalid,
	input [3:0]ls_axi_rid,
	input [31:0]ls_axi_rdata,
	input [1:0]ls_axi_rresp,
	input ls_axi_rlast
);

reg ls_done_reg;
assign ls_done_o = ls_done_reg;
reg [31:0]ls_rdata_reg;
assign ls_rdata_o = ls_rdata_reg;

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
assign ls_axi_awvalid = axi_awvalid;
assign ls_axi_wvalid = axi_wvalid;
assign ls_axi_awid = axi_awid;
assign ls_axi_awaddr = axi_awaddr;
assign ls_axi_wdata = (ls_axi_wvalid && ls_axi_wready) ? wdata_i : 32'h0;//axi_wdata;
assign ls_axi_awlen = axi_awlen;
assign ls_axi_awsize = axi_awsize;
assign ls_axi_awburst = axi_awburst;
assign ls_axi_wstrb = (ls_axi_wvalid && ls_axi_wready) ? wmask_i : 4'b0;//axi_wstrb;
assign ls_axi_bready = axi_bready;
assign ls_axi_wlast = axi_wlast;

reg axi_arvalid,axi_rready;
reg [3:0]axi_arid;
reg [31:0]axi_araddr;
reg [7:0]axi_arlen;
reg [2:0]axi_arsize;
reg [1:0]axi_arburst;
assign ls_axi_arvalid = axi_arvalid;
assign ls_axi_rready = axi_rready;
assign ls_axi_arid = axi_arid;
assign ls_axi_araddr = axi_araddr;
assign ls_axi_arlen = axi_arlen;
assign ls_axi_arsize = axi_arsize;
assign ls_axi_arburst = axi_arburst;

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

			ls_done_reg <= 0;
			ls_rdata_reg <= 32'h0;
//			delay_counter <= 0;
//			avalid_delay_counter <= 0;
//			wvalid_delay_counter <= 0;
    end 
		else begin
      case (state)
        IDLE: begin
				  if(ls_read_i) begin
            state <= READ;
					  axi_arvalid <= 1'b1;//非DELAY_TEST
						axi_araddr <= raddr_i;
						axi_arsize <= arsize_i;
						axi_arlen <= arlen_i;
						axi_arburst <= arburst_i;
					end
					if(ls_write_i) begin
		        state <= WRITE;
						axi_awvalid <= 1'b1;//非DELAY_TEST
						axi_awaddr <= waddr_i;
						axi_awsize <= awsize_i;
						axi_awlen <= awlen_i;
						axi_awburst <= awburst_i;
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
          if(ls_axi_arvalid && ls_axi_arready) begin
						axi_arvalid <= 1'b0;
						//axi_araddr <= raddr;
          end
					if(ls_axi_rvalid && !ls_axi_rready) begin
						axi_rready <= 1'b1;
						ls_rdata_reg <= ls_axi_rdata;
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
	        if(ls_axi_rvalid && ls_axi_rready) begin
            axi_rready <= 0;
            state <= DONE;
						if((ls_axi_araddr - 32'h10000000 < 32'h1000) || (ls_axi_araddr == 32'h02000000) || (ls_axi_araddr == 32'h02000004)) begin //DEVICE DIFFTEST
							diff_skip_ref();
						end
`ifndef YOSYS_STA						
						if((ls_axi_araddr - 32'h10000000 < 32'h1000) || (ls_axi_araddr == 32'h02000000) || (ls_axi_araddr == 32'h02000004)) begin //DEVICE DIFFTEST
							diff_skip_ref();
						end
`endif
						ls_done_reg <= 1'b1;
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
					if(ls_axi_awvalid && ls_axi_awready) begin
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
					if(ls_axi_wvalid && ls_axi_wready) begin
						axi_wvalid <= 0;
						//axi_wdata <= wdata;//加判断条件
						//axi_wstrb <= wmask;
					end
					if(ls_axi_bvalid && !ls_axi_bready) begin
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
					if(ls_axi_bvalid && ls_axi_bready) begin
						axi_bready <= 0;
						state <= DONE;
						ls_done_reg <= 1'b1;
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
					ls_done_reg <= 0;
					ls_rdata_reg <= 32'h0;
          state <= IDLE;
        end
      endcase
		end
end
/***END***/
endmodule
