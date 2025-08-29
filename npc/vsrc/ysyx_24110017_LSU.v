//`define YOSYS_STA
module ysyx_24110017_LSU(
	input  wire clk,
	input  wire rst,
`ifndef YOSYS_STA
	input  wire [31:0] pc_i,
	input  wire [31:0] inst_i,
	input  wire [31:0] dnpc_i,
	output reg  [31:0] pc_o,
	output reg  [31:0] inst_o,
	output reg  [31:0] dnpc_o,
`endif
	input  wire				 ex_valid_i,	
  output wire				 ls_ready_o,
	output wire				 ls_valid_o,
	output wire				 difftest_o,
	input  wire [ 4:0] op_i,
	input  wire [ 2:0] funct3_i,
	input  wire [ 3:0] rd_i,
  input  wire				 gpr_wen_i,
	input  wire [31:0] mepc_i,
  input  wire [31:0] mcause_i,
  input  wire [31:0] csrsw_i,
  input  wire [ 3:0] csrs_wen_i,
  input  wire [31:0] ex_i,
	input						   ls_wen_i,ls_ren_i,
  input  wire [31:0] ls_waddr_i,ls_wdata_i,ls_raddr_i,
	
	output reg  [31:0] xrd_o,
	output reg  [ 3:0] rd_o,
  output reg				 gpr_wen_o,
  output reg  [31:0] mepc_o,
  output reg  [31:0] mcause_o,
  output reg  [31:0] csrsw_o,
  output reg  [ 3:0] csrs_wen_o,
 
	input  wire				 ls_axi_awready,
	output reg				 ls_axi_awvalid,
	output wire [ 3:0] ls_axi_awid,
	output wire [31:0] ls_axi_awaddr,
	output wire [ 7:0] ls_axi_awlen,
	output wire [ 2:0] ls_axi_awsize,
	output wire [ 1:0] ls_axi_awburst,
	input  wire				 ls_axi_wready,
	output reg				 ls_axi_wvalid,
	output wire [31:0] ls_axi_wdata,
	output wire [ 3:0] ls_axi_wstrb,
	output wire				 ls_axi_wlast,
	output reg				 ls_axi_bready,
	input  wire				 ls_axi_bvalid,
	input  wire [ 3:0] ls_axi_bid,
	input  wire [ 1:0] ls_axi_bresp,

	input  wire				 ls_axi_arready,
	output reg				 ls_axi_arvalid,
	output wire [ 3:0] ls_axi_arid,
	output wire  [31:0] ls_axi_araddr,
	output wire [ 7:0] ls_axi_arlen,
	output wire [ 2:0] ls_axi_arsize,
	output wire [ 1:0] ls_axi_arburst,
	output reg				 ls_axi_rready,
	input  wire				 ls_axi_rvalid,
	input  wire	[ 3:0] ls_axi_rid,
	input  wire [31:0] ls_axi_rdata,
	input  wire [ 1:0] ls_axi_rresp,
	input  wire				 ls_axi_rlast
);

/***分布式控制***/
assign ls_ready_o = (state == IDLE);

`ifndef YOSYS_STA
assign ls_valid_o = (state == DONE);
assign difftest_o = (state == DIFFTEST);
parameter IDLE = 2'b00,WAIT = 2'b01,DONE = 2'b10,DIFFTEST = 2'b11;
reg[1:0] state; 
always @(posedge clk) begin
  if(rst) state <= IDLE;
  else begin
    case (state)
      IDLE: state			 <= (ex_valid_i && ls_ready_o)   ? WAIT : state;
      WAIT: state			 <= (ls_done || !ls_valid_i) ? DONE : state;
			DONE: state			 <= DIFFTEST;
			DIFFTEST : state <= IDLE;
    endcase
  end
end
`else
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state; 
always @(posedge clk) begin
  if(rst) state <= IDLE;
  else begin
    case (state)
      IDLE: state      <= (ex_valid_i && ls_ready_o) ? WAIT : state;
      WAIT: state      <= (ls_done || !ls_valid_i)   ? IDLE : state;
    endcase
  end
