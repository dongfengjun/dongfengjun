module ysyx_24110017_IFU(clk,rst,
		pc,inst,PCU_VALID,IFU_READY,IFU_VALID,IDU_READY,wbu_done,
		M_AXI_AWADDR,M_AXI_AWVALID,M_AXI_AWREADY,
    M_AXI_AWID,M_AXI_AWLEN,M_AXI_AWSIZE,M_AXI_AWBURST,M_AXI_WLAST,
    M_AXI_WDATA,M_AXI_WSTRB,M_AXI_WVALID,M_AXI_WREADY,
    M_AXI_BRESP,M_AXI_BVALID,M_AXI_BREADY,M_AXI_BID,
    M_AXI_ARADDR,M_AXI_ARVALID,M_AXI_ARREADY,
    M_AXI_ARID,M_AXI_ARLEN,M_AXI_ARSIZE,M_AXI_ARBURST,
    M_AXI_RDATA,M_AXI_RRESP,M_AXI_RVALID,M_AXI_RREADY,
    M_AXI_RID,M_AXI_RLAST
);
input clk;
input rst;
input [31:0]pc;
output [31:0]inst;
input PCU_VALID;
output IFU_READY;
output IFU_VALID;
input IDU_READY;
input wbu_done;
/***SRAM*W**/
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
/***SRAM*R***/
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

wire [31:0]pc;
wire PCU_VALID,IFU_READY;
reg ifu_ready;
assign IFU_READY =ifu_ready;
wire IFU_VALID,IDU_READY;
reg ifu_valid;
assign IFU_VALID = ifu_valid;

/***单周期***
import "DPI-C" function int pmem_read(input int raddr);

always @(*) begin
	if(pc != 32'h0) begin
		inst = pmem_read(pc);
	end
	else begin
		inst = 32'h0;
	end
end
/***E*N*D***/

/***yosys-sta***
wire wen;
wire [7:0]waddr;
wire [31:0]wdata;
Sta_RegisterFile Sta_RegisterFile(clk,wdata,wdata[7:0],wen,pc[7:0],inst);
/***E*N*D***/

/***多周期*分布式控制***/
reg [31:0]inst;

parameter IDLE_IFU = 2'b00,WAIT_SRAM = 2'b01,WAIT_IDU_READY = 2'b10,DONE_IFU = 2'b11;
reg [1:0]current_state,next_state;

always @(posedge clk) begin
  if (rst) begin
    current_state <= IDLE_IFU;
  end
	else begin
    current_state <= next_state;
  end
end

always @(*) begin
  next_state = current_state;
	if(rst) begin
		next_state = IDLE_IFU;
	end
  else begin
		case (current_state)
			IDLE_IFU: begin
				if(PCU_VALID) begin
					next_state = WAIT_SRAM;
				end
			end
			WAIT_SRAM: begin
				if(IFU_VALID) begin
					next_state = WAIT_IDU_READY;
				end
			end
			WAIT_IDU_READY: begin
				if(IDU_READY) begin
					next_state = DONE_IFU;
				end
			end
			DONE_IFU: begin
				if(wbu_done) begin
					next_state = IDLE_IFU;
				end
			end
			default: begin
				next_state = IDLE_IFU;
			end
		endcase
	end
end

always @(posedge clk) begin
	if(rst) begin
		ifu_valid <= 1'b0;
		ifu_ready <= 1'b0;
		sram_start <= 1'b0;
		inst <= 32'h0;
	end
	else begin
		case (current_state)
			IDLE_IFU: begin
				ifu_valid <= 1'b0;
				if(PCU_VALID) begin
					sram_start <= 1'b1;
				end
				ifu_ready <= 1'b0;
			end
			WAIT_SRAM: begin
				sram_start <= 1'b0;
				if(sram_ifu_done) begin
					ifu_valid <= 1'b1;
				end
			end
			WAIT_IDU_READY: begin
				if(IFU_VALID && IDU_READY) begin
					ifu_valid <= 1'b0;
					inst <= M_AXI_RDATA;
				end
			end
			DONE_IFU: begin
				if(wbu_done) begin
          ifu_ready <= 1'b1;
        end
			end
		endcase
	end
end

