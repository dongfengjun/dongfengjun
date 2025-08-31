module ysyx_24110017_IFU(
	input  wire clk,
	input  wire rst,

	input  wire flush,
	input  wire pc_valid_i,
	output wire if_ready_o,
	output reg  if_valid_o,
	input  wire id_ready_i,

  input  wire [31:0] pc_i,
	
  output reg  [31:0] pc_o,
  output reg  [31:0] inst_o,
/***AXI4*R***/
	input  wire				 if_axi_arready_i,
	output reg				 if_axi_arvalid_o,
	output wire [ 3:0] if_axi_arid_o,
	output reg  [31:0] if_axi_araddr_o,
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
wire ifaddr_valid = (pc_i[31:28] == 4'h3) || (pc_i[31:24] == 8'h0f) || (pc_i[31] == 1'b1 && pc_i[30:29] != 2'b11);

always @(posedge clk) begin
	if(rst || flush) state <= IDLE;
	else begin
		case(state)
			IDLE: state <= (pc_valid_i && ifaddr_valid) ? WAIT : state;
			WAIT:	state <= (if_valid_o && id_ready_i)   ? IDLE : state;
		endcase
	end
end

always @(posedge clk) begin
	if(rst || flush) if_valid_o <= 1'b0;
	else begin
		if(if_axi_rvalid_i && if_axi_rready_o && !if_axi_arvalid_o && (state == WAIT)) begin
			if_valid_o <= 1'b1;
		end
		if(if_valid_o && id_ready_i) begin
			if_valid_o <= 1'b0;
		end
	end
end

/***
always @(posedge clk) begin
	if(rst || flush) begin
		pc_o	 <= 32'h0;
		inst_o <= 32'h0;
	end
  else begin
		case(state)
			WAIT: begin
				if(if_valid_o && id_ready_i) begin
					pc_o	 <= if_axi_araddr_o;
					inst_o <= if_axi_rdata_i;
				end
			end
			default: begin
			end
		endcase
	end
end
***/

always @(posedge clk) begin
  case({rst || flush,state,if_valid_o && id_ready_i})
    3'b1??: begin
      pc_o   <= 32'h0;
      inst_o <= 32'h0;
    end
    3'b011: begin
			pc_o   <= if_axi_araddr_o;
			inst_o <= if_axi_rdata_i;
		end
    default: begin
    end
  endcase
end

/***AXI4_LITE***/
assign if_axi_arid_o    = 4'b0;
assign if_axi_arlen_o   = 8'b0;
assign if_axi_arsize_o  = 3'b0;
assign if_axi_arburst_o = 2'b0;
always @(posedge clk) begin
  if(rst || flush) begin
		if_axi_arvalid_o <= 1'b0;
		if_axi_rready_o  <= 1'b1;
		if_axi_araddr_o  <= 32'h0;
  end 
	else begin
    case (state)
      IDLE: begin
				if_axi_arvalid_o <= 1'b1;
				if_axi_araddr_o  <= pc_i;
      end
      WAIT: begin
				if(if_axi_arvalid_o && if_axi_arready_i) begin
					if_axi_arvalid_o <= 1'b0;
					if_axi_rready_o  <= 1'b1;
				end
        if(if_axi_rvalid_i && if_axi_rready_o) begin
					if_axi_rready_o <= 1'b0;
				end
      end
    endcase
  end
end

endmodule
