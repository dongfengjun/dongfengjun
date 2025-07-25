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
wire [31:0]IFU_AXI_AWADDR,IFU_AXI_WDATA,IFU_AXI_ARADDR,IFU_AXI_RDATA;
wire [3:0]IFU_AXI_WSTRB;
wire [7:0]IFU_AXI_AWLEN,IFU_AXI_ARLEN;
wire [3:0]IFU_AXI_AWID,IFU_AXI_BID,IFU_AXI_ARID,IFU_AXI_RID;
wire [2:0]IFU_AXI_AWSIZE,IFU_AXI_ARSIZE;
wire [1:0]IFU_AXI_AWBURST,IFU_AXI_ARBURST;
wire [1:0]IFU_AXI_BRESP,IFU_AXI_RRESP;
wire IFU_AXI_AWVALID,IFU_AXI_AWREADY,IFU_AXI_WVALID,IFU_AXI_WREADY,IFU_AXI_BVALID,IFU_AXI_BREADY,IFU_AXI_ARVALID,IFU_AXI_ARREADY,IFU_AXI_RVALID,IFU_AXI_RREADY,IFU_AXI_WLAST,IFU_AXI_RLAST;
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
wire sram_lsu_read,sram_lsu_write,ls_done,ex_valid,wb_ready;
wire [31:0]res;
wire ls_valid,ls_wen;
wire [31:0]ls_waddr,ls_wdata,ls_raddr;
wire [3:0]ls_wmask;
wire [2:0]ls_awsize,ls_arsize;
wire [7:0]ls_awlen,ls_arlen;
wire [1:0]ls_awburst,ls_arburst;
wire [31:0]mepc,o_mepc,mstatus,o_mstatus,mcause,o_mcause,mtvec,o_mtvec;
wire gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;
/***LSU***/
wire [31:0]ls_rdata; //LSU_AXI4-LITE
wire [31:0]LSU_AXI_AWADDR,LSU_AXI_WDATA,LSU_AXI_ARADDR,LSU_AXI_RDATA;
wire [3:0]LSU_AXI_WSTRB;
wire [7:0]LSU_AXI_AWLEN,LSU_AXI_ARLEN;
wire [3:0]LSU_AXI_AWID,LSU_AXI_BID,LSU_AXI_ARID,LSU_AXI_RID;
wire [2:0]LSU_AXI_AWSIZE,LSU_AXI_ARSIZE;
wire [1:0]LSU_AXI_AWBURST,LSU_AXI_ARBURST;
wire [1:0]LSU_AXI_BRESP,LSU_AXI_RRESP;
wire LSU_AXI_AWVALID,LSU_AXI_AWREADY,LSU_AXI_WVALID,LSU_AXI_WREADY,LSU_AXI_BVALID,LSU_AXI_BREADY,LSU_AXI_ARVALID,LSU_AXI_ARREADY,LSU_AXI_RVALID,LSU_AXI_RREADY,LSU_AXI_WLAST,LSU_AXI_RLAST;
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
wire [31:0]C_AXI_AWADDR,C_AXI_WDATA,C_AXI_ARADDR,C_AXI_RDATA;
wire [3:0]C_AXI_WSTRB;
wire [7:0]C_AXI_AWLEN,C_AXI_ARLEN;
wire [3:0]C_AXI_AWID,C_AXI_BID,C_AXI_ARID,C_AXI_RID;
wire [2:0]C_AXI_AWSIZE,C_AXI_ARSIZE;
wire [1:0]C_AXI_AWBURST,C_AXI_ARBURST;
wire [1:0]C_AXI_BRESP,C_AXI_RRESP;
wire C_AXI_AWVALID,C_AXI_AWREADY,C_AXI_WVALID,C_AXI_WREADY,C_AXI_BVALID,C_AXI_BREADY,C_AXI_ARVALID,C_AXI_ARREADY,C_AXI_RVALID,C_AXI_RREADY,C_AXI_WLAST,C_AXI_RLAST;
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
		IFU_AXI_AWREADY,IFU_AXI_AWVALID,IFU_AXI_AWID,IFU_AXI_AWADDR,
		IFU_AXI_AWLEN,IFU_AXI_AWSIZE,IFU_AXI_AWBURST,
		IFU_AXI_WREADY,IFU_AXI_WVALID,IFU_AXI_WDATA,IFU_AXI_WSTRB,IFU_AXI_WLAST,
		IFU_AXI_BREADY,IFU_AXI_BVALID,IFU_AXI_BID,IFU_AXI_BRESP,
		IFU_AXI_ARREADY,IFU_AXI_ARVALID,IFU_AXI_ARID,IFU_AXI_ARADDR,
		IFU_AXI_ARLEN,IFU_AXI_ARSIZE,IFU_AXI_ARBURST,
		IFU_AXI_RREADY,IFU_AXI_RVALID,IFU_AXI_RID,IFU_AXI_RDATA,IFU_AXI_RRESP,IFU_AXI_RLAST
);
ysyx_24110017_IDU IDU(clock,reset,
		inst,if_valid,id_ready,id_valid,ex_ready,
		op,rd,funct3,rs1,rs2,imm,funct7,shamt
);
ysyx_24110017_EXU EXU(clock,reset,res,
		id_valid,ex_ready,ex_valid,wb_ready, //分布式控制
		op,funct3,imm,funct7,shamt,r1,r2,
		sram_lsu_read,sram_lsu_write,ls_done,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,ls_awsize,ls_arsize,ls_awlen,ls_arlen,ls_awburst,ls_arburst,
		ls_rdata,
		pc,dnpc,
		mepc,mstatus,mcause,mtvec,o_mepc,o_mstatus,o_mcause,o_mtvec,
		gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen
);
ysyx_24110017_LSU LSU(clock,reset,sram_lsu_read,sram_lsu_write,ls_done,
		ls_rdata,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,ls_awsize,ls_arsize,ls_awlen,ls_arlen,ls_awburst,ls_arburst,
		LSU_AXI_AWREADY,LSU_AXI_AWVALID,LSU_AXI_AWID,LSU_AXI_AWADDR,
		LSU_AXI_AWLEN,LSU_AXI_AWSIZE,LSU_AXI_AWBURST,
		LSU_AXI_WREADY,LSU_AXI_WVALID,LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WLAST,
		LSU_AXI_BREADY,LSU_AXI_BVALID,LSU_AXI_BID,LSU_AXI_BRESP,
		LSU_AXI_ARREADY,LSU_AXI_ARVALID,LSU_AXI_ARID,LSU_AXI_ARADDR,
		LSU_AXI_ARLEN,LSU_AXI_ARSIZE,LSU_AXI_ARBURST,
		LSU_AXI_RREADY,LSU_AXI_RVALID,LSU_AXI_RID,LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RLAST
);
ysyx_24110017_Xbar Xbar_ysyx_24110017(clock,reset,
		IFU_AXI_AWREADY,IFU_AXI_AWVALID,IFU_AXI_AWID,IFU_AXI_AWADDR,
		IFU_AXI_AWLEN,IFU_AXI_AWSIZE,IFU_AXI_AWBURST,
		IFU_AXI_WREADY,IFU_AXI_WVALID,IFU_AXI_WDATA,IFU_AXI_WSTRB,IFU_AXI_WLAST,
		IFU_AXI_BREADY,IFU_AXI_BVALID,IFU_AXI_BID,IFU_AXI_BRESP,
		IFU_AXI_ARREADY,IFU_AXI_ARVALID,IFU_AXI_ARID,IFU_AXI_ARADDR,
		IFU_AXI_ARLEN,IFU_AXI_ARSIZE,IFU_AXI_ARBURST,
		IFU_AXI_RREADY,IFU_AXI_RVALID,IFU_AXI_RID,IFU_AXI_RDATA,IFU_AXI_RRESP,IFU_AXI_RLAST,
		LSU_AXI_AWREADY,LSU_AXI_AWVALID,LSU_AXI_AWID,LSU_AXI_AWADDR,
		LSU_AXI_AWLEN,LSU_AXI_AWSIZE,LSU_AXI_AWBURST,
		LSU_AXI_WREADY,LSU_AXI_WVALID,LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WLAST,
		LSU_AXI_BREADY,LSU_AXI_BVALID,LSU_AXI_BID,LSU_AXI_BRESP,
		LSU_AXI_ARREADY,LSU_AXI_ARVALID,LSU_AXI_ARID,LSU_AXI_ARADDR,
		LSU_AXI_ARLEN,LSU_AXI_ARSIZE,LSU_AXI_ARBURST,
		LSU_AXI_RREADY,LSU_AXI_RVALID,LSU_AXI_RID,LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RLAST,
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
		C_AXI_AWREADY,C_AXI_AWVALID,C_AXI_AWID,C_AXI_AWADDR,
		C_AXI_AWLEN,C_AXI_AWSIZE,C_AXI_AWBURST,
		C_AXI_WREADY,C_AXI_WVALID,C_AXI_WDATA,C_AXI_WSTRB,C_AXI_WLAST,
		C_AXI_BREADY,C_AXI_BVALID,C_AXI_BID,C_AXI_BRESP,
		C_AXI_ARREADY,C_AXI_ARVALID,C_AXI_ARID,C_AXI_ARADDR,
		C_AXI_ARLEN,C_AXI_ARSIZE,C_AXI_ARBURST,
		C_AXI_RREADY,C_AXI_RVALID,C_AXI_RID,C_AXI_RDATA,C_AXI_RRESP,C_AXI_RLAST,
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
ysyx_24110017_CLINT ysyx_24110017_CLINT(clock,reset,
		C_AXI_AWREADY,C_AXI_AWVALID,C_AXI_AWID,C_AXI_AWADDR,
		C_AXI_AWLEN,C_AXI_AWSIZE,C_AXI_AWBURST,
		C_AXI_WREADY,C_AXI_WVALID,C_AXI_WDATA,C_AXI_WSTRB,C_AXI_WLAST,
		C_AXI_BREADY,C_AXI_BVALID,C_AXI_BID,C_AXI_BRESP,
		C_AXI_ARREADY,C_AXI_ARVALID,C_AXI_ARID,C_AXI_ARADDR,
		C_AXI_ARLEN,C_AXI_ARSIZE,C_AXI_ARBURST,
		C_AXI_RREADY,C_AXI_RVALID,C_AXI_RID,C_AXI_RDATA,C_AXI_RRESP,C_AXI_RLAST
);
ysyx_24110017_WBU WBU(clock,reset,
		ex_valid,wb_ready,wb_done,difftest,
		xrd,res,
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


endmodule