end
`endif

wire ls_valid_i = (op_i == 5'b00000 || op_i == 5'b01000);
wire ls_done = (ls_axi_rvalid && ls_axi_rready) || (ls_axi_bvalid && ls_axi_bready);
wire [31:0] xrd = (ls_valid_i) ? ls_rdata : ex_i;
wire [ 3:0] ls_wmask_i = 
	 ((ls_waddr_i[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0001
 : ((ls_waddr_i[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b001) ? 4'b0011
 : ((ls_waddr_i[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b010) ? 4'b1111
 : ((ls_waddr_i[1:0] == 1) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0010
 : ((ls_waddr_i[1:0] == 2) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0100 
 : ((ls_waddr_i[1:0] == 2) && op_i == 5'b01000 && funct3_i == 3'b001) ? 4'b1100 
 : ((ls_waddr_i[1:0] == 3) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b1000 
 : 4'b0;
wire [31:0]ls_rdata = 
   ((ls_raddr_i[1:0] == 0) && op_i == 5'b00000 && funct3_i == 3'b010) ? ls_axi_rdata
 : ((ls_raddr_i[1:0] == 0) && op_i == 5'b00000 && funct3_i == 3'b000) ? {{24{ls_axi_rdata[7]}},ls_axi_rdata[7:0]}
 : ((ls_raddr_i[1:0] == 1) && op_i == 5'b00000 && funct3_i == 3'b000) ? {{24{ls_axi_rdata[15]}},ls_axi_rdata[15:8]}
 : ((ls_raddr_i[1:0] == 2) && op_i == 5'b00000 && funct3_i == 3'b000) ? {{24{ls_axi_rdata[23]}},ls_axi_rdata[23:16]}
 : ((ls_raddr_i[1:0] == 3) && op_i == 5'b00000 && funct3_i == 3'b000) ? {{24{ls_axi_rdata[31]}},ls_axi_rdata[31:24]}
 : ((ls_raddr_i[1:0] == 0) && op_i == 5'b00000 && funct3_i == 3'b001) ? {{16{ls_axi_rdata[15]}},ls_axi_rdata[15:0]}
 : ((ls_raddr_i[1:0] == 2) && op_i == 5'b00000 && funct3_i == 3'b001) ? {{16{ls_axi_rdata[31]}},ls_axi_rdata[31:16]}
 : ((ls_raddr_i[1:0] == 0) && op_i == 5'b00000 && funct3_i == 3'b100) ? {24'b0,ls_axi_rdata[7:0]}
 : ((ls_raddr_i[1:0] == 1) && op_i == 5'b00000 && funct3_i == 3'b100) ? {24'b0,ls_axi_rdata[15:8]}
 : ((ls_raddr_i[1:0] == 2) && op_i == 5'b00000 && funct3_i == 3'b100) ? {24'b0,ls_axi_rdata[23:16]}
 : ((ls_raddr_i[1:0] == 3) && op_i == 5'b00000 && funct3_i == 3'b100) ? {24'b0,ls_axi_rdata[31:24]}
 : ((ls_raddr_i[1:0] == 0) && op_i == 5'b00000 && funct3_i == 3'b101) ? {16'b0,ls_axi_rdata[15:0]}
 : ((ls_raddr_i[1:0] == 2) && op_i == 5'b00000 && funct3_i == 3'b101) ? {16'b0,ls_axi_rdata[31:16]}
 : 32'b0;
wire [ 2:0]ls_awsize_i = (op_i == 5'b01000 && funct3_i == 3'b000) ? 3'b000 : (op_i ==  5'b01000 && funct3_i == 3'b001) ? 3'b1 : (op_i == 5'b01000 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
wire [ 2:0]ls_arsize_i = (op_i == 5'b00000 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? 3'b0 : (op_i == 5'b00000 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? 3'b1 : (op_i == 5'b00000 && funct3_i == 3'b010) ? 3'b10 : 3'b10;

always@(posedge clk) begin
	if(rst) begin
`ifndef YOSYS_STA
		pc_o					<= 32'h0;
		inst_o				<= 32'h0;
		dnpc_o				<= 32'h0;
`endif
		rd_o					<= 4'b0;
		gpr_wen_o			<= 1'b0;
		mepc_o				<= 32'h0;
		mcause_o			<= 32'h0;
		csrsw_o				<= 32'h0;
		csrs_wen_o		<= 4'b0;
		xrd_o					<= 32'h0;
	end
	else begin
		case(state)
			IDLE: begin
				rd_o         <= 4'b0;
		    gpr_wen_o    <= 1'b0;
		    mepc_o       <= 32'h0;
		    mcause_o     <= 32'h0;
		    csrsw_o      <= 32'h0;
		    csrs_wen_o   <= 4'b0;
		    xrd_o        <= 32'h0; 
			end
			WAIT: begin
				if(ls_done || !ls_valid_i) begin
`ifndef YOSYS_STA
					pc_o       <= pc_i;
			    inst_o     <= inst_i;
			    dnpc_o     <= dnpc_i;
