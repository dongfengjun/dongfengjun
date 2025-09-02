//`define YOSYS_STA
module ysyx_24110017(
	input	 wire clock,
	input	 wire reset,
	input	 wire io_interrupt,
	input	 wire io_master_awready,
	output wire io_master_awvalid,
	output wire [ 3:0] io_master_awid,
	output wire [31:0] io_master_awaddr,
	output wire [ 7:0] io_master_awlen,
	output wire [ 2:0] io_master_awsize,
	output wire [ 1:0] io_master_awburst,
	input  wire io_master_wready,
	output wire io_master_wvalid,
	output wire [31:0] io_master_wdata,
	output wire [ 3:0] io_master_wstrb,
	output wire io_master_wlast,
	output wire io_master_bready,
	input  wire io_master_bvalid,
	input  wire [ 3:0] io_master_bid,
	input  wire [ 1:0] io_master_bresp,
	input  wire io_master_arready,
	output wire io_master_arvalid,
	output wire [ 3:0] io_master_arid,
	output wire [31:0] io_master_araddr,
	output wire [ 7:0] io_master_arlen,
	output wire [ 2:0] io_master_arsize,
	output wire [ 1:0] io_master_arburst,
	output wire io_master_rready,
	input  wire io_master_rvalid,
	input  wire [ 3:0] io_master_rid,
	input  wire [31:0] io_master_rdata,
	input  wire [ 1:0] io_master_rresp,
	input  wire io_master_rlast,
	output wire io_slave_awready,
	input  wire io_slave_awvalid,
	input  wire [ 3:0] io_slave_awid,
	input  wire [31:0] io_slave_awaddr,
	input  wire [ 7:0] io_slave_awlen,
	input  wire [ 2:0] io_slave_awsize,
	input  wire [ 1:0] io_slave_awburst,
	output wire io_slave_wready,
	input  wire io_slave_wvalid,
	input  wire [31:0] io_slave_wdata,
	input  wire [ 3:0] io_slave_wstrb,
	input  wire io_slave_wlast,
	input  wire io_slave_bready,
	output wire io_slave_bvalid,
	output wire [ 3:0] io_slave_bid,
	output wire [ 1:0] io_slave_bresp,
	output wire io_slave_arready,
	input  wire io_slave_arvalid,
	input  wire [ 3:0] io_slave_arid,
	input  wire [31:0] io_slave_araddr,
	input  wire [ 7:0] io_slave_arlen,
	input  wire [ 2:0] io_slave_arsize,
	input  wire [ 1:0] io_slave_arburst,
	input  wire io_slave_rready,
	output wire io_slave_rvalid,
	output wire [ 3:0] io_slave_rid,
	output wire [31:0] io_slave_rdata,
	output wire [ 1:0] io_slave_rresp,
	output wire io_slave_rlast
);

