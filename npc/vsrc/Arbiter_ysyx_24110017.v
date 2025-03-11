module Arbiter_ysyx_24110017(
	input wire clk,
	input wire rst,
/***AXI_IFU***/
	input wire [31:0]IFU_AXI_AWADDR,
  input wire IFU_AXI_AWVALID,
  output wire IFU_AXI_AWREADY,
  input wire [31:0]IFU_AXI_WDATA,
  input wire [7:0]IFU_AXI_WSTRB,
  input wire IFU_AXI_WVALID,
  output wire IFU_AXI_WREADY,
  output wire [1:0]IFU_AXI_BRESP,
  output wire IFU_AXI_BVALID,
  input wire IFU_AXI_BREADY,
  
  input wire [31: 0]IFU_AXI_ARADDR,
  input wire IFU_AXI_ARVALID,
  output wire IFU_AXI_ARREADY,
  output wire [31:0]IFU_AXI_RDATA,
  output wire [1:0]IFU_AXI_RRESP,
  output wire IFU_AXI_RVALID,
  input wire IFU_AXI_RREADY,
/***AXI_LSU***/
  input wire [31:0]LSU_AXI_AWADDR,
	input wire LSU_AXI_AWVALID,
  output wire LSU_AXI_AWREADY,
  input wire [31:0]LSU_AXI_WDATA,
  input wire [7:0]LSU_AXI_WSTRB,
  input wire LSU_AXI_WVALID,
  output wire LSU_AXI_WREADY,
  output wire [1:0]LSU_AXI_BRESP,
  output wire LSU_AXI_BVALID,
  input wire LSU_AXI_BREADY,
   
  input wire [31: 0]LSU_AXI_ARADDR,
  input wire LSU_AXI_ARVALID,
  output wire LSU_AXI_ARREADY,
  output wire [31:0]LSU_AXI_RDATA,
  output wire [1:0]LSU_AXI_RRESP,
  output wire LSU_AXI_RVALID,
  input wire LSU_AXI_RREADY,
/***AXI_SRAM***/
	output wire [31:0]S_AXI_AWADDR,
  output wire S_AXI_AWVALID,
  input wire S_AXI_AWREADY,
  output wire [31:0]S_AXI_WDATA,
  output wire [7:0]S_AXI_WSTRB,
  output wire S_AXI_WVALID,
  input wire S_AXI_WREADY,
  input wire [1:0]S_AXI_BRESP,
  input wire S_AXI_BVALID,
  output wire S_AXI_BREADY,

  output wire [31: 0]S_AXI_ARADDR,
  output wire S_AXI_ARVALID,
  input wire S_AXI_ARREADY,
  input wire [31:0]S_AXI_RDATA,
  input wire [1:0]S_AXI_RRESP,
  input wire S_AXI_RVALID,
  output wire S_AXI_RREADY
);

parameter [1:0]IDLE = 2'b00,GRANT_LSU = 2'b01,GRANT_IFU = 2'b10;
reg [1:0]state,next_state;

always @(posedge clk) begin
  if (rst) begin
    state <= IDLE;
  end
	else begin
    state <= next_state;
  end
end

always @(*) begin
  next_state = state;
	if(rst) begin
		next_state = IDLE;
	end
  else begin
		case (state)
			IDLE: begin
				if(LSU_AXI_ARVALID || LSU_AXI_AWVALID) begin
					next_state = GRANT_LSU;
				end
				else if(IFU_AXI_ARVALID) begin
					next_state = GRANT_IFU;
				end
				else begin
					next_state = IDLE;
				end
			end
			GRANT_LSU: begin
				if((S_AXI_RVALID && LSU_AXI_RREADY) 
												 || (S_AXI_BVALID && LSU_AXI_BREADY)) begin
					next_state = IDLE;
				end
			end
			GRANT_IFU: begin
				if(S_AXI_RVALID && IFU_AXI_RREADY) begin
					next_state = IDLE;
				end
			end
			default: begin
				next_state = IDLE;
			end
		endcase
	end
end

assign S_AXI_AWADDR = (state == GRANT_LSU) ? LSU_AXI_AWADDR : (state == GRANT_IFU) ? IFU_AXI_AWADDR : 32'h0;
assign S_AXI_AWVALID = (state == GRANT_LSU) ? LSU_AXI_AWVALID : (state == GRANT_IFU) ? S_AXI_AWREADY : 1'b0;
assign LSU_AXI_AWREADY = (state == GRANT_LSU) ? S_AXI_AWREADY : 1'b0;
assign S_AXI_WDATA = (state == GRANT_LSU) ? LSU_AXI_WDATA : (state == GRANT_IFU) ? IFU_AXI_WDATA : 32'h0;
assign S_AXI_WSTRB = (state == GRANT_LSU) ? LSU_AXI_WSTRB : (state == GRANT_IFU) ? IFU_AXI_WSTRB : 8'b0;
assign S_AXI_WVALID = (state == GRANT_LSU) ? LSU_AXI_WVALID : (state == GRANT_IFU) ? IFU_AXI_WVALID : 1'b0;
assign LSU_AXI_WREADY = (state == GRANT_LSU) ? S_AXI_WREADY : 1'b0;
assign LSU_AXI_BRESP = (state == GRANT_LSU) ? S_AXI_BRESP : 2'b0;
assign LSU_AXI_BVALID = (state == GRANT_LSU) ? S_AXI_BVALID : 1'b0;
assign S_AXI_BREADY = (state == GRANT_LSU) ? LSU_AXI_BREADY : (state == GRANT_IFU) ? IFU_AXI_BREADY : 1'b0;
 
assign S_AXI_ARADDR = (state == GRANT_LSU) ? LSU_AXI_ARADDR : (state == GRANT_IFU) ? IFU_AXI_ARADDR : 32'h0;
assign S_AXI_ARVALID = (state == GRANT_LSU) ? LSU_AXI_ARVALID : (state == GRANT_IFU) ? IFU_AXI_ARVALID : 1'b0;
assign LSU_AXI_ARREADY = (state == GRANT_LSU) ? S_AXI_ARREADY : 1'b0;
assign LSU_AXI_RDATA = (state == GRANT_LSU || state == IDLE) ? S_AXI_RDATA : 32'h0;
assign LSU_AXI_RRESP = (state == GRANT_LSU) ? S_AXI_RRESP : 2'b0;
assign LSU_AXI_RVALID = (state == GRANT_LSU) ? S_AXI_RVALID : 1'b0;
assign S_AXI_RREADY = (state == GRANT_LSU) ? LSU_AXI_RREADY : (state == GRANT_IFU) ? IFU_AXI_RREADY : 1'b0;

assign IFU_AXI_AWREADY = (state == GRANT_IFU) ? S_AXI_AWREADY : 1'b0;
assign IFU_AXI_WREADY = (state == GRANT_IFU) ? S_AXI_WREADY : 1'b0;
assign IFU_AXI_BRESP = (state == GRANT_IFU) ? S_AXI_BRESP : 2'b0;
assign IFU_AXI_BVALID = (state == GRANT_IFU) ? S_AXI_BVALID : 1'b0;
assign IFU_AXI_ARREADY = (state == GRANT_IFU) ? S_AXI_ARREADY : 1'b0;
assign IFU_AXI_RDATA = (state == GRANT_IFU || state == IDLE) ? S_AXI_RDATA : 32'h0;
assign IFU_AXI_RRESP = (state == GRANT_IFU) ? S_AXI_RRESP : 2'b0;
assign IFU_AXI_RVALID = (state == GRANT_IFU) ? S_AXI_RVALID : 1'b0;

endmodule
