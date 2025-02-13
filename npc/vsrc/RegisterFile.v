module Sta_RegisterFile #(ADDR_WIDTH = 8, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0]raddr1,
  output [DATA_WIDTH-1:0]r1
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

  assign r1 = (raddr1 == 0) ? 32'b0 : rf[raddr1];

endmodule
