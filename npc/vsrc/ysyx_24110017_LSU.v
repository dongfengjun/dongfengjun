//`define YOSYS_STA
module ysyx_24110017_LSU(
	input  wire clk,
	input  wire rst,

	input  wire [31:0] pc_i,//difftest
	input  wire [31:0] inst_i,
	input  wire [31:0] dnpc_i,
	output reg  [31:0] pc_o,
	output reg  [31:0] inst_o,
	output reg  [31:0] dnpc_o,

	input  wire ex_valid_i,	
  output wire ls_ready_o,
	output wire difftest_o,
	input  wire [ 6:0] op_i,
	input  wire [ 2:0] funct3_i,
	input  wire [ 4:0] rd_i,
  input  wire gpr_wen_i,
	input  wire [31:0] mepc_i,
  input  wire [31:0] mstatus_i,
  input  wire [31:0] mcause_i,
  input  wire [31:0] mtvec_i,
  input  wire mepc_wen_i,
  input  wire mstatus_wen_i,
  input  wire mcause_wen_i,
  input  wire mtvec_wen_i,
  input  wire [31:0] ex_i,
  input  wire ls_valid_i,ls_wen_i,
  input  wire ls_read_i,ls_write_i,
  input  wire [31:0] ls_waddr_i,ls_wdata_i,ls_raddr_i,
  input  wire [ 3:0] ls_wmask_i,
  input  wire [ 2:0] ls_awsize_i,ls_arsize_i,
  input  wire [ 7:0] ls_awlen_i,ls_arlen_i,
  input  wire [ 1:0] ls_awburst_i,ls_arburst_i,
	
	output reg  [31:0] xrd_o,
	output reg  [ 4:0] rd_o,
  output reg  gpr_wen_o,
  output reg  [31:0] mepc_o,
  output reg  [31:0] mstatus_o,
  output reg  [31:0] mcause_o,
  output reg  [31:0] mtvec_o,
  output reg  mepc_wen_o,
  output reg  mstatus_wen_o,
  output reg  mcause_wen_o,
  output reg  mtvec_wen_o,
 
	input  wire ls_axi_awready,
	output wire ls_axi_awvalid,
	output wire [ 3:0]ls_axi_awid,
	output wire [31:0]ls_axi_awaddr,
	output wire [ 7:0]ls_axi_awlen,
	output wire [ 2:0]ls_axi_awsize,
	output wire [ 1:0]ls_axi_awburst,
	input  wire ls_axi_wready,
	output wire ls_axi_wvalid,
	output wire [31:0]ls_axi_wdata,
	output wire [ 3:0]ls_axi_wstrb,
	output wire ls_axi_wlast,
	output wire ls_axi_bready,
	input  wire ls_axi_bvalid,
	input  wire [ 3:0]ls_axi_bid,
	input  wire [ 1:0]ls_axi_bresp,

	input  wire ls_axi_arready,
	output wire ls_axi_arvalid,
	output wire [ 3:0]ls_axi_arid,
	output wire [31:0]ls_axi_araddr,
	output wire [ 7:0]ls_axi_arlen,
	output wire [ 2:0]ls_axi_arsize,
	output wire [ 1:0]ls_axi_arburst,
	output wire ls_axi_rready,
	input  wire ls_axi_rvalid,
	input  wire [ 3:0]ls_axi_rid,
	input  wire [31:0]ls_axi_rdata,
	input  wire [ 1:0]ls_axi_rresp,
	input  wire ls_axi_rlast
);

/***分布式控制***/
assign ls_ready_o = (state == IDLE);
assign difftest_o = (state == DIFFTEST);
parameter IDLE = 2'b00,WAIT = 2'b01,DONE = 2'b10,DIFFTEST = 2'b11;
reg[1:0] state;
 
always @(posedge clk or posedge rst) begin
  if(rst) state <= IDLE;
  else begin
    case (state)
      IDLE: state <= (ex_valid_i && ls_ready_o) ? WAIT : state;
      WAIT: state <= (ls_done_o || !ls_valid_i) ? DONE : state;
			DONE: state <= DIFFTEST;
			DIFFTEST : state <= IDLE;
    endcase
  end
end

wire [31:0] xrd = (ls_valid_i) ? ls_rdata : ex_i;

