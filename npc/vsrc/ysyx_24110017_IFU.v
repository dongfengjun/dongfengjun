module ysyx_24110017_IFU(
	input clk,
	input rst,
	input [31:0]pc_i,
	output [31:0]inst_o,
	input pc_valid_i,
	output if_ready_o,
	output if_valid_o,
	input id_ready_i,
	input wb_done_i,
/***AXI4_R**/
	input if_axi_awready_i,
	output if_axi_awvalid_o,
	output [3:0]if_axi_awid_o,
	output [31:0]if_axi_awaddr_o,
	output [7:0]if_axi_awlen_o,
	output [2:0]if_axi_awsize_o,
	output [1:0]if_axi_awburst_o,
	input if_axi_wready_i,
	output if_axi_wvalid_o,
	output [31:0]if_axi_wdata_o,
	output [3:0]if_axi_wstrb_o,
	output if_axi_wlast_o,
	output if_axi_bready_o,
	input if_axi_bvalid_i,
	input [3:0]if_axi_bid_i,
	input [1:0]if_axi_bresp_i,
/***AXI4*R***/
	input if_axi_arready_i,
	output if_axi_arvalid_o,
	output [3:0]if_axi_arid_o,
	output [31:0]if_axi_araddr_o,
	output [7:0]if_axi_arlen_o,
	output [2:0]if_axi_arsize_o,
	output [1:0]if_axi_arburst_o,
	output if_axi_rready_o,
	input if_axi_rvalid_i,
	input [3:0]if_axi_rid_i,
	input [31:0]if_axi_rdata_i,
	input [1:0]if_axi_rresp_i,
	input if_axi_rlast_i
);

reg if_ready_reg;
assign if_ready_o = if_ready_reg;
reg if_valid_reg;
assign if_valid_o = if_valid_reg;

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
reg [31:0]inst_reg;
assign inst_o = inst_reg;

parameter IDLE_IFU = 2'b00,WAIT_SRAM = 2'b01,WAIT_IDU_READY = 2'b10,DONE_IFU = 2'b11;
reg [1:0]state,next_state;

always @(posedge clk) begin
  if (rst) begin
    state <= IDLE_IFU;
  end
	else begin
    state <= next_state;
  end
end

always @(*) begin
	if(rst) begin
		state = IDLE_IFU;
	end
  else begin
		case (state)
			IDLE_IFU: begin
				if(pc_valid_i) begin
					next_state = WAIT_SRAM;
				end
			end
			WAIT_SRAM: begin
				if(if_valid_o) begin
					next_state = WAIT_IDU_READY;
				end
			end
			WAIT_IDU_READY: begin
				if(id_ready_i) begin
					next_state = DONE_IFU;
				end
			end
			DONE_IFU: begin
				if(wb_done_i) begin
					next_state = IDLE_IFU;
				end
			end
			default: begin
				next_state = IDLE_IFU;
			end
		endcase
	end
end

always @(posedge clk or posedge rst) begin
	if(rst) begin
		if_valid_reg <= 1'b0;
		if_ready_reg <= 1'b0;
		fetch_start <= 1'b0;
		inst_reg <= 32'h0;
	end
	else begin
		case (state)
			IDLE_IFU: begin
				if_valid_reg <= 1'b0;
				if(pc_valid_i) begin
					sram_start <= 1'b1;
				end
				if_ready_reg <= 1'b0;
			end
			WAIT_SRAM: begin
				sram_start <= 1'b0;
				if(if_axi_rvalid_i && if_axi_rready_o) begin
					if_valid_reg <= 1'b1;
				end
			end
			WAIT_IDU_READY: begin
				if(if_valid_o && id_ready_i) begin
					if_valid_reg <= 1'b0;
					inst_reg <= axi_rdata;
				end
			end
			DONE_IFU: begin
				if(wb_done_i) begin
          if_ready_reg <= 1'b1;
        end
			end
		endcase
	end
end

/***AXI4_LITE***/
assign if_axi_awvalid_o = 0;
assign if_axi_wvalid_o = 0;
assign if_axi_awid_o = 0;
assign if_axi_awaddr_o = 0;
assign if_axi_wdata_o = 0;
assign if_axi_awlen_o = 0;
assign if_axi_awsize_o = 0;
assign if_axi_awburst_o = 0;
assign if_axi_wstrb_o = 0;
assign if_axi_bready_o = 0;

reg axi_arvalid,axi_rready;
reg [3:0]axi_arid;
reg [31:0]axi_araddr;
reg [7:0]axi_arlen;
reg [2:0]axi_arsize;
reg [1:0]axi_arburst;
assign if_axi_arvalid_o = axi_arvalid;
assign if_axi_rready_o = axi_rready;
assign if_axi_arid_o = axi_arid;
assign if_axi_araddr_o = axi_araddr;
assign if_axi_arlen_o = axi_arlen;
assign if_axi_arsize_o = axi_arsize;
assign if_axi_arburst_o = axi_arburst;

parameter IDLE=1'b0,FETCH=1'b1;
reg axi_state;
reg fetch_start;
reg [31:0]axi_rdata;

/***DELAY_TEST_RAND***
wire [7:0]rand_delay;
reg [7:0]delay_counter;
LFSR_ysyx_24110017 LFSR_ysyx_20110017(clk,rst,rand_delay);
/***END***/

always @(posedge clk) begin
        if(rst) begin
          axi_state <= IDLE;
					axi_arvalid <= 0;
					axi_rready <= 0;
					axi_arid <= 4'b0;
					axi_araddr <= 32'h0;
					axi_arlen <= 8'b0;
					axi_arsize <= 3'b0;
					axi_arburst <= 2'b0;

					//delay_counter <= 8'b0; //delay_test_rand
        end 
				else begin
            case (axi_state)
                IDLE: begin
                    if (fetch_start) begin
                        axi_state <= FETCH;
												axi_arvalid <= 1'b1;
												axi_araddr <= pc_i;
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
                FETCH: begin
                    if(if_axi_arvalid_o && if_axi_arready_i) begin
                        axi_arvalid <= 1'b0;
										end
										if(if_axi_rvalid_i && !if_axi_rready_o) begin
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
                    if (if_axi_rvalid_o && if_axi_rready_i) begin
												axi_state <= IDLE; 
                        axi_rready <= 1'b0;
												axi_rdata <= if_axi_rdata_i;
                    end
                end
            endcase
        end
    end

/***E*N*D***/

endmodule
