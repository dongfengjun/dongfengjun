module LSU_ysyx_24110017(clk,rst,op,r1,r2,offset,function3,rdata,TXN_DONE);
input clk;
input rst;
input [6:0]op;
input [31:0]r1,r2;
input [31:0]offset;
input [2:0]function3;
output [31:0]rdata;
input TXN_DONE;


wire valid,wen;
wire [31:0]raddr;
wire [31:0]waddr, wdata;
wire [7:0]wmask;
 

assign valid = (op == 7'b0100011 || op == 7'b0000011);
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
wire [31:0]wdata;
SRAM_LSU_ysyx_24110017 SRAM_LSU_ysyx_24110017(clk,rst,valid,wen,waddr,wdata,wmask,raddr,rdata);
/***E*N*D***/


endmodule