always@(posedge clk or posedge rst) begin
	if(rst) begin
		pc_o					<= 32'h0;
		inst_o				<= 32'h0;
		dnpc_o				<= 32'h0;

		rd_o					<= 5'b0;
		gpr_wen_o			<= 1'b0;
		mepc_o				<= 32'h0;
		mstatus_o			<= 32'h0;
		mcause_o			<= 32'h0;
		mtvec_o				<= 32'h0;
		mepc_wen_o		<= 1'b0;
		mstatus_wen_o <= 1'b0;
		mcause_wen_o	<= 1'b0;
		mtvec_wen_o		<= 1'b0;
		xrd_o					<= 32'h0;
	end
	else begin
		case(state)
			IDLE: begin
				rd_o          <= 5'b0;
		    gpr_wen_o     <= 1'b0;
		    mepc_o        <= 32'h0;
		    mstatus_o     <= 32'h0;
		    mcause_o      <= 32'h0;
		    mtvec_o       <= 32'h0;
		    mepc_wen_o    <= 1'b0;
		    mstatus_wen_o <= 1'b0;
		    mcause_wen_o  <= 1'b0;
		    mtvec_wen_o   <= 1'b0;
		    xrd_o         <= 32'h0; 
			end
			WAIT: begin
				if(ls_done_o || !ls_valid_i) begin
					pc_o          <= pc_i;
			    inst_o        <= inst_i;
			    dnpc_o        <= dnpc_i;
					
					rd_o          <= rd_i;
					gpr_wen_o     <= gpr_wen_i;
					mepc_o        <= mepc_i;
					mstatus_o     <= mstatus_i;
					mcause_o      <= mcause_i;
					mtvec_o       <= mtvec_i;
					mepc_wen_o    <= mepc_wen_i;
					mstatus_wen_o <= mstatus_wen_i;
					mcause_wen_o  <= mcause_wen_i;
					mtvec_wen_o   <= mtvec_wen_i;
					xrd_o         <= xrd;
				end
			end
			default: begin
			end
		endcase
	end
end

reg ls_done_reg;
wire ls_done_o = ls_done_reg;
reg [31:0]ls_rdata_reg;
wire [31:0]ls_rdata;