/***PCU***/
wire [31:0] pc;
wire pc_valid;
/***BTB***/
wire [31:0]snpc;
/***IFU***/
wire [31:0] inst_if,pc_if;
wire if_valid,if_ready;
wire [31:0] if_axi_araddr,if_axi_rdata;
wire [ 7:0] if_axi_arlen;
wire [ 3:0] if_axi_arid,if_axi_rid;
wire [ 2:0] if_axi_arsize;
wire [ 1:0] if_axi_arburst;
wire [ 1:0] if_axi_rresp;
wire if_axi_arvalid,if_axi_arready,if_axi_rvalid,if_axi_rready,if_axi_rlast;
/***ICACHE***/
wire [31:0] icache_axi_araddr,icache_axi_rdata;
wire [ 7:0] icache_axi_arlen;
wire [ 3:0] icache_axi_arid,icache_axi_rid;
wire [ 2:0] icache_axi_arsize;
wire [ 1:0] icache_axi_arburst;
wire [ 1:0] icache_axi_rresp;
wire icache_axi_arvalid,icache_axi_arready,icache_axi_rvalid,icache_axi_rready,icache_axi_rlast;
/***IDU***/
`ifndef YOSYS_STA
wire [31:0]inst_id;//difftest
`endif
wire id_valid,id_ready;
wire [20:0] prepc;
wire [ 1:0] prepc_en;
wire [31:0] pc_id,imm_id;
wire [ 4:0] op_id;
wire [ 2:0] funct3_id;
wire [ 3:0] rs1_id,rs2_id;
wire [ 3:0] rd_id;
wire gpr_wen_id;
wire ls_valid_id;
wire fencei_id;
/***EXU***/
`ifndef YOSYS_STA
wire [31:0] pc_ex,inst_ex,npc_ex;//difftest
`endif
wire        ex_ready,ex_valid;
wire [31:0] xrd_ex;
wire [ 3:0] rd_ex;
wire        gpr_wen_ex;
wire [31:0] mcause_ex,csrsw_ex;
wire [3:0]  csrs_wen_ex;
wire [31:0] ls_addr,ls_wdata;
wire [31:0] dnpc_ex;
/***LSU***/
wire [31:0] ls_rdata;
wire        ls_done;
wire [31:0] ls_axi_awaddr,ls_axi_wdata,ls_axi_araddr,ls_axi_rdata;
wire [ 3:0] ls_axi_wstrb;
wire [ 7:0] ls_axi_awlen,ls_axi_arlen;
wire [ 3:0] ls_axi_awid,ls_axi_bid,ls_axi_arid,ls_axi_rid;
wire [ 2:0] ls_axi_awsize,ls_axi_arsize;
wire [ 1:0] ls_axi_awburst,ls_axi_arburst;
wire [ 1:0] ls_axi_bresp,ls_axi_rresp;
wire        ls_axi_awvalid,ls_axi_awready,ls_axi_wvalid,ls_axi_wready,
            ls_axi_bvalid,ls_axi_bready,ls_axi_arvalid,ls_axi_arready,
						ls_axi_rvalid,ls_axi_rready,ls_axi_wlast,ls_axi_rlast;
/***Arbiter-Xbar***/
/***My-Clint***/
wire [31:0] c_axi_awaddr,c_axi_wdata,c_axi_araddr,c_axi_rdata;
wire [ 3:0] c_axi_wstrb;
wire [ 7:0] c_axi_awlen,c_axi_arlen;
wire [ 3:0] c_axi_awid,c_axi_bid,c_axi_arid,c_axi_rid;
wire [ 2:0] c_axi_awsize,c_axi_arsize;
wire [ 1:0] c_axi_awburst,c_axi_arburst;
wire [ 1:0] c_axi_bresp,c_axi_rresp;
wire c_axi_awvalid,c_axi_awready,c_axi_wvalid,c_axi_wready,c_axi_bvalid,c_axi_bready,c_axi_arvalid,c_axi_arready,c_axi_rvalid,c_axi_rready,c_axi_wlast,c_axi_rlast;
/***RFU***/
wire [31:0]r1,r2;
wire [31:0]mepc,mstatus,mcause,mtvec;
wire [31:0]mvendorid,marchid; //ID

