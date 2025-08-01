module ysyx_24110017_Xbar(
	input wire clk,
	input wire rst,
/***AXI_IFU***/
	output wire IFU_AXI_AWREADY,
	input wire IFU_AXI_AWVALID,
	input wire [3:0]IFU_AXI_AWID,
	input wire [31:0]IFU_AXI_AWADDR,
	input wire [7:0]IFU_AXI_AWLEN,
	input wire [2:0]IFU_AXI_AWSIZE,
	input wire [1:0]IFU_AXI_AWBURST, 
	output wire IFU_AXI_WREADY,
	input wire IFU_AXI_WVALID,
	input wire [31:0]IFU_AXI_WDATA,
	input wire [3:0]IFU_AXI_WSTRB,
	input wire IFU_AXI_WLAST,
	input wire IFU_AXI_BREADY,
	output wire IFU_AXI_BVALID,
	output wire [3:0]IFU_AXI_BID,
	output wire [1:0]IFU_AXI_BRESP,

	output wire IFU_AXI_ARREADY,
	input wire IFU_AXI_ARVALID,
	input wire [3:0]IFU_AXI_ARID,
	input wire [31:0]IFU_AXI_ARADDR,
	input wire [7:0]IFU_AXI_ARLEN,
	input wire [2:0]IFU_AXI_ARSIZE,
	input wire [1:0]IFU_AXI_ARBURST,
	input wire IFU_AXI_RREADY,
	output wire IFU_AXI_RVALID,
	output wire [3:0]IFU_AXI_RID,
	output wire [31:0]IFU_AXI_RDATA,
	output wire [1:0]IFU_AXI_RRESP,
	output wire IFU_AXI_RLAST,
/***AXI_LSU***/
	output wire LSU_AXI_AWREADY,
	input wire LSU_AXI_AWVALID,
	input wire [3:0]LSU_AXI_AWID,
	input wire [31:0]LSU_AXI_AWADDR,
	input wire [7:0]LSU_AXI_AWLEN,
	input wire [2:0]LSU_AXI_AWSIZE,
	input wire [1:0]LSU_AXI_AWBURST, 
	output wire LSU_AXI_WREADY,
	input wire LSU_AXI_WVALID,
	input wire [31:0]LSU_AXI_WDATA,
	input wire [3:0]LSU_AXI_WSTRB,
	input wire LSU_AXI_WLAST,
	input wire LSU_AXI_BREADY,
	output wire LSU_AXI_BVALID,
	output wire [3:0]LSU_AXI_BID,
	output wire [1:0]LSU_AXI_BRESP,

	output wire LSU_AXI_ARREADY,
	input wire LSU_AXI_ARVALID,
	input wire [3:0]LSU_AXI_ARID,
	input wire [31:0]LSU_AXI_ARADDR,
	input wire [7:0]LSU_AXI_ARLEN,
	input wire [2:0]LSU_AXI_ARSIZE,
	input wire [1:0]LSU_AXI_ARBURST,
	input wire LSU_AXI_RREADY,
	output wire LSU_AXI_RVALID,
	output wire [3:0]LSU_AXI_RID,
	output wire [31:0]LSU_AXI_RDATA,
	output wire [1:0]LSU_AXI_RRESP,
	output wire LSU_AXI_RLAST,
/***My_Sram***
	input wire S_AXI_AWREADY,
	output wire S_AXI_AWVALID,
	output wire [3:0]S_AXI_AWID,
	output wire [31:0]S_AXI_AWADDR,
	output wire [7:0]S_AXI_AWLEN,
	output wire [2:0]S_AXI_AWSIZE,
	output wire [1:0]S_AXI_AWBURST,
	input wire S_AXI_WREADY,
	output wire S_AXI_WVALID,
	output wire [31:0]S_AXI_WDATA,
	output wire [3:0]S_AXI_WSTRB,
	output wire S_AXI_WLAST,
	output wire S_AXI_BREADY,
	input wire S_AXI_BVALID,
	input wire [3:0]S_AXI_BID,
	input wire [1:0]S_AXI_BRESP,
	
	input wire S_AXI_ARREADY,
	output wire S_AXI_ARVALID,
	output wire [3:0]S_AXI_ARID,
	output wire [31:0]S_AXI_ARADDR,
	output wire [7:0]S_AXI_ARLEN,
	output wire [2:0]S_AXI_ARSIZE,
	output wire [1:0]S_AXI_ARBURST,
	output wire S_AXI_RREADY,
	input wire S_AXI_RVALID,
	input wire [3:0]S_AXI_RID,
	input wire [31:0]S_AXI_RDATA,
	input wire [1:0]S_AXI_RRESP,
	input wire S_AXI_RLAST,
******/
/***My_Uart***
	input wire U_AXI_AWREADY,
	output wire U_AXI_AWVALID,
	output wire [3:0]U_AXI_AWID,
	output wire [31:0]U_AXI_AWADDR,
	output wire [7:0]U_AXI_AWLEN,
	output wire [2:0]U_AXI_AWSIZE,
	output wire [1:0]U_AXI_AWBURST,
	input wire U_AXI_WREADY,
	output wire U_AXI_WVALID,
	output wire [31:0]U_AXI_WDATA,
	output wire [3:0]U_AXI_WSTRB,
	output wire U_AXI_WLAST,
	output wire U_AXI_BREADY,
	input wire U_AXI_BVALID,
	input wire [3:0]U_AXI_BID,
	input wire [1:0]U_AXI_BRESP,

	input wire U_AXI_ARREADY,
	output wire U_AXI_ARVALID,
	output wire [3:0]U_AXI_ARID,
	output wire [31:0]U_AXI_ARADDR,
	output wire [7:0]U_AXI_ARLEN,
	output wire [2:0]U_AXI_ARSIZE,
	output wire [1:0]U_AXI_ARBURST,
	output wire U_AXI_RREADY,
	input wire U_AXI_RVALID,
	input wire [3:0]U_AXI_RID,
	input wire [31:0]U_AXI_RDATA,
	input wire [1:0]U_AXI_RRESP,
	input wire U_AXI_RLAST,
******/
	input wire io_master_awready,
	output wire io_master_awvalid,
  output wire [3:0]io_master_awid,
  output wire [31:0]io_master_awaddr,
  output wire [7:0]io_master_awlen,
  output wire [2:0]io_master_awsize,
  output wire [1:0]io_master_awburst,
  input wire io_master_wready,
  output wire io_master_wvalid,
  output wire [31:0]io_master_wdata,
  output wire [3:0]io_master_wstrb,
  output wire io_master_wlast,
  output wire io_master_bready,
  input wire io_master_bvalid,
  input wire [3:0]io_master_bid,
  input wire [1:0]io_master_bresp,

  input wire io_master_arready,
  output wire io_master_arvalid,
  output wire [3:0]io_master_arid,
  output wire [31:0]io_master_araddr,
  output wire [7:0]io_master_arlen,
  output wire [2:0]io_master_arsize,
  output wire [1:0]io_master_arburst,
  output wire io_master_rready,
  input wire io_master_rvalid,
  input wire [3:0]io_master_rid,
  input wire [31:0]io_master_rdata,
  input wire [1:0]io_master_rresp,
  input wire io_master_rlast,
/***MY_CLINT***/
	input wire C_AXI_AWREADY,
	output wire C_AXI_AWVALID,
	output wire [3:0]C_AXI_AWID,
	output wire [31:0]C_AXI_AWADDR,
	output wire [7:0]C_AXI_AWLEN,
	output wire [2:0]C_AXI_AWSIZE,
	output wire [1:0]C_AXI_AWBURST,
	input wire C_AXI_WREADY,
	output wire C_AXI_WVALID,
	output wire [31:0]C_AXI_WDATA,
	output wire [3:0]C_AXI_WSTRB,
	output wire C_AXI_WLAST,
	output wire C_AXI_BREADY,
	input wire C_AXI_BVALID,
	input wire [3:0]C_AXI_BID,
	input wire [1:0]C_AXI_BRESP,
	
	input wire C_AXI_ARREADY,
	output wire C_AXI_ARVALID,
	output wire [3:0]C_AXI_ARID,
	output wire [31:0]C_AXI_ARADDR,
	output wire [7:0]C_AXI_ARLEN,
	output wire [2:0]C_AXI_ARSIZE,
	output wire [1:0]C_AXI_ARBURST,
	output wire C_AXI_RREADY,
	input wire C_AXI_RVALID,
	input wire [3:0]C_AXI_RID,
	input wire [31:0]C_AXI_RDATA,
	input wire [1:0]C_AXI_RRESP,
	input wire C_AXI_RLAST,
	input wire [31:0] mvendorid,
	input wire [31:0] marchid
);

