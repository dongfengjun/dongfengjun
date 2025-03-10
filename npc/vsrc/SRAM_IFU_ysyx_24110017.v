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
reg [1:0]axi_rresp;
assign S_AXI_ARREADY = axi_arready;
assign S_AXI_RVALID = axi_rvalid;
assign S_AXI_RDATA = axi_rdata;
assign S_AXI_RRESP = axi_rresp;

/***DELAY_TEST_RAND***/
wire [7:0]rand_delay;
reg [7:0]delay_counter;
reg [7:0]current_delay;
lfsr_ysyx_24110017 lfsr_ysyx_20110017(clk,rst,rand_delay);
/***END***/

always @(posedge clk) begin
        if (rst) begin
            axi_arready <= 0;
				    delay_counter <= 8'b0; //delay_test_rand
				    current_delay <= 8'b0; 
            axi_rvalid <= 0;
        end else begin
            //if (S_AXI_ARVALID && !S_AXI_ARREADY) begin
              //axi_arready <= 1;
            //end
						/***DELAY_TEST_RAND***/
						if(S_AXI_ARVALID && !S_AXI_ARREADY) begin
				      if(delay_counter == 0) begin
								//current_delay <= rand_delay;
								//delay_counter <= current_delay;
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
						/***END***/

            if (axi_arready & S_AXI_ARVALID) begin
                axi_rvalid <= 1;//判断条件
                axi_arready <= 0;
								axi_rresp  <= 2'b0;
            end
						if (S_AXI_RREADY && S_AXI_RVALID) begin
								axi_rvalid <= 0;
								axi_rdata <= tmp;
            end
        end
    end
		
endmodule