/***多周期sram***AXI4_LITE***/
wire [31:0]pc;
wire [31:0]M_AXI_AWADDR,M_AXI_WDATA,M_AXI_ARADDR,M_AXI_RDATA;             
wire [3:0]M_AXI_WSTRB;
wire [7:0]M_AXI_AWLEN,M_AXI_ARLEN;
wire [3:0]M_AXI_AWID,M_AXI_BID,M_AXI_ARID;
wire [3:0]M_AXI_AWSIZE,M_AXI_ARSIZE;
wire [2:0]M_AXI_AWBURST,M_AXI_ARBURST;
wire [1:0]M_AXI_BRESP,M_AXI_RRESP;
wire M_AXI_AWVALID,M_AXI_AWREADY,M_AXI_WVALID,M_AXI_WREADY,M_AXI_BVALID,M_AXI_BREADY,M_AXI_ARVALID,M_AXI_ARREADY,M_AXI_RVALID,M_AXI_RREADY,M_AXI_WLAST,M_AXI_RLAST;

assign M_AXI_AWVALID = 0;
assign M_AXI_WVALID = 0;
assign M_AXI_AWID = 0;
assign M_AXI_AWADDR = 0;
assign M_AXI_WDATA = 0;
assign M_AXI_AWLEN = 0;
assign M_AXI_AWSIZE = 0;
assign M_AXI_AWBURST = 0;
assign M_AXI_WSTRB = 0;
assign M_AXI_BREADY = 0;

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


parameter [1:0] SRAM_IDLE=2'b00,SRAM_FETCH=2'b01,SRAM_DONE=2'b10,SRAM_NULL=2'b11;
reg [1:0]state;
reg sram_start;
reg sram_ifu_done;

/***DELAY_TEST_RAND***
wire [7:0]rand_delay;
reg [7:0]delay_counter;
LFSR_ysyx_24110017 LFSR_ysyx_20110017(clk,rst,rand_delay);
/***END***/

always @(posedge clk) begin
        if(rst) begin
          state <= SRAM_IDLE;
					axi_arvalid <= 0;
					axi_rready <= 0;
					axi_arid <= 4'b0;
					axi_araddr <= 32'h0;
					axi_arlen <= 8'b0;
					axi_arsize <= 3'b0;
					axi_arburst <= 2'b0;
					sram_ifu_done <= 1'b0;

					//delay_counter <= 8'b0; //delay_test_rand
        end 
				else begin
            case (state)
                SRAM_IDLE: begin
										sram_ifu_done <= 1'b0;
                    if (sram_start) begin
                        state <= SRAM_FETCH;
												axi_arvalid <= 1'b1;
												axi_araddr <= pc;
                    end
								/***DELAY_TEST_RAND***M_AXI_ARVALID***
										if(sram_start) begin
								        delay_counter <= rand_delay;
										end
										else begin
											if(delay_counter == 0) begin
												delay_counter <= delay_counter;
											end
											else if(delay_counter == 1) begin
												state <= SRAM_FETCH;
												axi_arvalid <= 1;
												delay_counter <= 0;
											end
											else begin
												delay_counter <= delay_counter - 1;
											end
										end
								/***END***/
                end
                SRAM_FETCH: begin
                    if(M_AXI_ARVALID && M_AXI_ARREADY) begin
                        axi_arvalid <= 1'b0;
												//axi_araddr <= pc;
										end
										if(M_AXI_RVALID && !M_AXI_RREADY) begin
											axi_rready <= 1'b1;
										end
/***DELAY_TEST_RAND***M_AXI_RREADY***
										if (M_AXI_RVALID && !M_AXI_RREADY) begin
											if(delay_counter == 0) begin
												delay_counter <= rand_delay;
											end
                      else if(delay_counter == 1) begin
                        state <= SRAM_FETCH;
                        axi_rready <= 1;
                        delay_counter <= 0;
                      end
                      else begin
                        delay_counter <= delay_counter - 1;
                      end
                    end
/***END***/
                    if (M_AXI_RVALID && M_AXI_RREADY) begin
												state <= SRAM_DONE; 
                        axi_rready <= 1'b0;
                    end
                end
                SRAM_DONE: begin
                  state <= SRAM_IDLE;
									sram_ifu_done <= 1'b1;
                end
								SRAM_NULL: begin
									state <= SRAM_IDLE;
								end 
            endcase
        end
    end

/***E*N*D***/

endmodule