assign ls_rdata = ((ls_raddr_i % 4 == 0) && op_i == 7'b0000011 && funct3_i == 3'b010) ? ls_rdata_reg
 : ((ls_raddr_i % 4 == 1) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {8'b0,ls_rdata_reg[31:8]}
 : ((ls_raddr_i % 4 == 2) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {16'b0,ls_rdata_reg[31:16]}
 : ((ls_raddr_i % 4 == 3) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {24'b0,ls_rdata_reg[31:24]}
 : ((ls_raddr_i % 4 == 0) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_reg[7:0]}
 : ((ls_raddr_i % 4 == 1) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_reg[15:8]}
 : ((ls_raddr_i % 4 == 2) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_reg[23:16]}
 : ((ls_raddr_i % 4 == 3) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_reg[31:24]}
 : ((ls_raddr_i % 4 == 0) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_reg[15:0]}
 : ((ls_raddr_i % 4 == 1) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_reg[23:8]}
 : ((ls_raddr_i % 4 == 2) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_reg[31:16]}
 : ((ls_raddr_i % 4 == 3) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {24'b0,ls_rdata_reg[31:24]}
 : 32'b0;

import "DPI-C" function void diff_skip_ref();

parameter AXI_IDLE=3'b0,AXI_READ=3'b001,AXI_WRITE1=3'b010,AXI_WRITE2=3'b011,AXI_DONE=3'b100;
reg [2:0]axi_state;

reg axi_awvalid,axi_wvalid;
reg [3:0]axi_awid;
reg [31:0]axi_awaddr,axi_wdata;
reg [7:0]axi_awlen;
reg [2:0]axi_awsize;
reg [1:0]axi_awburst;
reg [3:0]axi_wstrb;
reg axi_bready;
reg axi_wlast;
assign ls_axi_awvalid = axi_awvalid;
assign ls_axi_wvalid = axi_wvalid;
assign ls_axi_awid = axi_awid;
assign ls_axi_awaddr = axi_awaddr;
assign ls_axi_wdata = (ls_axi_wvalid) ? ls_wdata_i : 32'h0;//axi_wdata;
assign ls_axi_awlen = axi_awlen;
assign ls_axi_awsize = axi_awsize;
assign ls_axi_awburst = axi_awburst;
assign ls_axi_wstrb = axi_wstrb;
assign ls_axi_bready = axi_bready;
assign ls_axi_wlast = axi_wlast;

reg axi_arvalid,axi_rready;
reg [3:0]axi_arid;
reg [31:0]axi_araddr;
reg [7:0]axi_arlen;
reg [2:0]axi_arsize;
reg [1:0]axi_arburst;
assign ls_axi_arvalid = axi_arvalid;
assign ls_axi_rready = axi_rready;
assign ls_axi_arid = axi_arid;
assign ls_axi_araddr = axi_araddr;
assign ls_axi_arlen = axi_arlen;
assign ls_axi_arsize = axi_arsize;
assign ls_axi_arburst = axi_arburst;

always @(posedge clk or posedge rst) begin
		if (rst) begin
			axi_state <= AXI_IDLE;
      axi_arvalid <= 0;
      axi_rready <= 0;
      axi_araddr <= 32'h0;
      axi_awvalid <= 0;
      axi_awaddr <= 32'h0;
			axi_arsize <= 3'b0;
			axi_arlen <= 8'b0;
			axi_arburst <= 2'b01;
			axi_awsize <= 3'b0; 
      axi_wdata <= 32'h0;
      axi_wstrb <= 4'b0;
		  axi_wvalid <= 0;
			axi_awlen <= 8'b0;
			axi_awburst <= 2'b01;
			axi_wlast <= 0;
      axi_bready <= 0;

			ls_done_reg <= 0;
			ls_rdata_reg <= 32'h0;
    end 
		else begin
      case (axi_state)
        AXI_IDLE: begin
				  if(ls_read_i) begin
            axi_state <= AXI_READ;
					  axi_arvalid <= 1'b1;//非DELAY_TEST
						axi_araddr <= ls_raddr_i;
						axi_arsize <= ls_arsize_i;
						axi_arlen <= ls_arlen_i;
						axi_arburst <= ls_arburst_i;
					end
					if(ls_write_i) begin
		        axi_state <= AXI_WRITE1;
						axi_awvalid <= 1'b1;//非DELAY_TEST
						axi_awaddr <= ls_waddr_i;
						axi_awsize <= ls_awsize_i;
						axi_awlen <= ls_awlen_i;
						axi_awburst <= ls_awburst_i;
						axi_wstrb <= ls_wmask_i;
	        end
				end
				AXI_READ: begin
          if(ls_axi_arvalid && ls_axi_arready) begin
						axi_arvalid <= 1'b0;
						axi_rready <= 1'b1;
					end
	        if(ls_axi_rvalid && ls_axi_rready) begin
            ls_rdata_reg <= ls_axi_rdata;//
						axi_rready <= 0;
            axi_state <= AXI_DONE;
`ifndef YOSYS_STA						
						if((ls_axi_araddr - 32'h10000000 < 32'h1000) || (ls_axi_araddr == 32'h02000000) || (ls_axi_araddr == 32'h02000004)) begin //DEVICE DIFFTEST
							diff_skip_ref();
						end
`endif
						ls_done_reg <= 1'b1;
          end
        end
				AXI_WRITE1: begin
					if(ls_axi_awvalid && ls_axi_awready) begin
						axi_awvalid <= 1'b0;
						axi_wvalid <= 1'b1;
						axi_wlast <= 1'b1;
						axi_state <= AXI_WRITE2;
					end
				end
				AXI_WRITE2:begin
					if(ls_axi_wvalid && ls_axi_wready) begin
						axi_wvalid <= 0;
					end
					if(ls_axi_bvalid && !ls_axi_bready) begin
						axi_bready <= 1;
					end
					if(ls_axi_bvalid && ls_axi_bready) begin
						axi_bready <= 0;
						axi_state <= AXI_DONE;
						ls_done_reg <= 1'b1;
					end
				end
        AXI_DONE: begin
					axi_arvalid <= 0;
					axi_rready <= 0;
					axi_araddr <= 32'h0;
					axi_awvalid <= 0;
					axi_awaddr <= 0;
					axi_wdata <= 32'h0;
					axi_wstrb <= 4'b0;
					axi_arsize <= 3'b0;
					axi_awsize <= 3'b0;
					axi_awburst <= 2'b0;
					axi_arburst <= 2'b0;
					axi_awlen <= 8'b0;
					axi_arlen <= 8'b0;
					axi_wvalid <= 0;
					axi_bready <= 0;
					ls_done_reg <= 0;
					ls_rdata_reg <= 32'h0;
          axi_state <= AXI_IDLE;
        end
			default: begin
			end
      endcase
		end
	end
endmodule
