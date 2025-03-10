module LSU_ysyx_24110017(clk,rst,sram_lsu_read,sram_lsu_write,LSU_DONE,
			ls_rdata,
			valid,wen,waddr,wdata,raddr,wmask,
			M_AXI_AWADDR,M_AXI_AWVALID,M_AXI_AWREADY,
			M_AXI_WDATA,M_AXI_WSTRB,M_AXI_WVALID,M_AXI_WREADY,
			M_AXI_BRESP,M_AXI_BVALID,M_AXI_BREADY,
			M_AXI_ARADDR,M_AXI_ARVALID,M_AXI_ARREADY,
			M_AXI_RDATA,M_AXI_RRESP,M_AXI_RVALID,M_AXI_RREADY
);
input clk;
input rst;
input sram_lsu_read,sram_lsu_write;
output LSU_DONE;
output [31:0]ls_rdata;

input valid,wen;
input [31:0]waddr,wdata,raddr;
input [7:0]wmask;

output [31:0] M_AXI_AWADDR;
output M_AXI_AWVALID;
input  M_AXI_AWREADY;
output [31:0] M_AXI_WDATA;
output [7:0] M_AXI_WSTRB;
output M_AXI_WVALID;
input  M_AXI_WREADY;
input [1:0] M_AXI_BRESP;
input M_AXI_BVALID;
output M_AXI_BREADY;

output [31:0] M_AXI_ARADDR;
output M_AXI_ARVALID;
input M_AXI_ARREADY;
input [31:0] M_AXI_RDATA;
input [1:0] M_AXI_RRESP;
input M_AXI_RVALID;
output M_AXI_RREADY;

reg LSU_DONE;
wire [31:0]ls_rdata = M_AXI_RDATA;

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
/***DELAY_TEST_RAND***/
wire [7:0]rand_delay;
reg [7:0]delay_counter,delay_counter_2;
lfsr_ysyx_24110017 lfsr_ysyx_20110017(clk,rst,rand_delay);
/***END***/
wire [31:0] M_AXI_AWADDR,M_AXI_WDATA,M_AXI_ARADDR,M_AXI_RDATA;
wire [7:0] M_AXI_WSTRB;
wire [1:0] M_AXI_BRESP,M_AXI_RRESP;
wire M_AXI_AWVALID,M_AXI_AWREADY,M_AXI_WVALID,M_AXI_WREADY,M_AXI_BVALID,M_AXI_BREADY,M_AXI_ARVALID,M_AXI_ARREADY,M_AXI_RVALID,M_AXI_RREADY;

parameter IDLE=2'b0,READ=2'b01,WRITE=2'b10,DONE=2'b11;
reg [1:0]state;
reg axi_arvalid,axi_rready;
reg [31:0]axi_araddr;
assign M_AXI_ARVALID = axi_arvalid;
assign M_AXI_RREADY = axi_rready;
assign M_AXI_ARADDR = axi_araddr;
reg axi_awvalid,axi_wvalid;
reg [31:0]axi_awaddr,axi_wdata;
reg [7:0]axi_wstrb;
reg axi_bready;
assign M_AXI_AWVALID = axi_awvalid;
assign M_AXI_WVALID = axi_wvalid;
assign M_AXI_AWADDR = axi_awaddr;
assign M_AXI_WDATA = axi_wdata;
assign M_AXI_WSTRB = axi_wstrb;
assign M_AXI_BREADY = axi_bready;

always @(posedge clk or posedge rst) begin
		if (rst) begin
			state <= IDLE;
      axi_arvalid <= 0;
      axi_rready <= 0;
      axi_araddr <= 32'h0;
      axi_awvalid <= 0;
      axi_awaddr <= 32'h0;
      axi_wdata <= 32'h0;
      axi_wstrb <= 8'b0;
		  axi_wvalid <= 0;
      axi_bready <= 0;
			LSU_DONE <= 0;
			delay_counter <= 0;
			delay_counter_2 <= 0;
    end 
		else begin
      case (state)
        IDLE: begin
				  if(sram_lsu_read) begin
            state <= READ;
					end
					if(sram_lsu_write) begin
		        state <= WRITE;
	        end
/***DELAY_TEST_AR*AWVALID***/
					if(sram_lsu_read || sram_lsu_write) begin
						delay_counter <= rand_delay;
					end
/***END***/
				end
				READ: begin
					//axi_arvalid <= 1'b1;
/***DELAY_TEST_AR*AWVALID***/
		      if(delay_counter == 0) begin
	          delay_counter <= delay_counter;
          end
          else if(delay_counter == 1) begin
            axi_arvalid <= 1;
            delay_counter <= 0;
          end
          else begin
            delay_counter <= delay_counter - 1;
          end
/***END***/
          if(M_AXI_ARVALID && M_AXI_ARREADY) begin
						axi_arvalid <= 1'b0;
						axi_araddr <= raddr;
          end
					if(M_AXI_RVALID && !M_AXI_RREADY) begin
						axi_rready <= 1'b1;
					end
	        if(M_AXI_RVALID && M_AXI_RREADY) begin
            axi_rready <= 0;
            state <= DONE;
						LSU_DONE <= 1'b1;
          end
        end
				WRITE: begin
					//axi_awvalid <= 1'b1;
/***DELAY_TEST_AR*AWVALID***/
          if(delay_counter == 0) begin
            delay_counter <= delay_counter;
          end
          else if(delay_counter == 1) begin
            axi_awvalid <= 1;
            delay_counter <= 0;
          end
          else begin
            delay_counter <= delay_counter - 1;
          end
/***END***/
					if(M_AXI_AWVALID && M_AXI_AWREADY) begin
						axi_awvalid <= 0;
						//axi_wvalid <= 1;
						axi_awaddr <= waddr;
					end
/***DELAY_TEST_WVALID***/
					if(M_AXI_AWVALID && M_AXI_AWREADY) begin
            delay_counter_2 <= rand_delay;
          end
					else begin
						if(delay_counter_2 == 0) begin
              delay_counter_2 <= delay_counter_2;
            end
						else if(delay_counter_2 == 1) begin
							axi_wvalid <= 1;
							delay_counter_2 <= 0;
						end
						else begin
							delay_counter_2 <= delay_counter_2 - 1;
						end
					end
/***END***/
					if(M_AXI_WVALID && M_AXI_WREADY) begin
						axi_wvalid <= 0;
						axi_wdata <= wdata;//加判断条件
						axi_wstrb <= wmask;
					end
					//if(M_AXI_BVALID && !M_AXI_BREADY) begin
						//axi_bready <= 1;
					//end
/***DELAY_TEST_RAND*BREADY***/
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
					axi_wstrb <= 8'b0;
					axi_wvalid <= 0;
					axi_bready <= 0;
					LSU_DONE <= 0;
          state <= IDLE;
        end
      endcase
		end
end

/***E*N*D***/
endmodule
