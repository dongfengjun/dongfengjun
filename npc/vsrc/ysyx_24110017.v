//`define YOSYS_STA
`include "./include/common.vh"
module ysyx_24110017(
	input clock,
	input reset,
	input io_interrupt,
	input io_master_awready,
	output io_master_awvalid,
	output [3:0]io_master_awid,
	output [31:0]io_master_awaddr,
	output [7:0]io_master_awlen,
	output [2:0]io_master_awsize,
	output [1:0]io_master_awburst,
	input io_master_wready,
	output io_master_wvalid,
	output [31:0]io_master_wdata,
	output [3:0]io_master_wstrb,
	output io_master_wlast,
	output io_master_bready,
	input io_master_bvalid,
	input [3:0]io_master_bid,
	input [1:0]io_master_bresp,
	input io_master_arready,
	output io_master_arvalid,
	output [3:0]io_master_arid,
	output [31:0]io_master_araddr,
	output [7:0]io_master_arlen,
	output [2:0]io_master_arsize,
	output [1:0]io_master_arburst,
	output io_master_rready,
	input io_master_rvalid,
	input [3:0]io_master_rid,
	input [31:0]io_master_rdata,
	input [1:0]io_master_rresp,
	input io_master_rlast,
	output io_slave_awready,
	input io_slave_awvalid,
	input [3:0]io_slave_awid,
	input [31:0]io_slave_awaddr,
	input [7:0]io_slave_awlen,
	input [2:0]io_slave_awsize,
	input [1:0]io_slave_awburst,
	output io_slave_wready,
	input io_slave_wvalid,
	input [31:0]io_slave_wdata,
	input [3:0]io_slave_wstrb,
	input io_slave_wlast,
	input io_slave_bready,
	output io_slave_bvalid,
	output [3:0]io_slave_bid,
	output [1:0]io_slave_bresp,
	output io_slave_arready,
	input io_slave_arvalid,
	input [3:0]io_slave_arid,
	input [31:0]io_slave_araddr,
	input [7:0]io_slave_arlen,
	input [2:0]io_slave_arsize,
	input [1:0]io_slave_arburst,
	input io_slave_rready,
	output io_slave_rvalid,
	output [3:0]io_slave_rid,
	output [31:0]io_slave_rdata,
	output [1:0]io_slave_rresp,
	output io_slave_rlast
);

wire DIFFTEST = difftest;
/***PCU***/
wire [31:0]pc;
wire [31:0]dnpc;
wire pc_valid,if_ready; //分布式控制
/***IFU***/
wire [31:0]inst;
wire if_valid,id_ready; //分布式控制
wire [31:0]if_axi_awaddr,if_axi_wdata,if_axi_araddr,if_axi_rdata;
wire [3:0]if_axi_wstrb;
wire [7:0]if_axi_awlen,if_axi_arlen;
wire [3:0]if_axi_awid,if_axi_bid,if_axi_arid,if_axi_rid;
wire [2:0]if_axi_awsize,if_axi_arsize;
wire [1:0]if_axi_awburst,if_axi_arburst;
wire [1:0]if_axi_bresp,if_axi_rresp;
wire if_axi_awvalid,if_axi_awready,if_axi_wvalid,if_axi_wready,if_axi_bvalid,if_axi_bready,if_axi_arvalid,if_axi_arready,if_axi_rvalid,if_axi_rready,if_axi_wlast,if_axi_rlast;
/***IDU***/
wire id_valid,ex_ready; //分布式控制
wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt; //I shamt
/***EXU***/
wire ls_read,ls_write,ls_done,ex_valid,wb_ready;
wire [31:0]ex;
wire ls_valid,ls_wen;
wire [31:0]ls_waddr,ls_wdata,ls_raddr;
wire [3:0]ls_wmask;
wire [2:0]ls_awsize,ls_arsize;
wire [7:0]ls_awlen,ls_arlen;
wire [1:0]ls_awburst,ls_arburst;
wire [31:0]mepc,o_mepc,mstatus,o_mstatus,mcause,o_mcause,mtvec,o_mtvec;
wire gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;
/***LSU***/
wire [31:0]ls_rdata;
wire [31:0]ls_axi_awaddr,ls_axi_wdata,ls_axi_araddr,ls_axi_rdata;
wire [3:0]ls_axi_wstrb;
wire [7:0]ls_axi_awlen,ls_axi_arlen;
wire [3:0]ls_axi_awid,ls_axi_bid,ls_axi_arid,ls_axi_rid;
wire [2:0]ls_axi_awsize,ls_axi_arsize;
wire [1:0]ls_axi_awburst,ls_axi_arburst;
wire [1:0]ls_axi_bresp,ls_axi_rresp;
wire ls_axi_awvalid,ls_axi_awready,ls_axi_wvalid,ls_axi_wready,ls_axi_bvalid,ls_axi_bready,ls_axi_arvalid,ls_axi_arready,ls_axi_rvalid,ls_axi_rready,ls_axi_wlast,ls_axi_rlast;
/***Arbiter-Xbar***/
/***My-Sram***
wire [31:0]S_AXI_AWADDR,S_AXI_WDATA,S_AXI_ARADDR,S_AXI_RDATA;
wire [3:0]S_AXI_WSTRB;
wire [7:0]S_AXI_AWLEN,S_AXI_ARLEN;
wire [3:0]S_AXI_AWID,S_AXI_BID,S_AXI_ARID,S_AXI_RID;
wire [2:0]S_AXI_AWSIZE,S_AXI_ARSIZE;
wire [1:0]S_AXI_AWBURST,S_AXI_ARBURST;
wire [1:0]S_AXI_BRESP,S_AXI_RRESP;
wire S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WVALID,S_AXI_WREADY,S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RVALID,S_AXI_RREADY,S_AXI_WLAST,S_AXI_RLAST;
***/
/***My-Uart***
wire [31:0]U_AXI_AWADDR,U_AXI_WDATA,U_AXI_ARADDR,U_AXI_RDATA;
wire [3:0]U_AXI_WSTRB;
wire [7:0]U_AXI_AWLEN,U_AXI_ARLEN;
wire [3:0]U_AXI_AWID,U_AXI_BID,U_AXI_ARID,U_AXI_RID;
wire [2:0]U_AXI_AWSIZE,U_AXI_ARSIZE;
wire [1:0]U_AXI_AWBURST,U_AXI_ARBURST;
wire [1:0]U_AXI_BRESP,U_AXI_RRESP;
wire U_AXI_AWVALID,U_AXI_AWREADY,U_AXI_WVALID,U_AXI_WREADY,U_AXI_BVALID,U_AXI_BREADY,U_AXI_ARVALID,U_AXI_ARREADY,U_AXI_RVALID,U_AXI_RREADY,U_AXI_WLAST,U_AXI_RLAST;
***/
/***My-Clint***/
wire [31:0]c_axi_awaddr,c_axi_wdata,c_axi_araddr,c_axi_rdata;
wire [3:0]c_axi_wstrb;
wire [7:0]c_axi_awlen,c_axi_arlen;
wire [3:0]c_axi_awid,c_axi_bid,c_axi_arid,c_axi_rid;
wire [2:0]c_axi_awsize,c_axi_arsize;
wire [1:0]c_axi_awburst,c_axi_arburst;
wire [1:0]c_axi_bresp,c_axi_rresp;
wire c_axi_awvalid,c_axi_awready,c_axi_wvalid,c_axi_wready,c_axi_bvalid,c_axi_bready,c_axi_arvalid,c_axi_arready,c_axi_rvalid,c_axi_rready,c_axi_wlast,c_axi_rlast;
/***WBU***/
wire ex_valid,wb_ready,wb_done,difftest;
wire [31:0]xrd;
wire [4:0]rf_addr;
wire rf_wen;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;
wire mepc_en,mstatus_en,mcause_en,mtvec_en;
/***RFU***/
wire [31:0]r1,r2;
wire [31:0]mvendorid,marchid; //ID


ysyx_24110017_PCU PCU(clock,reset,
		pc,dnpc,
		pc_valid,
		if_ready
);
ysyx_24110017_IFU IFU(clock,reset,
		pc,inst,pc_valid,if_ready,if_valid,id_ready,wb_done,
		if_axi_awready,if_axi_awvalid,if_axi_awid,if_axi_awaddr,
		if_axi_awlen,if_axi_awsize,if_axi_awburst,
		if_axi_wready,if_axi_wvalid,if_axi_wdata,if_axi_wstrb,if_axi_wlast,
		if_axi_bready,if_axi_bvalid,if_axi_bid,if_axi_bresp,
		if_axi_arready,if_axi_arvalid,if_axi_arid,if_axi_araddr,
		if_axi_arlen,if_axi_arsize,if_axi_arburst,
		if_axi_rready,if_axi_rvalid,if_axi_rid,if_axi_rdata,if_axi_rresp,if_axi_rlast
);
ysyx_24110017_IDU IDU(clock,reset,
		inst,if_valid,id_ready,id_valid,ex_ready,
		op,rd,funct3,rs1,rs2,imm,funct7,shamt
);
ysyx_24110017_EXU EXU(clock,reset,ex,
		id_valid,ex_ready,ex_valid,wb_ready, //分布式控制
		op,funct3,imm,funct7,shamt,r1,r2,
		ls_read,ls_write,ls_done,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,ls_awsize,ls_arsize,ls_awlen,ls_arlen,ls_awburst,ls_arburst,
		ls_rdata,
		pc,dnpc,
		mepc,mstatus,mcause,mtvec,o_mepc,o_mstatus,o_mcause,o_mtvec,
		gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen
);
ysyx_24110017_LSU LSU(clock,reset,ls_read,ls_write,ls_done,
		ls_rdata,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,ls_awsize,ls_arsize,ls_awlen,ls_arlen,ls_awburst,ls_arburst,
		ls_axi_awready,ls_axi_awvalid,ls_axi_awid,ls_axi_awaddr,
		ls_axi_awlen,ls_axi_awsize,ls_axi_awburst,
		ls_axi_wready,ls_axi_wvalid,ls_axi_wdata,ls_axi_wstrb,ls_axi_wlast,
		ls_axi_bready,ls_axi_bvalid,ls_axi_bid,ls_axi_bresp,
		ls_axi_arready,ls_axi_arvalid,ls_axi_arid,ls_axi_araddr,
		ls_axi_arlen,ls_axi_arsize,ls_axi_arburst,
		ls_axi_rready,ls_axi_rvalid,ls_axi_rid,ls_axi_rdata,ls_axi_rresp,ls_axi_rlast
);
ysyx_24110017_Xbar Xbar(clock,reset,
		if_axi_awready,if_axi_awvalid,if_axi_awid,if_axi_awaddr,
		if_axi_awlen,if_axi_awsize,if_axi_awburst,
		if_axi_wready,if_axi_wvalid,if_axi_wdata,if_axi_wstrb,if_axi_wlast,
		if_axi_bready,if_axi_bvalid,if_axi_bid,if_axi_bresp,
		if_axi_arready,if_axi_arvalid,if_axi_arid,if_axi_araddr,
		if_axi_arlen,if_axi_arsize,if_axi_arburst,
		if_axi_rready,if_axi_rvalid,if_axi_rid,if_axi_rdata,if_axi_rresp,if_axi_rlast,
		ls_axi_awready,ls_axi_awvalid,ls_axi_awid,ls_axi_awaddr,
		ls_axi_awlen,ls_axi_awsize,ls_axi_awburst,
		ls_axi_wready,ls_axi_wvalid,ls_axi_wdata,ls_axi_wstrb,ls_axi_wlast,
		ls_axi_bready,ls_axi_bvalid,ls_axi_bid,ls_axi_bresp,
		ls_axi_arready,ls_axi_arvalid,ls_axi_arid,ls_axi_araddr,
		ls_axi_arlen,ls_axi_arsize,ls_axi_arburst,
		ls_axi_rready,ls_axi_rvalid,ls_axi_rid,ls_axi_rdata,ls_axi_rresp,ls_axi_rlast,
/***My-sram***
		S_AXI_AWREADY,S_AXI_AWVALID,S_AXI_AWID,S_AXI_AWADDR,
		S_AXI_AWLEN,S_AXI_AWSIZE,S_AXI_AWBURST,
		S_AXI_WREADY,S_AXI_WVALID,S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WLAST,          
		S_AXI_BREADY,S_AXI_BVALID,S_AXI_BID,S_AXI_BRESP,
		S_AXI_ARREADY,S_AXI_ARVALID,S_AXI_ARID,S_AXI_ARADDR,
		S_AXI_ARLEN,S_AXI_ARSIZE,S_AXI_ARBURST,
		S_AXI_RREADY,S_AXI_RVALID,S_AXI_RID,S_AXI_RDATA,S_AXI_RRESP,S_AXI_RLAST,
		U_AXI_AWREADY,U_AXI_AWVALID,U_AXI_AWID,U_AXI_AWADDR,
		U_AXI_AWLEN,U_AXI_AWSIZE,U_AXI_AWBURST,
		U_AXI_WREADY,U_AXI_WVALID,U_AXI_WDATA,U_AXI_WSTRB,U_AXI_WLAST,          
		U_AXI_BREADY,U_AXI_BVALID,U_AXI_BID,U_AXI_BRESP,
		U_AXI_ARREADY,U_AXI_ARVALID,U_AXI_ARID,U_AXI_ARADDR,
		U_AXI_ARLEN,U_AXI_ARSIZE,U_AXI_ARBURST,
		U_AXI_RREADY,U_AXI_RVALID,U_AXI_RID,U_AXI_RDATA,U_AXI_RRESP,U_AXI_RLAST,
******/
		io_master_awready,io_master_awvalid,io_master_awid,io_master_awaddr,
		io_master_awlen,io_master_awsize,io_master_awburst,
		io_master_wready,io_master_wvalid,io_master_wdata,io_master_wstrb,io_master_wlast,
		io_master_bready,io_master_bvalid,io_master_bid,io_master_bresp,
		io_master_arready,io_master_arvalid,io_master_arid,io_master_araddr,
		io_master_arlen,io_master_arsize,io_master_arburst,
		io_master_rready,io_master_rvalid,io_master_rid,io_master_rdata,io_master_rresp,io_master_rlast,
/***My-Clint***/
		c_axi_awready,c_axi_awvalid,c_axi_awid,c_axi_awaddr,
		c_axi_awlen,c_axi_awsize,c_axi_awburst,
		c_axi_wready,c_axi_wvalid,c_axi_wdata,c_axi_wstrb,c_axi_wlast,
		c_axi_bready,c_axi_bvalid,c_axi_bid,c_axi_bresp,
		c_axi_arready,c_axi_arvalid,c_axi_arid,c_axi_araddr,
		c_axi_arlen,c_axi_arsize,c_axi_arburst,
		c_axi_rready,c_axi_rvalid,c_axi_rid,c_axi_rdata,c_axi_rresp,c_axi_rlast,
		mvendorid,marchid
);
/***My-sram***
ysyx_24110017_SRAM ysyx_24110017_SRAM(clock,reset,
		S_AXI_AWREADY,S_AXI_AWVALID,S_AXI_AWID,S_AXI_AWADDR,
    S_AXI_AWLEN,S_AXI_AWSIZE,S_AXI_AWBURST,
    S_AXI_WREADY,S_AXI_WVALID,S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WLAST,
    S_AXI_BREADY,S_AXI_BVALID,S_AXI_BID,S_AXI_BRESP,
    S_AXI_ARREADY,S_AXI_ARVALID,S_AXI_ARID,S_AXI_ARADDR,
    S_AXI_ARLEN,S_AXI_ARSIZE,S_AXI_ARBURST,
    S_AXI_RREADY,S_AXI_RVALID,S_AXI_RID,S_AXI_RDATA,S_AXI_RRESP,S_AXI_RLAST
);
******/
/***My-Uart***
ysyx_24110017_UART ysyx_24110017_UART(clock,reset,
		U_AXI_AWREADY,U_AXI_AWVALID,U_AXI_AWID,U_AXI_AWADDR,
		U_AXI_AWLEN,U_AXI_AWSIZE,U_AXI_AWBURST,
		U_AXI_WREADY,U_AXI_WVALID,U_AXI_WDATA,U_AXI_WSTRB,U_AXI_WLAST, 
		U_AXI_BREADY,U_AXI_BVALID,U_AXI_BID,U_AXI_BRESP,
		U_AXI_ARREADY,U_AXI_ARVALID,U_AXI_ARID,U_AXI_ARADDR,
		U_AXI_ARLEN,U_AXI_ARSIZE,U_AXI_ARBURST,
		U_AXI_RREADY,U_AXI_RVALID,U_AXI_RID,U_AXI_RDATA,U_AXI_RRESP,U_AXI_RLAST
);
******/
/***My-Clint***/
ysyx_24110017_CLINT CLINT(clock,reset,
		c_axi_awready,c_axi_awvalid,c_axi_awid,c_axi_awaddr,
		c_axi_awlen,c_axi_awsize,c_axi_awburst,
		c_axi_wready,c_axi_wvalid,c_axi_wdata,c_axi_wstrb,c_axi_wlast,
		c_axi_bready,c_axi_bvalid,c_axi_bid,c_axi_bresp,
		c_axi_arready,c_axi_arvalid,c_axi_arid,c_axi_araddr,
		c_axi_arlen,c_axi_arsize,c_axi_arburst,
		c_axi_rready,c_axi_rvalid,c_axi_rid,c_axi_rdata,c_axi_rresp,c_axi_rlast
);
ysyx_24110017_WBU WBU(clock,reset,
		ex_valid,wb_ready,wb_done,difftest,
		xrd,ex,
		rf_addr,rd,
		rf_wen,gpr_wen,
		o_mepc,o_mstatus,o_mcause,o_mtvec,w_mepc,w_mstatus,w_mcause,w_mtvec,
		mepc_wen,mstatus_wen,mcause_wen,mtvec_wen,
		mepc_en,mstatus_en,mcause_en,mtvec_en
);
ysyx_24110017_RegisterFile #(5,32) RFU (clock,xrd,rf_addr,rf_wen,rs1,r1,rs2,r2);
ysyx_24110017_Reg #(32, 32'b0) mepc_reg (clock,reset,w_mepc,mepc,mepc_en);
ysyx_24110017_Reg #(32, 32'h1800) mstatus_reg (clock,reset,w_mstatus,mstatus,mstatus_en);
ysyx_24110017_Reg #(32, 32'b0) mcause_reg (clock,reset,w_mcause,mcause,mcause_en);
ysyx_24110017_Reg #(32, 32'b0) mtvec_reg (clock,reset,w_mtvec,mtvec,mtvec_en);
ysyx_24110017_Reg #(32, 32'h79737978) mvendorid_reg (clock,reset,32'b0,mvendorid,1'b0);
ysyx_24110017_Reg #(32, 32'h016fe3c1) marchid_reg (clock,reset,32'b0,marchid,1'b0);


`ifndef YOSYS_STA
/***DPI-C*CSR***/
export "DPI-C" function csr_grab;                                    
function int csr_grab(int i);
  begin
    assign csr_grab = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : (i == 4) ? mvendorid : (i == 5) ? marchid : 32'b0;
  end
