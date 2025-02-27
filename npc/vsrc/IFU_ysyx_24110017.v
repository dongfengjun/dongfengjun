module IFU_ysyx_24110017(clk,rst,pc,inst);
input clk;
input rst;
input [31:0]pc;
output [31:0]inst;
wire [31:0]pc;
reg [31:0]inst;
//wire [31:0]inst;

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

/***多周期sram***AXI4_LITE***/
wire [31:0]pc,inst;
wire [31:0] AXI_AWADDR,AXI_WDATA,AXI_ARADDR,AXI_RDATA;
wire [3:0] AXI_WSTRB;
wire [1:0] AXI_BRESP,AXI_RRESP;
wire AXI_AWVALID,AXI_AWREADY,AXI_WVALID,AXI_WREADY,AXI_BVALID,AXI_BREADY,AXI_ARVALID,AXI_ARREADY,AXI_RVALID,AXI_RREADY;
reg [31:0]araddr;
reg arvalid,rready;
assign AXI_ARADDR = axi_araddr;
assign AXI_ARVALID = axi_arvalid;
assign AXI_RREADY = axi_rready;

parameter [1:0] IDLE=2'b00,FETCH=2'b01,DONE=2'b10;
reg [1:0]state;

assign start = (pc >= 32'h80000000);

always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
						araddr <= 32'h80000000;
            arvalid <= 0;
            rready <= 0;
        end 
				else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        arvalid <= 1'b1;
                        state <= FETCH;
                    end
                end
                FETCH: begin
                    if (ARREADY) begin
                        arvalid <= 1'b0;
                        rready <= 1'b1;
												araddr <= pc;
                    end
                    if (RVALID) begin
                        inst <= RDATA;
                        RREADY <= 0;
                        state <= DONE;
                    end
                end
                DONE: begin
                    state <= IDLE;
                end
            endcase
        end
    end

SRAM_IFU_ysyx_24110017 SRAM_IFU_ysyx_24110017(clk,rst,
        AXI_AWADDR,AXI_AWVALID,AXI_AWREADY,
				AXI_WDATA,AXI_WSTRB,AXI_WVALID,AXI_WREADY,
				AXI_BRESP,AXI_BVALID,AXI_BREADY,
				AXI_ARADDR,AXI_ARVALID,AXI_ARREADY,
        AXI_RDATA,AXI_RRESP,AXI_RVALID,AXI_RREADY
);
/***E*N*D***/

endmodule
