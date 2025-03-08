module IFU_ysyx_24110017(clk,rst,
				pc,inst,PCU_VALID,IFU_READY,IFU_VALID,IDU_READY,difftest,
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
output difftest;
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

parameter WAIT_SRAM = 1'b0,WAIT_READY = 1'b1;
reg current_state,next_state;

always @(posedge clk) begin
  if (rst) begin
    current_state <= WAIT_VALID;
  end
	else begin
    current_state <= next_state;
  end
end

always @(*) begin
  next_state = current_state;
	if(rst) begin
		next_state = WAIT_VALID;
	end
  else begin
		case (current_state)
			WAIT_VALID: begin
				if(IFU_VALID) begin
					next_state = WAIT_READY;
				end
			end
			WAIT_READY: begin
				if(IDU_READY) begin
					next_state = WAIT_VALID;
				end
			end
			default: begin
				next_state = WAIT_VALID; // 默认回到初始状态
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
			WAIT_VALID: begin
				ifu_ready <= 1'b0;
				if(PCU_VALID) begin
					sram_start <= 1'b1;
				end
				if(if_done) begin //判断条件
					ifu_valid <= 1'b1;
					sram_start <= 1'b0;
				end
			end
			WAIT_READY: begin
				if(IFU_VALID && IDU_READY) begin
					ifu_valid <= 1'b0;
					ifu_ready <= 1'b1;
					inst <= M_AXI_RDATA;
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


parameter [1:0] IDLE=2'b00,FETCH=2'b01,DONE=2'b10,DIFF=2'b11;
reg [1:0]state;
reg sram_start;
reg if_done,difftest;
reg [31:0]inst_reg;

always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
						axi_araddr <= 32'h00000000;
            axi_arvalid <= 1'b0;
            axi_rready <= 1'b0;
						if_done <= 1'b0;
						difftest <= 1'b0;
        end 
				else begin
            case (state)
                IDLE: begin
                    if (sram_start) begin
                        axi_arvalid <= 1'b1;
												if_done <= 1'b0;
												difftest <= 1'b0;
                        state <= FETCH;
                    end
                end
                FETCH: begin
                    if (M_AXI_ARREADY) begin
                        axi_arvalid <= 1'b0;
                        axi_rready <= 1'b1;
												axi_araddr <= pc;
                    end
                    if (M_AXI_RVALID) begin
                        axi_rready <= 1'b0;
                        state <= DONE;
                    end
                end
                DONE: begin
									if(IFU_READY) begin
                    state <= IDLE;
										if_done <= 1'b1;
									end
                end
								DIFF: begin
										state <= IDLE;
										if_done <= 1'b0;
										difftest <= 1'b1;
								end 
            endcase
        end
    end

/***E*N*D***/

endmodule