wire [31:0]X_AXI_AWADDR,X_AXI_WDATA,X_AXI_ARADDR,X_AXI_RDATA;
wire [3:0]X_AXI_WSTRB;
wire [7:0]X_AXI_AWLEN,X_AXI_ARLEN;
wire [3:0]X_AXI_AWID,X_AXI_BID,X_AXI_ARID,X_AXI_RID;
wire [2:0]X_AXI_AWSIZE,X_AXI_ARSIZE;
wire [1:0]X_AXI_AWBURST,X_AXI_ARBURST;
wire [1:0]X_AXI_BRESP,X_AXI_RRESP;
wire X_AXI_AWVALID,X_AXI_AWREADY,X_AXI_WVALID,X_AXI_WREADY,X_AXI_BVALID,X_AXI_BREADY,X_AXI_ARVALID,X_AXI_ARREADY,X_AXI_RVALID,X_AXI_RREADY,X_AXI_WLAST,X_AXI_RLAST;

wire [1:0]state = (IFU_AXI_ARADDR != 0) ? GRANT_IFU : GRANT_LSU;

parameter [1:0]IDLE = 2'b00,GRANT_LSU = 2'b01,GRANT_IFU = 2'b10,WAIT_CLINT = 2'b11;
/***
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
			WAIT_CLINT: begin
        if(LSU_AXI_ARVALID || LSU_AXI_AWVALID) begin
          next_state = GRANT_LSU;
        end
        else if(IFU_AXI_ARVALID) begin
          next_state = GRANT_IFU;
        end
        else begin
          next_state = WAIT_CLINT;
        end
      end
			GRANT_LSU: begin
				if((!sel_clint) && ((LSU_AXI_RVALID && LSU_AXI_RREADY) ||
					 (LSU_AXI_BVALID && LSU_AXI_BREADY))) begin
					next_state = IDLE;
				end
				else if(sel_clint && ((LSU_AXI_RVALID && LSU_AXI_RREADY) ||
           (LSU_AXI_BVALID && LSU_AXI_BREADY))) begin
					next_state = WAIT_CLINT;
				end
			end
			GRANT_IFU: begin
				if(IFU_AXI_RVALID && IFU_AXI_RREADY) begin
					next_state = IDLE;
				end
			end
			default: begin
				next_state = IDLE;
			end
		endcase
	end
end
***/

