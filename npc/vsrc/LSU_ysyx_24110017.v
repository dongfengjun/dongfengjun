module LSU_ysyx_24110017(clk,rst,op,r1,r2,offset,function3,rdata);
input clk;
input rst;
input [6:0]op;
input [31:0]r1,r2;
input [31:0]offset;
input [2:0]function3;
output [31:0]rdata;

wire valid,wen;
wire [31:0]raddr;
wire [31:0]waddr, wdata;
wire [7:0]wmask;
 
assign valid = (op == 7'b0000011 || op == 7'b0100011) ? 1'b1 : 1'b0;
assign wen = (op == 7'b0100011) ? 1'b1 : 1'b0;
assign waddr = (op == 7'b0100011) ? (r1 + offset) : 32'h80000000;
assign wdata = (op == 7'b0100011) ? r2 : 32'b0;
assign wmask = (op == 7'b0100011 && function3 == 3'b000) ? 8'b00000001
 : (op == 7'b0100011 && function3 == 3'b001) ? 8'b00000011
 : (op == 7'b0100011 && function3 == 3'b010) ? 8'b00001111
 : 8'b0;
assign raddr = (op == 7'b0000011) ? (r1 + offset) : 32'h80000000;

/***单周期*DPIC***
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

reg [31:0]rdata;
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
wire [31:0]rdata;
wire [31:0] AXI_AWADDR,AXI_WDATA,AXI_ARADDR,AXI_RDATA;
wire [3:0] AXI_WSTRB;
wire [1:0] AXI_BRESP,AXI_RRESP;
wire AXI_AWVALID,AXI_AWREADY,AXI_WVALID,AXI_WREADY,AXI_BVALID,AXI_BREADY,AXI_ARVALID,AXI_ARREADY,AXI_RVALID,AXI_RREADY;
parameter IDLE=2'b0,READ=2'b01,WRITE=2'b10,DONE=2'b11;
reg state;
reg axi_arvalid,axi_rready;
assign AXI_ARVALID = axi_arvalid;
assign AXI_RREADY = axi_rready;
reg axi_awvalid,axi_wvalid;
reg [31:0]axi_awadrr,axi_wdata;
reg [3:0]axi_wstrb;
reg axi_bready;
reg [1:0]axi_bresp;
assign AXI_AWVALID = axi_awvalid;
assign AXI_WDATA = axi_wdata;
assign AXI_WSTRB = axi_wstrb;
assign AXI_BREADY = axi_bready;
assign AXI_BRESP = axi_bresp;

always @(posedge clk or posedge rst) begin
		if (rst) begin
			state <= IDLE;
      axi_arvalid <= 0;
      axi_rready <= 0;
      axi_araddr <= 32'h0;
      axi_awvalid <= 0;
      axi_awaddr <= 0;
      axi_wdata <= 32'h0;
      axi_wstrb <= 4'b0;
		  axi_wvalid <= 0;
      axi_bready <= 0;
			axi_bresp <= 2'b0;
    end 
		else begin
      case (state)
        IDLE: begin
				  if(valid) begin
						if(wen) begin
							axi_awvalid <= 1'b1;
		          state <= WRITE;
	          end
						else begin
							axi_arvalid <= 1'b1;
							state <= READ;
						end
					end
				end
				READ: begin
          if(AXI_ARREADY) begin
						axi_arvalid <= 0;
            axi_rready <= 1;//加判断条件
						axi_araddr <= raddr;
          end
	        if(AXI_RVALID) begin
            rdata <= AXI_RDATA;
            axi_rready <= 0;
            state <= DONE;
          end
        end
				WRITE: begin
					if(AXI_AWREADY) begin
						axi_awvalid <= 0;
						axi_wvalid <= 1;
						axi_waddr <= waddr;
					end
					if(AXI_WREADY) begin
						axi_wvalid <= 0;
						axi_wdata <= wdata;//加判断条件
						axi_wstrb <= wmask;
						axi_bready <= 1;
					end
					if(AXI_BVALID) begin
						axi_bready <= 0;
						axi_bresp <= AXI_BRESP;
						state <= DONE;
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
					axi_wvalid <= 0;
					axi_bready <= 0;
					axi_bresp <= 2'b0;
          state <= IDLE;
        end
      endcase
		end
end

SRAM_LSU_ysyx_24110017 SRAM_LSU_ysyx_24110017(clk,rst,
				AXI_AWADDR,AXI_AWVALID,AXI_AWREADY,
        AXI_WDATA,AXI_WSTRB,AXI_WVALID,AXI_WREADY,
        AXI_BRESP,AXI_BVALID,AXI_BREADY,
        AXI_ARADDR,AXI_ARVALID,AXI_ARREADY,
        AXI_RDATA,AXI_RRESP,AXI_RVALID,AXI_RREADY
);
/***E*N*D***/

endmodule
