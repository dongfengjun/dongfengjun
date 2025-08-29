module ysyx_24110017_IFU(
	input  wire clk,
	input  wire rst,

	input  wire isCHazard,
	input  wire pc_valid_i,
	output wire if_ready_o,
	output reg  if_valid_o,
	input  wire id_ready_i,

  input  wire [31:0] pc_i,
	
  output reg  [31:0] pc_o,
  output reg  [31:0] inst_o,
	/***AXI4_W***/
	input  wire if_axi_awready_i,
	output wire if_axi_awvalid_o,
	output wire [ 3:0]if_axi_awid_o,
	output wire [31:0]if_axi_awaddr_o,
	output wire [ 7:0]if_axi_awlen_o,
	output wire [ 2:0]if_axi_awsize_o,
	output wire [ 1:0]if_axi_awburst_o,
	input  wire if_axi_wready_i,
	output wire if_axi_wvalid_o,
	output wire [31:0]if_axi_wdata_o,
	output wire [ 3:0]if_axi_wstrb_o,
	output wire if_axi_wlast_o,
	output wire if_axi_bready_o,
	input  wire if_axi_bvalid_i,
	input  wire [ 3:0]if_axi_bid_i,
	input  wire [ 1:0]if_axi_bresp_i,
/***AXI4*R***/
	input  wire				 if_axi_arready_i,
	output reg				 if_axi_arvalid_o,
	output wire [ 3:0] if_axi_arid_o,
	output wire [31:0] if_axi_araddr_o,
	output wire [ 7:0] if_axi_arlen_o,
	output wire	[ 2:0] if_axi_arsize_o,
	output wire	[ 1:0] if_axi_arburst_o,
	output reg				 if_axi_rready_o,
	input	 wire				 if_axi_rvalid_i,
	input  wire	[ 3:0] if_axi_rid_i,
	input	 wire	[31:0] if_axi_rdata_i,
	input  wire	[ 1:0] if_axi_rresp_i,
	input  wire				 if_axi_rlast_i
);

/***分布式控制***/
assign if_ready_o = (state == IDLE);
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk) begin
	if(rst) state <= IDLE;
	else if(isCHazard) state <= IDLE;
	else begin
		case(state)
			IDLE: state <= (pc_valid_i && if_ready_o) ? WAIT : state;
			WAIT:	state <= (if_valid_o && id_ready_i) ? IDLE : state;
		endcase
	end
end

reg isCHazard_reg;
always @(posedge clk) begin
	if(rst) isCHazard_reg <= 1'b0;
	else begin
		if(isCHazard && ((axi_state != AXI_IDLE) && !(if_axi_rvalid_i && if_axi_rready_o))) begin
			isCHazard_reg <= 1'b1;
		end
		else if(if_axi_rvalid_i && if_axi_rready_o) begin
			isCHazard_reg <= 1'b0;
		end
	end
end

always @(posedge clk) begin
	if(rst) if_valid_o <= 1'b0;
	else if(isCHazard) if_valid_o <= 1'b0;
	else begin
		if(if_axi_rvalid_i && if_axi_rready_o && !isCHazard_reg) begin
			if_valid_o <= 1'b1;
		end
		if(if_valid_o && id_ready_i) begin
			if_valid_o <= 1'b0;
		end
	end
end

always @(posedge clk) begin
	if(rst) begin
		pc_o	 <= 32'h0;
		inst_o <= 32'h0;
	end
	else if(isCHazard) begin
		pc_o   <= 32'h0;
    inst_o <= 32'h0;
	end
  else begin
		case(state)
			IDLE: begin
			end
			WAIT: begin
				if(if_valid_o && id_ready_i) begin
					pc_o	 <= if_axi_araddr_o;
					inst_o <= axi_rdata_reg;
				end
			end
		endcase
	end
end

/***AXI4_LITE***/
parameter AXI_IDLE = 1'b0,AXI_FETCH = 1'b1;
reg axi_state;
reg [31:0] axi_rdata_reg;
assign if_axi_arid_o    = 4'b0;
assign if_axi_araddr_o  = (if_axi_arvalid_o) ? pc_i : 32'h0;
assign if_axi_arlen_o   = 8'b0;
assign if_axi_arsize_o  = 3'b0;
assign if_axi_arburst_o = 2'b00;

always @(posedge clk) begin
	if(rst) axi_state <= AXI_IDLE;
	else if(isCHazard) axi_state <= AXI_IDLE;
	else begin
		case(axi_state)
			AXI_IDLE  : axi_state <= (pc_valid_i && if_ready_o)															? AXI_FETCH : axi_state;
			AXI_FETCH : axi_state <= (if_axi_rvalid_i && if_axi_rready_o && !isCHazard_reg) ? AXI_IDLE  : axi_state;
		endcase
	end
end

always @(posedge clk) begin
  if(rst) begin
		if_axi_arvalid_o <= 1'b0;
		if_axi_rready_o  <= 1'b1;
  end 
	else if(isCHazard) begin
    if_axi_arvalid_o <= 1'b0;
    if_axi_rready_o  <= 1'b1;
  end
	else begin
    case (axi_state)
      AXI_IDLE: begin
        if(pc_valid_i && if_ready_o) begin
					if_axi_arvalid_o <= 1'b1;
        end
      end
      AXI_FETCH: begin
				if(if_axi_arvalid_o && if_axi_arready_i) begin
					if_axi_arvalid_o <= 1'b0;
					if_axi_rready_o  <= 1'b1;
				end
        if(if_axi_rvalid_i && if_axi_rready_o) begin
					if_axi_rready_o <= 1'b0;
					axi_rdata_reg   <= if_axi_rdata_i;
				end
      end
    endcase
  end
end

endmodule
