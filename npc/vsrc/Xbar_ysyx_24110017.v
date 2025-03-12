module Xbar_ysyx_24110017(
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
  output wire S_AXI_RREADY,
/***AXI_SRAM***/
  output wire [31:0]U_AXI_AWADDR,
  output wire U_AXI_AWVALID,
  input wire U_AXI_AWREADY,
  output wire [31:0]U_AXI_WDATA,
  output wire [7:0]U_AXI_WSTRB,
  output wire U_AXI_WVALID,
  input wire U_AXI_WREADY,
  input wire [1:0]U_AXI_BRESP,
  input wire U_AXI_BVALID,
  output wire U_AXI_BREADY,

	output wire [31: 0]U_AXI_ARADDR,
  output wire U_AXI_ARVALID,
  input wire U_AXI_ARREADY,
  input wire [31:0]U_AXI_RDATA,
  input wire [1:0]U_AXI_RRESP,
  input wire U_AXI_RVALID,
  output wire U_AXI_RREADY
);

wire [31:0] X_AXI_AWADDR,X_AXI_WDATA,X_AXI_ARADDR,X_AXI_RDATA;
wire [7:0] X_AXI_WSTRB;
wire [1:0] X_AXI_BRESP,X_AXI_RRESP;
wire X_AXI_AWVALID,X_AXI_AWREADY,X_AXI_WVALID,X_AXI_WREADY,X_AXI_BVALID,X_AXI_BREADY,X_AXI_ARVALID,X_AXI_ARREADY,X_AXI_RVALID,X_AXI_RREADY;

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

assign X_AXI_AWADDR = (state == GRANT_LSU) ? LSU_AXI_AWADDR : (state == GRANT_IFU) ? IFU_AXI_AWADDR : 32'h0;
assign X_AXI_AWVALID = (state == GRANT_LSU) ? LSU_AXI_AWVALID : (state == GRANT_IFU) ? IFU_AXI_AWREADY : 1'b0;
assign LSU_AXI_AWREADY = (state == GRANT_LSU) ? X_AXI_AWREADY : 1'b0;
assign X_AXI_WDATA = (state == GRANT_LSU) ? LSU_AXI_WDATA : (state == GRANT_IFU) ? IFU_AXI_WDATA : 32'h0;
assign X_AXI_WSTRB = (state == GRANT_LSU) ? LSU_AXI_WSTRB : (state == GRANT_IFU) ? IFU_AXI_WSTRB : 8'b0;
assign X_AXI_WVALID = (state == GRANT_LSU) ? LSU_AXI_WVALID : (state == GRANT_IFU) ? IFU_AXI_WVALID : 1'b0;
assign LSU_AXI_WREADY = (state == GRANT_LSU) ? X_AXI_WREADY : 1'b0;
assign LSU_AXI_BRESP = (state == GRANT_LSU) ? X_AXI_BRESP : 2'b0;
assign LSU_AXI_BVALID = (state == GRANT_LSU) ? X_AXI_BVALID : 1'b0;
assign X_AXI_BREADY = (state == GRANT_LSU) ? LSU_AXI_BREADY : (state == GRANT_IFU) ? IFU_AXI_BREADY : 1'b0;
 
assign X_AXI_ARADDR = (state == GRANT_LSU) ? LSU_AXI_ARADDR : (state == GRANT_IFU) ? IFU_AXI_ARADDR : 32'h0;
assign X_AXI_ARVALID = (state == GRANT_LSU) ? LSU_AXI_ARVALID : (state == GRANT_IFU) ? IFU_AXI_ARVALID : 1'b0;
assign LSU_AXI_ARREADY = (state == GRANT_LSU) ? X_AXI_ARREADY : 1'b0;
assign LSU_AXI_RDATA = (state == GRANT_LSU || state == IDLE) ? X_AXI_RDATA : 32'h0;
assign LSU_AXI_RRESP = (state == GRANT_LSU) ? X_AXI_RRESP : 2'b0;
assign LSU_AXI_RVALID = (state == GRANT_LSU) ? X_AXI_RVALID : 1'b0;
assign X_AXI_RREADY = (state == GRANT_LSU) ? LSU_AXI_RREADY : (state == GRANT_IFU) ? IFU_AXI_RREADY : 1'b0;

