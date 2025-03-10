module IFU_ysyx_24110017(clk,rst,
				pc,inst,PCU_VALID,IFU_READY,IFU_VALID,IDU_READY,wbu_done,
				M_AXI_AWADDR,M_AXI_AWVALID,M_AXI_AWREADY,
        M_AXI_WDATA,M_AXI_WSTRB,M_AXI_WVALID,M_AXI_WREADY,
        M_AXI_BRESP,M_AXI_BVALID,M_AXI_BREADY,
        M_AXI_ARADDR,M_AXI_ARVALID,M_AXI_ARREADY,
        M_AXI_RDATA,M_AXI_RRESP,M_AXI_RVALID,M_AXI_RREADY
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
output [31:0] M_AXI_AWADDR;
output M_AXI_AWVALID;
input  M_AXI_AWREADY;
output [31:0] M_AXI_WDATA;
output [3:0] M_AXI_WSTRB;
output M_AXI_WVALID;
input  M_AXI_WREADY;
input [1:0] M_AXI_BRESP;
input M_AXI_BVALID;
output M_AXI_BREADY;
/***SRAM*R***/
output [31:0] M_AXI_ARADDR;
output M_AXI_ARVALID;
input M_AXI_ARREADY;
input [31:0] M_AXI_RDATA;
input [1:0] M_AXI_RRESP;
input M_AXI_RVALID;
output M_AXI_RREADY;

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
wire [31:0] M_AXI_AWADDR,M_AXI_WDATA,M_AXI_ARADDR,M_AXI_RDATA;
wire [3:0] M_AXI_WSTRB;
wire [1:0] M_AXI_BRESP,M_AXI_RRESP;
wire M_AXI_AWVALID,M_AXI_AWREADY,M_AXI_WVALID,M_AXI_WREADY,M_AXI_BVALID,M_AXI_BREADY,M_AXI_ARVALID,M_AXI_ARREADY,M_AXI_RVALID,M_AXI_RREADY;
reg [31:0]axi_araddr;
reg axi_arvalid,axi_rready;
assign M_AXI_ARADDR = axi_araddr;
assign M_AXI_ARVALID = axi_arvalid;
assign M_AXI_RREADY = axi_rready;


parameter [1:0] SRAM_IDLE=2'b00,SRAM_FETCH=2'b01,SRAM_DONE=2'b10,SRAM_NULL=2'b11;
reg [1:0]state;
reg sram_start;
reg sram_ifu_done;

/***DELAY_TEST_RAND***/
wire [7:0]rand_delay;
reg [7:0]delay_counter;
reg [7:0]current_delay;
lfsr_ysyx_24110017 lfsr_ysyx_20110017(clk,rst,rand_delay);
/***END***/

always @(posedge clk) begin
        if (rst) begin
            state <= SRAM_IDLE;
						axi_araddr <= 32'h00000000;
            axi_arvalid <= 1'b0;
            axi_rready <= 1'b0;
						sram_ifu_done <= 1'b0;

						delay_counter <= 8'b0; //delay_test_rand
            current_delay <= 8'b0; 
        end 
				else begin
            case (state)
                SRAM_IDLE: begin
										sram_ifu_done <= 1'b0;
                    //if (sram_start) begin
                        //state <= SRAM_FETCH;
												//axi_arvalid <= 1'b1;
                    //end
								/***DELAY_TEST_RAND***M_AXI_ARVALID***/
										if(sram_start) begin
								        current_delay <= rand_delay;
										end
										else begin
											if(delay_counter == 0) begin
												delay_counter <= current_delay;
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
                    if (M_AXI_ARREADY) begin
                        axi_arvalid <= 1'b0;
                        axi_rready <= 1'b1;
												axi_araddr <= pc;
                    end
                    if (M_AXI_RVALID) begin
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