assign X_AXI_AWID = (state == GRANT_LSU) ? LSU_AXI_AWID : (state == GRANT_IFU) ? IFU_AXI_AWID : 4'b0;
assign X_AXI_AWLEN = (state == GRANT_LSU) ? LSU_AXI_AWLEN : (state == GRANT_IFU) ? IFU_AXI_AWLEN : 8'b0;
assign X_AXI_AWSIZE = (state == GRANT_LSU) ? LSU_AXI_AWSIZE : (state == GRANT_IFU) ? IFU_AXI_AWSIZE : 3'b0;
assign X_AXI_AWBURST = (state == GRANT_LSU) ? LSU_AXI_AWBURST : (state == GRANT_IFU) ? IFU_AXI_AWBURST : 2'b0;
assign X_AXI_WLAST = (state == GRANT_LSU) ? LSU_AXI_WLAST : (state == GRANT_IFU) ? IFU_AXI_WLAST : 1'b0;
assign LSU_AXI_BID = (state == GRANT_LSU) ? X_AXI_BID : 4'b0;
assign X_AXI_AWADDR = (state == GRANT_LSU) ? LSU_AXI_AWADDR : (state == GRANT_IFU) ? IFU_AXI_AWADDR : 32'h0;
assign X_AXI_AWVALID = (state == GRANT_LSU) ? LSU_AXI_AWVALID : (state == GRANT_IFU) ? IFU_AXI_AWVALID : 1'b0;
assign LSU_AXI_AWREADY = (state == GRANT_LSU) ? X_AXI_AWREADY : 1'b0;
assign X_AXI_WDATA = (state == GRANT_LSU) ? LSU_AXI_WDATA : (state == GRANT_IFU) ? IFU_AXI_WDATA : 32'h0;
assign X_AXI_WSTRB = (state == GRANT_LSU) ? LSU_AXI_WSTRB : (state == GRANT_IFU) ? IFU_AXI_WSTRB : 4'b0;
assign X_AXI_WVALID = (state == GRANT_LSU) ? LSU_AXI_WVALID : (state == GRANT_IFU) ? IFU_AXI_WVALID : 1'b0;
assign LSU_AXI_WREADY = (state == GRANT_LSU) ? X_AXI_WREADY : 1'b0;
assign LSU_AXI_BRESP = (state == GRANT_LSU) ? X_AXI_BRESP : 2'b0;
assign LSU_AXI_BVALID = (state == GRANT_LSU) ? X_AXI_BVALID : 1'b0;
assign X_AXI_BREADY = (state == GRANT_LSU) ? LSU_AXI_BREADY : (state == GRANT_IFU) ? IFU_AXI_BREADY : 1'b0;
 