`endif
					rd_o       <= rd_i;
					gpr_wen_o  <= gpr_wen_i;
					mepc_o     <= mepc_i;
					mcause_o   <= mcause_i;
					csrsw_o    <= csrsw_i;
					csrs_wen_o <= csrs_wen_i;
					xrd_o      <= xrd;
				end
			end
			default: begin
				rd_o         <= 4'b0;
        gpr_wen_o    <= 1'b0;
        mepc_o       <= 32'h0;
        mcause_o     <= 32'h0;
        csrsw_o      <= 32'h0;
        csrs_wen_o   <= 4'b0;
        xrd_o        <= 32'h0;
			end
		endcase
	end
end

import "DPI-C" function void diff_skip_ref();

parameter AXI_IDLE=2'b00,AXI_READ=2'b01,AXI_WRITE=2'b10,AXI_DONE=2'b11;
reg [1:0]axi_state;

assign ls_axi_awaddr = (ls_axi_awvalid || ls_axi_bready) ? ls_waddr_i  : 32'h0;
assign ls_axi_awsize = (ls_axi_awvalid) ? ls_awsize_i : 3'b0;
assign ls_axi_wdata  = (ls_axi_wvalid)  ? ls_wdata_i  : 32'h0;
assign ls_axi_wstrb  = (ls_axi_wvalid)  ? ls_wmask_i  : 4'b0;
assign ls_axi_wlast  = (ls_axi_wvalid)  ? 1'b1 : 1'b0;
assign ls_axi_araddr = (ls_axi_arvalid || ls_axi_rready) ? ls_raddr_i  : 32'h0;
assign ls_axi_arsize = (ls_axi_arvalid) ? ls_arsize_i : 3'b0;

always @(posedge clk or posedge rst) begin
		if (rst) begin
			axi_state			 <= AXI_IDLE;
      ls_axi_awvalid <= 1'b0;
      ls_axi_wvalid  <= 1'b0;
      ls_axi_bready  <= 1'b0;

			ls_axi_arvalid <= 1'b0;
      ls_axi_rready	 <= 1'b0;
    end 
		else begin
      case (axi_state)
        AXI_IDLE: begin
				  if(ls_valid_i && ls_ren_i) begin
            axi_state		   <= AXI_READ;
					  ls_axi_arvalid <= 1'b1;
					end
					if(ls_valid_i && ls_wen_i) begin
		        axi_state      <= AXI_WRITE;
						ls_axi_awvalid <= 1'b1;
						ls_axi_wvalid  <= 1'b1;
	        end
				end
				AXI_READ: begin
          if(ls_axi_arvalid && ls_axi_arready) begin
						ls_axi_arvalid <= 1'b0;
						ls_axi_rready  <= 1'b1;
					end
	        if(ls_axi_rvalid && ls_axi_rready) begin
						ls_axi_rready  <= 1'b0;
            axi_state			 <= AXI_DONE;
`ifndef YOSYS_STA						
						if((ls_axi_araddr - 32'h10000000 < 32'h1000) || (ls_axi_araddr == 32'h02000000) || (ls_axi_araddr == 32'h02000004)) begin //DEVICE DIFFTEST
							diff_skip_ref();
						end
`endif
          end
        end
				AXI_WRITE: begin
					if(ls_axi_awvalid && ls_axi_awready) begin
						ls_axi_awvalid <= 1'b0;
					end
					if(ls_axi_wvalid && ls_axi_wready && ((ls_axi_awvalid && ls_axi_awready) || !ls_axi_awvalid)) begin
						ls_axi_wvalid  <= 1'b0;
						ls_axi_bready  <= 1'b1;
					end
					if(ls_axi_bvalid && ls_axi_bready) begin
						ls_axi_bready <= 1'b0;
						axi_state     <= AXI_DONE;
					end
				end
        AXI_DONE: begin
					ls_axi_arvalid <= 1'b0;
					ls_axi_rready	 <= 1'b0;
					ls_axi_awvalid <= 1'b0;
					ls_axi_wvalid  <= 1'b0;
					ls_axi_bready  <= 1'b0;
          axi_state      <= AXI_IDLE;
        end
      endcase
		end
	end
endmodule