endfunction
/***DPI-C*DIFFTEST***/
export "DPI-C" function dpic_grab;                                    
function int dpic_grab(int i);
  begin
		assign dpic_grab = (i == 0) ? pc : (i == 1) ? dnpc : (i == 2) ? inst : (i == 3) ? {31'b0,DIFFTEST} : 32'b0;
  end
endfunction
/***E*N*D***/

/***DPI-C*PERFORMANCE_COUNTER***/
export "DPI-C" function performance_counter;
function int performance_counter(int i);
  begin
    assign performance_counter = (i == 0) ? {31'b0,if_valid && id_ready}
															 : (i == 1) ? {31'b0,id_valid && ex_ready}
															 : (i == 2) ? {31'b0,ex_valid && wb_ready}
															 : (i == 3) ? {31'b0,ls_done}
															 : (i == 4) ? {25'b0,inst[6:0]}
															 : (i == 5) ? {31'b0,wb_done}
															 : (i == 6) ? {31'b0,if_axi_arvalid && if_axi_arready}
															 : (i == 7) ? {31'b0,if_axi_rvalid && if_axi_rready}
															 : (i == 8) ? {31'b0,pc_valid && if_ready}
															 : (i == 9) ? {31'b0,ls_axi_awvalid && ls_axi_awready}
															 : (i == 10) ? {31'b0,ls_axi_arvalid && ls_axi_arready}
															 : 32'b0;
  end
endfunction
/***E*N*D***/
`endif


endmodule