assign X_AXI_ARID = (state == GRANT_LSU) ? LSU_AXI_ARID : (state == GRANT_IFU) ? IFU_AXI_ARID : 4'b0;
assign X_AXI_ARLEN = (state == GRANT_LSU) ? LSU_AXI_ARLEN : (state == GRANT_IFU) ? IFU_AXI_ARLEN : 8'b0;
assign X_AXI_ARSIZE = (state == GRANT_LSU) ? LSU_AXI_ARSIZE : (state == GRANT_IFU) ? IFU_AXI_ARSIZE : 3'b0;
assign X_AXI_ARBURST = (state == GRANT_LSU) ? LSU_AXI_ARBURST : (state == GRANT_IFU) ? IFU_AXI_ARBURST : 2'b0;
assign X_AXI_ARADDR = (state == GRANT_LSU) ? LSU_AXI_ARADDR : (state == GRANT_IFU) ? IFU_AXI_ARADDR : 32'h0;
assign X_AXI_ARVALID = (state == GRANT_LSU) ? LSU_AXI_ARVALID : (state == GRANT_IFU) ? IFU_AXI_ARVALID : 1'b0;
assign LSU_AXI_ARREADY = (state == GRANT_LSU) ? X_AXI_ARREADY : 1'b0;
assign LSU_AXI_RDATA = (state == GRANT_LSU || state == IDLE || state == WAIT_CLINT) ? X_AXI_RDATA : 32'h0;
assign LSU_AXI_RRESP = (state == GRANT_LSU) ? X_AXI_RRESP : 2'b0;
assign LSU_AXI_RVALID = (state == GRANT_LSU) ? X_AXI_RVALID : 1'b0;
assign X_AXI_RREADY = (state == GRANT_LSU) ? LSU_AXI_RREADY : (state == GRANT_IFU) ? IFU_AXI_RREADY : 1'b0;
assign LSU_AXI_RID = (state == GRANT_LSU) ? X_AXI_RID : 4'b0;
assign LSU_AXI_RLAST = (state == GRANT_LSU) ? X_AXI_RLAST : 1'b0;

assign IFU_AXI_AWREADY = (state == GRANT_IFU) ? X_AXI_AWREADY : 1'b0;
assign IFU_AXI_WREADY = (state == GRANT_IFU) ? X_AXI_WREADY : 1'b0;
assign IFU_AXI_BRESP = (state == GRANT_IFU) ? X_AXI_BRESP : 2'b0;
assign IFU_AXI_BVALID = (state == GRANT_IFU) ? X_AXI_BVALID : 1'b0;
assign IFU_AXI_BID = (state == GRANT_IFU) ? X_AXI_BID : 4'b0;
assign IFU_AXI_ARREADY = (state == GRANT_IFU) ? X_AXI_ARREADY : 1'b0;
assign IFU_AXI_RDATA = (state == GRANT_IFU || state == IDLE) ? X_AXI_RDATA : 32'h0;
assign IFU_AXI_RRESP = (state == GRANT_IFU) ? X_AXI_RRESP : 2'b0;
assign IFU_AXI_RVALID = (state == GRANT_IFU) ? X_AXI_RVALID : 1'b0;
assign IFU_AXI_RID = (state == GRANT_IFU) ? X_AXI_RID : 4'b0;
assign IFU_AXI_RLAST = (state == GRANT_IFU) ? X_AXI_RLAST : 1'b0;

