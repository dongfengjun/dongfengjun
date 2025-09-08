module ysyx_24110017_IFU(
	input  wire clk,
	input  wire rst,

	input  wire flush,
	output reg  if_valid_o,
	input  wire id_ready_i,

	input  wire [31:0] dnpc_i,
	input  wire [31:0] snpc_i,

  output reg  [31:0] pc_o,
  output reg  [31:0] inst_o,
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
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk) begin
	if(rst || flush) state <= IDLE;
	else begin
		case(state)
			IDLE: state <= WAIT;
			WAIT:	state <= (if_valid_o && id_ready_i)   ? IDLE : state;
		endcase
	end
end

always @(posedge clk) begin
  casez({rst || flush, state})
		2'b1? : if_valid_o <= 1'b0;
		2'b01 : begin
			if(if_axi_rvalid_i && if_axi_rready_o && !if_axi_arvalid_o) begin
				if_valid_o <= 1'b1;
			end
			if(if_valid_o && id_ready_i) begin
				if_valid_o <= 1'b0;
			end
		end
		default : begin
		end
  endcase
end

localparam RESET_PC = 32'h30000000;

reg [31:0]pc;
always @(posedge clk) begin
  casez({rst, flush, updata})
    3'b1??:  pc <= RESET_PC;
    3'b01?:  pc <= dnpc_i;
    3'b001:  pc <= snpc_i;
		default: pc <= pc;
	endcase
end

wire updata = if_valid_o && id_ready_i;

always @(posedge clk) begin
	if(updata) pc_o <= pc;
end
always @(posedge clk) begin
  if(updata) inst_o <= if_axi_rdata_i;
end

/***AXI4_LITE***/
assign if_axi_arid_o    = 4'b0;
assign if_axi_arlen_o   = 8'b0;
assign if_axi_arsize_o  = 3'b0;
assign if_axi_arburst_o = 2'b0;
assign if_axi_araddr_o  = pc;

always @(posedge clk) begin
  if(rst || flush) begin
		if_axi_rready_o  <= 1'b1;
  end 
	else begin
    case (state)
      IDLE: begin
				if_axi_arvalid_o <= 1'b1;
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