assign IFU_AXI_AWREADY = (state == GRANT_IFU) ? X_AXI_AWREADY : 1'b0;
assign IFU_AXI_WREADY = (state == GRANT_IFU) ? X_AXI_WREADY : 1'b0;
assign IFU_AXI_BRESP = (state == GRANT_IFU) ? X_AXI_BRESP : 2'b0;
assign IFU_AXI_BVALID = (state == GRANT_IFU) ? X_AXI_BVALID : 1'b0;
assign IFU_AXI_ARREADY = (state == GRANT_IFU) ? X_AXI_ARREADY : 1'b0;
assign IFU_AXI_RDATA = (state == GRANT_IFU || state == IDLE) ? X_AXI_RDATA : 32'h0;
assign IFU_AXI_RRESP = (state == GRANT_IFU) ? X_AXI_RRESP : 2'b0;
assign IFU_AXI_RVALID = (state == GRANT_IFU) ? X_AXI_RVALID : 1'b0;


localparam DEVICE_UART_ADDR = 32'hb00003f8;
wire sel_uart;
assign sel_uart = (X_AXI_AWADDR == DEVICE_UART_ADDR) || (X_AXI_ARADDR == DEVICE_UART_ADDR);

assign {U_AXI_AWADDR,S_AXI_AWADDR} = (sel_uart) ? {X_AXI_AWADDR,32'b0} : {32'b0,X_AXI_AWADDR};
assign {U_AXI_AWVALID,S_AXI_AWVALID} = (sel_uart) ? {X_AXI_AWVALID,1'b0} : {1'b0, X_AXI_AWVALID};
assign X_AXI_AWREADY = (sel_uart) ? U_AXI_AWREADY : S_AXI_AWREADY;
assign {U_AXI_WDATA,S_AXI_WDATA} = (sel_uart) ? {X_AXI_WDATA,32'b0} : {32'b0,X_AXI_WDATA}; 
assign {U_AXI_WSTRB,S_AXI_WSTRB} = (sel_uart) ? {X_AXI_WSTRB,8'b0} : {8'b0,X_AXI_WSTRB};
assign {U_AXI_WVALID,S_AXI_WVALID} = (sel_uart) ? {X_AXI_WVALID,1'b0} : {1'b0,X_AXI_WVALID};
assign X_AXI_WREADY = (sel_uart) ? U_AXI_WREADY : S_AXI_WREADY;
assign X_AXI_BRESP = (sel_uart) ? U_AXI_BRESP : S_AXI_BRESP;
assign X_AXI_BVALID = (sel_uart) ? U_AXI_BVALID : S_AXI_BVALID;
assign {U_AXI_BREADY,S_AXI_BREADY} = (sel_uart) ? {X_AXI_BREADY,1'b0} : {1'b0,X_AXI_BREADY};

assign {U_AXI_ARADDR,S_AXI_ARADDR} = (sel_uart) ? {X_AXI_ARADDR,32'b0} : {32'b0,X_AXI_ARADDR};
assign {U_AXI_ARVALID,S_AXI_ARVALID} = (sel_uart) ? {X_AXI_ARVALID,1'b0} : {1'b0, X_AXI_ARVALID};
assign X_AXI_ARREADY = (sel_uart) ? U_AXI_ARREADY : S_AXI_ARREADY;
assign X_AXI_RDATA = (sel_uart) ? U_AXI_RDATA : S_AXI_RDATA;
assign X_AXI_RRESP = (sel_uart) ? U_AXI_RRESP : S_AXI_RRESP;
assign X_AXI_RVALID = (sel_uart) ? U_AXI_RVALID : S_AXI_RVALID;
assign {U_AXI_RREADY,S_AXI_RREADY} = (sel_uart) ? {X_AXI_RREADY,1'b0} : {1'b0, X_AXI_RREADY};

endmodule