ysyx_24110017_PCU PCU(clock,reset,isCHazard,
		pc,dnpc_ex,snpc,
		pc_valid,if_ready
);
ysyx_24110017_BTB #(2,0) BTB(clock,reset,pc,snpc,prepc,pc_if,prepc_en);
ysyx_24110017_IFU IFU(clock,reset,isCHazard,
		pc_valid,if_ready,if_valid,id_ready,
		pc,pc_if,inst_if,
		if_axi_arready,if_axi_arvalid,if_axi_arid,if_axi_araddr,
		if_axi_arlen,if_axi_arsize,if_axi_arburst,
		if_axi_rready,if_axi_rvalid,if_axi_rid,if_axi_rdata,if_axi_rresp,if_axi_rlast
);
ysyx_24110017_CACHE #(2,4,1) ICACHE(clock,reset,fencei_id, //w < n
		if_axi_arready,if_axi_arvalid,if_axi_arid,if_axi_araddr,
		if_axi_arlen,if_axi_arsize,if_axi_arburst,
		if_axi_rready,if_axi_rvalid,if_axi_rid,if_axi_rdata,if_axi_rresp,if_axi_rlast,
    icache_axi_arready,icache_axi_arvalid,icache_axi_arid,icache_axi_araddr,
    icache_axi_arlen,icache_axi_arsize,icache_axi_arburst,
    icache_axi_rready,icache_axi_rvalid,icache_axi_rid,icache_axi_rdata,icache_axi_rresp,icache_axi_rlast
);
ysyx_24110017_IDU IDU(clock,reset,isRAW,isCHazard,
`ifndef YOSYS_STA
		inst_id,
`endif
		prepc,prepc_en,
		if_valid,id_ready,id_valid,ex_ready,
		pc_if,inst_if,
		pc_id,imm_id,op_id,funct3_id,rs1_id,rs2_id,
		rd_id,gpr_wen_id,ls_valid_id,
		fencei_id
);
ysyx_24110017_EXU EXU(clock,reset,isCHazard,
`ifndef YOSYS_STA
		inst_id,pc_ex,inst_ex,npc_ex,
`endif
		id_valid,ex_ready,ex_valid,
		pc_id,imm_id,op_id,funct3_id,
		r1,r2,rd_id,gpr_wen_id,
		mepc,mstatus,mcause,mtvec,
		xrd_ex,rd_ex,gpr_wen_ex,
		mcause_ex,csrsw_ex,csrs_wen_ex,
		ls_addr,ls_wdata,ls_rdata,ls_done,
		dnpc_ex
);
ysyx_24110017_LSU LSU(clock,reset,
		op_id,funct3_id,ls_valid_id && (!isCHazard),
		ls_addr,ls_wdata,ls_rdata,ls_done,
		ls_axi_awready,ls_axi_awvalid,ls_axi_awid,ls_axi_awaddr,
		ls_axi_awlen,ls_axi_awsize,ls_axi_awburst,
		ls_axi_wready,ls_axi_wvalid,ls_axi_wdata,ls_axi_wstrb,ls_axi_wlast,
		ls_axi_bready,ls_axi_bvalid,ls_axi_bid,ls_axi_bresp,
		ls_axi_arready,ls_axi_arvalid,ls_axi_arid,ls_axi_araddr,
		ls_axi_arlen,ls_axi_arsize,ls_axi_arburst,
		ls_axi_rready,ls_axi_rvalid,ls_axi_rid,ls_axi_rdata,ls_axi_rresp,ls_axi_rlast
);
ysyx_24110017_Xbar Xbar(clock,reset,
    icache_axi_arready,icache_axi_arvalid,icache_axi_arid,icache_axi_araddr,
    icache_axi_arlen,icache_axi_arsize,icache_axi_arburst,
    icache_axi_rready,icache_axi_rvalid,icache_axi_rid,icache_axi_rdata,icache_axi_rresp,icache_axi_rlast,
		ls_axi_awready,ls_axi_awvalid,ls_axi_awid,ls_axi_awaddr,
		ls_axi_awlen,ls_axi_awsize,ls_axi_awburst,
		ls_axi_wready,ls_axi_wvalid,ls_axi_wdata,ls_axi_wstrb,ls_axi_wlast,
		ls_axi_bready,ls_axi_bvalid,ls_axi_bid,ls_axi_bresp,
		ls_axi_arready,ls_axi_arvalid,ls_axi_arid,ls_axi_araddr,
		ls_axi_arlen,ls_axi_arsize,ls_axi_arburst,
		ls_axi_rready,ls_axi_rvalid,ls_axi_rid,ls_axi_rdata,ls_axi_rresp,ls_axi_rlast,
		io_master_awready,io_master_awvalid,io_master_awid,io_master_awaddr,
		io_master_awlen,io_master_awsize,io_master_awburst,
		io_master_wready,io_master_wvalid,io_master_wdata,io_master_wstrb,io_master_wlast,
		io_master_bready,io_master_bvalid,io_master_bid,io_master_bresp,
		io_master_arready,io_master_arvalid,io_master_arid,io_master_araddr,
		io_master_arlen,io_master_arsize,io_master_arburst,
		io_master_rready,io_master_rvalid,io_master_rid,io_master_rdata,io_master_rresp,io_master_rlast,
		c_axi_arready,c_axi_arvalid,c_axi_arid,c_axi_araddr,
		c_axi_arlen,c_axi_arsize,c_axi_arburst,
		c_axi_rready,c_axi_rvalid,c_axi_rid,c_axi_rdata,c_axi_rresp,c_axi_rlast,
		mvendorid,marchid
);
/***My-Clint***/
ysyx_24110017_CLINT CLINT(clock,reset,
		c_axi_arready,c_axi_arvalid,c_axi_arid,c_axi_araddr,
		c_axi_arlen,c_axi_arsize,c_axi_arburst,
		c_axi_rready,c_axi_rvalid,c_axi_rid,c_axi_rdata,c_axi_rresp,c_axi_rlast
);