/***SoC***/
localparam DEVICE_CLINT_LOW_ADDR = 32'h2000000;//32'ha0000048;
localparam DEVICE_CLINT_HIGH_ADDR = 32'h2000004;//32'ha000004c;
wire sel_clint;
assign sel_clint = (X_AXI_AWADDR == DEVICE_CLINT_LOW_ADDR) || (X_AXI_AWADDR == DEVICE_CLINT_HIGH_ADDR) || (X_AXI_ARADDR == DEVICE_CLINT_LOW_ADDR) || (X_AXI_ARADDR == DEVICE_CLINT_HIGH_ADDR);

assign X_AXI_AWREADY = (sel_clint) ? C_AXI_AWREADY : (sel_id) ? I_AXI_AWREADY : io_master_awready;
assign {C_AXI_AWVALID,I_AXI_AWREADY,io_master_awvalid} = (sel_clint) ? {X_AXI_AWVALID,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_AWVALID,1'b0} : {1'b0,1'b0,X_AXI_AWVALID};
assign {C_AXI_AWID,I_AXI_AWID,io_master_awid} = (sel_clint) ? {X_AXI_AWID,4'b0,4'b0} : (sel_id) ? {4'b0,X_AXI_AWID,4'b0} : {4'b0,4'b0,X_AXI_AWID};
assign {C_AXI_AWADDR,I_AXI_AWADDR,io_master_awaddr} = (sel_clint) ? {X_AXI_AWADDR,32'b0,32'b0} : (sel_id) ? {32'b0,X_AXI_AWADDR,32'b0} : {32'b0,32'b0,X_AXI_AWADDR};
assign {C_AXI_AWLEN,I_AXI_AWLEN,io_master_awlen} = (sel_clint) ? {X_AXI_AWLEN,8'b0,8'b0} : (sel_id) ? {8'b0,X_AXI_AWLEN,8'b0} : {8'b0,8'b0,X_AXI_AWLEN};
assign {C_AXI_AWSIZE,I_AXI_AWSIZE,io_master_awsize} = (sel_clint) ? {X_AXI_AWSIZE,3'b0,3'b0} : (sel_id) ? {3'b0,X_AXI_AWSIZE,3'b0} : {3'b0,3'b0,X_AXI_AWSIZE};
assign {C_AXI_AWBURST,I_AXI_AWBURST,io_master_awburst} = (sel_clint) ? {X_AXI_AWBURST,2'b0,2'b0} : (sel_id) ? {2'b0,X_AXI_AWBURST,2'b0} : {2'b0,2'b0,X_AXI_AWBURST};
assign X_AXI_WREADY = (sel_clint) ? C_AXI_WREADY : (sel_id) ? I_AXI_WREADY : io_master_wready;
assign {C_AXI_WVALID,I_AXI_WVALID,io_master_wvalid} = (sel_clint) ? {X_AXI_WVALID,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_WVALID,1'b0} : {1'b0,1'b0,X_AXI_WVALID};
assign {C_AXI_WDATA,I_AXI_WDATA,io_master_wdata} = (sel_clint) ? {X_AXI_WDATA,32'b0,32'b0} : (sel_id) ? {32'b0,X_AXI_WDATA,32'b0} : {32'b0,32'b0,X_AXI_WDATA};
assign {C_AXI_WSTRB,I_AXI_WSTRB,io_master_wstrb} = (sel_clint) ? {X_AXI_WSTRB,4'b0,4'b0} : (sel_id) ? {4'b0,X_AXI_WSTRB,4'b0} : {4'b0,4'b0,X_AXI_WSTRB};
assign {C_AXI_WLAST,I_AXI_WLAST,io_master_wlast} = (sel_clint) ? {X_AXI_WLAST,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_WLAST,1'b0} : {1'b0,1'b0,X_AXI_WLAST};
assign {C_AXI_BREADY,I_AXI_BREADY,io_master_bready} = (sel_clint) ? {X_AXI_BREADY,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_BREADY,1'b0} : {1'b0,1'b0,X_AXI_BREADY};
assign X_AXI_BVALID = (sel_clint) ? C_AXI_BVALID : (sel_id) ? I_AXI_BVALID :io_master_bvalid;
assign X_AXI_BID = (sel_clint) ? C_AXI_BID : (sel_id) ? I_AXI_BID : io_master_bid;
assign X_AXI_BRESP = (sel_clint) ? C_AXI_BRESP : (sel_id) ? I_AXI_BRESP : io_master_bresp;

assign X_AXI_ARREADY = (sel_clint) ? C_AXI_ARREADY : (sel_id) ? I_AXI_ARREADY : io_master_arready;
assign {C_AXI_ARVALID,I_AXI_ARVALID,io_master_arvalid} = (sel_clint) ? {X_AXI_ARVALID,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_ARVALID,1'b0} : {1'b0,1'b0,X_AXI_ARVALID};
assign {C_AXI_ARID,I_AXI_ARID,io_master_arid} = (sel_clint) ? {X_AXI_ARID,4'b0,4'b0} : (sel_id) ? {4'b0,X_AXI_ARID,4'b0} : {4'b0,4'b0,X_AXI_ARID};
assign {C_AXI_ARADDR,I_AXI_ARADDR,io_master_araddr} = (sel_clint) ? {X_AXI_ARADDR,32'b0,32'b0} : (sel_id) ? {32'b0,X_AXI_ARADDR,32'b0} : {32'b0,32'b0,X_AXI_ARADDR};
assign {C_AXI_ARLEN,I_AXI_ARLEN,io_master_arlen} = (sel_clint) ? {X_AXI_ARLEN,8'b0,8'b0} : (sel_id) ? {8'b0,X_AXI_ARLEN,8'b0} : {8'b0,8'b0,X_AXI_ARLEN};
assign {C_AXI_ARSIZE,I_AXI_ARSIZE,io_master_arsize} = (sel_clint) ? {X_AXI_ARSIZE,3'b0,3'b0} : (sel_id) ? {3'b0,X_AXI_ARSIZE,3'b0} : {3'b0,3'b0,X_AXI_ARSIZE};
assign {C_AXI_ARBURST,I_AXI_ARBURST,io_master_arburst} = (sel_clint) ? {X_AXI_ARBURST,2'b0,2'b0} : (sel_id) ? {2'b0,X_AXI_ARBURST,2'b0} : {2'b0,2'b0,X_AXI_ARBURST};
assign {C_AXI_RREADY,I_AXI_RREADY,io_master_rready} = (sel_clint) ? {X_AXI_RREADY,1'b0,1'b0} : (sel_id) ? {1'b0,X_AXI_RREADY,1'b0} : {1'b0,1'b0,X_AXI_RREADY};
assign X_AXI_RVALID = (sel_clint) ? C_AXI_RVALID : (sel_id) ? I_AXI_RVALID : io_master_rvalid;
assign X_AXI_RID = (sel_clint) ? C_AXI_RID : (sel_id) ? I_AXI_RID : io_master_rid;
assign X_AXI_RDATA = (sel_clint || state == WAIT_CLINT) ? C_AXI_RDATA : (sel_id) ? I_AXI_RDATA : io_master_rdata;
assign X_AXI_RRESP = (sel_clint) ? C_AXI_RRESP : (sel_id) ? I_AXI_RRESP : io_master_rresp;
assign X_AXI_RLAST = (sel_clint) ? C_AXI_RLAST : (sel_id) ? I_AXI_RLAST : io_master_rlast;

/***IDCSR***/
localparam MVENDORID_ADDR = 32'h01000000;
localparam MARCHID_ADDR = 32'h01000004;
wire sel_mvendorid = (X_AXI_ARADDR == MVENDORID_ADDR);
wire sel_marchid = (X_AXI_ARADDR == MARCHID_ADDR);
wire sel_id = sel_mvendorid || sel_marchid;

wire [31:0]I_AXI_AWADDR,I_AXI_WDATA,I_AXI_ARADDR,I_AXI_RDATA;
wire [3:0]I_AXI_WSTRB;
wire [7:0]I_AXI_AWLEN,I_AXI_ARLEN;
wire [3:0]I_AXI_AWID,I_AXI_BID,I_AXI_ARID,I_AXI_RID;
wire [2:0]I_AXI_AWSIZE,I_AXI_ARSIZE;
wire [1:0]I_AXI_AWBURST,I_AXI_ARBURST;
wire [1:0]I_AXI_BRESP,I_AXI_RRESP;
wire I_AXI_AWVALID,I_AXI_AWREADY,I_AXI_WVALID,I_AXI_WREADY,I_AXI_BVALID,I_AXI_BREADY,I_AXI_ARVALID,I_AXI_ARREADY,I_AXI_RVALID,I_AXI_RREADY,I_AXI_WLAST,I_AXI_RLAST;
assign I_AXI_RDATA = (sel_mvendorid) ? mvendorid : (sel_marchid) ? marchid : 32'h0;
//assign I_AXI_AWREADY = 1'b1;
//assign I_AXI_ARREADY = 1'b1;
//assign I_AXI_WREADY = 1'b1;
//assign I_AXI_BVALID = 1'b1;
//assign I_AXI_RVALID = 1'b1;

/******
assign {I_AXI_AWADDR,S_AXI_AWADDR} = (sel_id) ? {X_AXI_AWADDR,32'b0} : {32'b0,X_AXI_AWADDR};
assign {I_AXI_AWVALID,S_AXI_AWVALID} = (sel_id) ? {X_AXI_AWVALID,1'b0} : {1'b0,X_AXI_AWVALID};
assign X_AXI_AWREADY = (sel_id) ? I_AXI_AWREADY : S_AXI_AWREADY;
assign {I_AXI_WDATA,S_AXI_WDATA} = (sel_id) ? {X_AXI_WDATA,32'b0} : {32'b0,X_AXI_WDATA};
assign {I_AXI_WSTRB,S_AXI_WSTRB} = (sel_id) ? {X_AXI_WSTRB,4'b0} : {4'b0,X_AXI_WSTRB};
assign {I_AXI_WVALID,S_AXI_WVALID} = (sel_id) ? {X_AXI_WVALID,1'b0} : {1'b0,X_AXI_WVALID};
assign X_AXI_WREADY = (sel_id) ? I_AXI_WREADY : S_AXI_WREADY;
assign X_AXI_BRESP = (sel_id) ? I_AXI_BRESP : S_AXI_BRESP;
assign X_AXI_BVALID = (sel_id) ? I_AXI_BVALID : S_AXI_BVALID;
assign {I_AXI_BREADY,S_AXI_BREADY} = (sel_id) ? {X_AXI_BREADY,1'b0} : {1'b0,X_AXI_BREADY};

assign {I_AXI_ARADDR,S_AXI_ARADDR} = (sel_id) ? {X_AXI_ARADDR,32'b0} : {32'b0,X_AXI_ARADDR};
assign {I_AXI_ARVALID,S_AXI_ARVALID} = (sel_id) ? {X_AXI_ARVALID,1'b0} : {1'b0,X_AXI_ARVALID};
assign X_AXI_ARREADY = (sel_id) ? I_AXI_ARREADY : S_AXI_ARREADY;
assign X_AXI_RDATA = (sel_id) ? I_AXI_RDATA : S_AXI_RDATA;
assign X_AXI_RRESP = (sel_id) ? I_AXI_RRESP : S_AXI_RRESP;
assign X_AXI_RVALID = (sel_id) ? I_AXI_RVALID : S_AXI_RVALID;
assign {I_AXI_RREADY,S_AXI_RREADY} = (sel_id) ? {X_AXI_RREADY,1'b0} : {1'b0,X_AXI_RREADY};
******/

endmodule
