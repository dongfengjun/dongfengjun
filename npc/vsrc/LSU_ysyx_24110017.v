module LSU_ysyx_24110017(clk,rst,op,funct3,rdata,lrd,ldone,lbdone,lhdone,lwdone,lbudone,lhudone,valid,wen,waddr,wdata,raddr,wmask,
			M_AXI_AWADDR,M_AXI_AWVALID,M_AXI_AWREADY,
			M_AXI_WDATA,M_AXI_WSTRB,M_AXI_WVALID,M_AXI_WREADY,
			M_AXI_BRESP,M_AXI_BVALID,M_AXI_BREADY,
			M_AXI_ARADDR,M_AXI_ARVALID,M_AXI_ARREADY,
			M_AXI_RDATA,M_AXI_RRESP,M_AXI_RVALID,M_AXI_RREADY
);
input clk;
input rst;
input [6:0]op;
input [2:0]funct3;
output [31:0]rdata;
output [4:0]lrd;
output ldone;
output lbdone,lhdone,lwdone,lbudone,lhudone;
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

reg [4:0]lrd;
wire [31:0]rdata = M_AXI_RDATA;
reg ldone;
reg lbdone,lhdone,lwdone,lbudone,lhudone;

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
reg [31:0]axi_araddr_reg;
reg [31:0]axi_awaddr_reg,axi_wdata_reg;
reg [7:0]axi_wstrb_reg;
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
    end 
		else begin
      case (state)
        IDLE: begin
				  if(valid) begin
						if(wen) begin
							axi_awvalid <= 1'b1;
		          state <= WRITE;
							axi_awaddr_reg <= waddr;
							axi_wdata_reg <= wdata;
							axi_wstrb_reg <= wmask;
	          end
						else begin
							axi_arvalid <= 1'b1;
							state <= READ;
							axi_araddr_reg <= raddr;
							lrd <= rd;
							lbdone <= (op == 7'b0000011) && (funct3 == 3'b000);
							lhdone <= (op == 7'b0000011) && (funct3 == 3'b001);
							lwdone <= (op == 7'b0000011) && (funct3 == 3'b010);
							lbudone <= (op == 7'b0000011) && (funct3 == 3'b100);
							lhudone <= (op == 7'b0000011) && (funct3 == 3'b101);
						end
					end
				end
				READ: begin
          if(M_AXI_ARREADY) begin
						axi_arvalid <= 0;
            axi_rready <= 1;//加判断条件
						axi_araddr <= axi_araddr_reg;
          end
	        if(M_AXI_RVALID) begin
            axi_rready <= 0;
						ldone <= 1;
            state <= DONE;
          end
        end
				WRITE: begin
					if(M_AXI_AWREADY) begin
						axi_awvalid <= 0;
						axi_wvalid <= 1;
						axi_awaddr <= axi_awaddr_reg;
					end
					if(M_AXI_WREADY) begin
						axi_wvalid <= 0;
						axi_wdata <= axi_wdata_reg;//加判断条件
						axi_wstrb <= axi_wstrb_reg;
						axi_bready <= 1;
					end
					if(M_AXI_BVALID) begin
						axi_bready <= 0;
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
					axi_wstrb <= 8'b0;
					axi_wvalid <= 0;
					axi_bready <= 0;
					ldone <= 0;
					lbdone <= 0;
					lhdone <= 0;
					lwdone <= 0;
					lbudone <= 0;
					lhudone <= 0;
					lrd <= 0;
          state <= IDLE;
        end
      endcase
		end
end

/***E*N*D***/
endmodule