ysyx_24110017_RegisterFile #(4,32) RFU (clock,xrd_ex,rd_ex,gpr_wen_ex,rs1_id,r1,rs2_id,r2);
ysyx_24110017_Reg #(32, 32'b0) mepc_reg (clock,reset,csrsw_ex,mepc,csrs_wen_ex[0]);
ysyx_24110017_Reg #(32, 32'h1800) mstatus_reg (clock,reset,csrsw_ex,mstatus,csrs_wen_ex[1]);
ysyx_24110017_Reg #(32, 32'b0) mcause_reg (clock,reset,mcause_ex,mcause,csrs_wen_ex[2]);
ysyx_24110017_Reg #(32, 32'b0) mtvec_reg (clock,reset,csrsw_ex,mtvec,csrs_wen_ex[3]);
ysyx_24110017_Reg #(32, 32'h79737978) mvendorid_reg (clock,reset,32'b0,mvendorid,1'b0);
ysyx_24110017_Reg #(32, 32'h016fe3c1) marchid_reg (clock,reset,32'b0,marchid,1'b0);

wire isRAW = 1'b0;//((rs1_id != 0) && (((!ls_ready) && (rs1_id == rd_ex)) || (rs1_id == rd_ls))) || 
						 //((rs2_id != 0) && (((!ls_ready) && (rs2_id == rd_ex)) || (rs2_id == rd_ls)));

reg CHazarden;
always @(posedge clock) begin
	if(id_valid && ex_ready) CHazarden <= 1'b1;
	else CHazarden <= 1'b0;
end
wire isCHazard = CHazarden && (dnpc_ex != pc_id) && (pc_id != 32'h0) && (dnpc_ex != 32'h0);

`ifndef YOSYS_STA
/***DIFFTEST***/
reg difftest_delay;
reg difftest;
always@(posedge clock) begin
	if(ex_valid && !isCHazard) difftest_delay <= 1'b1;
	else difftest_delay <= 1'b0;
	if(difftest_delay) difftest <= 1'b1;
	else difftest <= 1'b0;
end
/***DPIC*etrace***/
import "DPI-C" function void npc_trap();
always@(*) begin
  if(ex_valid && inst_if == 32'b00000000000100000000000001110011) begin
    npc_trap();
  end
end
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
		assign dpic_grab = (i == 0) ? pc_ex : (i == 1) ? npc_ex : (i == 2) ? inst_ex : (i == 3) ? {31'b0,difftest} : 32'b0;
  end
endfunction
/***E*N*D***/

/***DPI-C*PERFORMANCE_COUNTER***/
export "DPI-C" function performance_counter;
function int performance_counter(int i);
  begin
    assign performance_counter = (i == 0) ? {31'b0,if_valid && id_ready}
															 : (i == 1) ? {31'b0,id_valid && ex_ready}
															 : (i == 2) ? {31'b0,ex_valid}
															 : (i == 3) ? {31'b0,ls_axi_rvalid && ls_axi_rready}
															 : (i == 4) ? {25'b0,inst_if[6:0]}
															 : (i == 5) ? {31'b0,ex_valid}
															 : (i == 6) ? {31'b0,if_axi_arvalid && if_axi_arready}
															 : (i == 7) ? {31'b0,if_axi_rvalid && if_axi_rready}
															 : (i == 8) ? {31'b0,if_ready}
															 : (i == 9) ? {31'b0,ls_axi_awvalid && ls_axi_awready}
															 : (i == 10) ? {31'b0,ls_axi_arvalid && ls_axi_arready}
															 : (i == 11) ? {31'b0,ls_axi_bvalid && ls_axi_bready}
															 : (i == 12) ? {31'b0,isCHazard}
															 : (i == 13) ? {31'b0,if_valid}
															 : (i == 14) ? {25'b0,inst_ex[6:0]}
															 : (i == 15) ? {31'b0,(ex_valid && inst_ex[6:0] == 7'b1100011) && isCHazard}
															 : (i == 16) ? {31'b0,(ex_valid && inst_ex[6:0] == 7'b1101111) && isCHazard}
															 : (i == 17) ? {31'b0,(ex_valid && inst_ex[6:0] == 7'b1100111) && isCHazard}
															 : 32'b0;
  end
endfunction
/***E*N*D***/
`endif


endmodule
