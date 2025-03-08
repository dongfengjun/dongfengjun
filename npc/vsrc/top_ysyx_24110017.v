module top_ysyx_24110017(clk,rst,pc,dnpc,inst,DIFFTEST);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;
output DIFFTEST;

wire DIFFTEST = 1'b0;
/***PCU***/
wire [31:0]pc;
wire [31:0]dnpc;
wire PCU_VALID,IFU_READY; //分布式控制
/***IFU***/
wire [31:0]inst;
wire IFU_VALID,IDU_READY; //分布式控制
wire [31:0] IFU_AXI_AWADDR,IFU_AXI_WDATA,IFU_AXI_ARADDR,IFU_AXI_RDATA;
wire [3:0] IFU_AXI_WSTRB;
wire [1:0] IFU_AXI_BRESP,IFU_AXI_RRESP;
wire IFU_AXI_AWVALID,IFU_AXI_AWREADY,IFU_AXI_WVALID,IFU_AXI_WREADY,IFU_AXI_BVALID,IFU_AXI_BREADY,IFU_AXI_ARVALID,IFU_AXI_ARREADY,IFU_AXI_RVALID,IFU_AXI_RREADY;
/***IDU***/
wire IDU_VALID,EXU_READY; //分布式控制
wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt; //I shamt
/***EXU***/
wire EXU_VALID,WBU_READY;
wire [31:0]res;
wire ls_valid,ls_wen;
wire [31:0]ls_waddr,ls_wdata,ls_raddr;
wire lbdone,lhdone,lwdone,lbudone,lhudone;
wire [7:0]ls_wmask;
wire [31:0]mepc,o_mepc,mstatus,o_mstatus,mcause,o_mcause,mtvec,o_mtvec;
wire gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;
/***LSU***/
wire [31:0]ls_rdata; //LSU_AXI4-LITE
wire l_wen;
wire [4:0]l_rd;
wire lb_w,lh_w,lw_w,lbu_w,lhu_w;
wire [31:0] LSU_AXI_AWADDR,LSU_AXI_WDATA,LSU_AXI_ARADDR,LSU_AXI_RDATA;
wire [7:0] LSU_AXI_WSTRB;
wire [1:0] LSU_AXI_BRESP,LSU_AXI_RRESP;
wire LSU_AXI_AWVALID,LSU_AXI_AWREADY,LSU_AXI_WVALID,LSU_AXI_WREADY,LSU_AXI_BVALID,LSU_AXI_BREADY,LSU_AXI_ARVALID,LSU_AXI_ARREADY,LSU_AXI_RVALID,LSU_AXI_RREADY;
/***WBU***/
wire EXU_VALID,WBU_READY;
wire [31:0]xrd;
wire [4:0]rf_addr;
wire rf_wen;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;
/***RFU***/
wire [31:0]r1,r2;


PCU_ysyx_24110017 PCU(clk,rst,
		pc,dnpc,
		PCU_VALID,
		IFU_READY
);
IFU_ysyx_24110017 IFU(clk,rst,
				pc,inst,PCU_VALID,IFU_READY,IFU_VALID,IDU_READY,
        IFU_AXI_AWADDR,IFU_AXI_AWVALID,IFU_AXI_AWREADY,
        IFU_AXI_WDATA,IFU_AXI_WSTRB,IFU_AXI_WVALID,IFU_AXI_WREADY,
        IFU_AXI_BRESP,IFU_AXI_BVALID,IFU_AXI_BREADY,
        IFU_AXI_ARADDR,IFU_AXI_ARVALID,IFU_AXI_ARREADY,
        IFU_AXI_RDATA,IFU_AXI_RRESP,IFU_AXI_RVALID,IFU_AXI_RREADY
);
SRAM_IFU_ysyx_24110017 SRAM_IFU_ysyx_24110017(clk,rst,
        IFU_AXI_AWADDR,IFU_AXI_AWVALID,IFU_AXI_AWREADY,
        IFU_AXI_WDATA,IFU_AXI_WSTRB,IFU_AXI_WVALID,IFU_AXI_WREADY,
        IFU_AXI_BRESP,IFU_AXI_BVALID,IFU_AXI_BREADY,
        IFU_AXI_ARADDR,IFU_AXI_ARVALID,IFU_AXI_ARREADY,
        IFU_AXI_RDATA,IFU_AXI_RRESP,IFU_AXI_RVALID,IFU_AXI_RREADY
);
IDU_ysyx_24110017 IDU(clk,rst,
		inst,IFU_VALID,IDU_READY,IDU_VALID,EXU_READY,
		op,rd,funct3,rs1,rs2,imm,funct7,shamt
);
EXU_ysyx_24110017 EXU(clk,rst,
		IDU_VALID,EXU_READY,EXU_VALID,WBU_READY, //分布式控制
		op,funct3,imm,funct7,shamt,r1,r2,
		res,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,
		lbdone,lhdone,lwdone,lbudone,lhudone,
		pc,dnpc,
		mepc,mstatus,mcause,mtvec,o_mepc,o_mstatus,o_mcause,o_mtvec,
		gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen
);
LSU_ysyx_24110017 LSU(clk,rst,
		ls_rdata,
		l_rd,rd,l_wen,lbdone,lhdone,lwdone,lbudone,lhudone,
		lb_w,lh_w,lw_w,lbu_w,lhu_w,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,

		LSU_AXI_AWADDR,LSU_AXI_AWVALID,LSU_AXI_AWREADY,
    LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WVALID,LSU_AXI_WREADY,
    LSU_AXI_BRESP,LSU_AXI_BVALID,LSU_AXI_BREADY,
    LSU_AXI_ARADDR,LSU_AXI_ARVALID,LSU_AXI_ARREADY,
    LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RVALID,LSU_AXI_RREADY
);
SRAM_LSU_ysyx_24110017 SRAM_LSU_ysyx_24110017(clk,rst,
    LSU_AXI_AWADDR,LSU_AXI_AWVALID,LSU_AXI_AWREADY,
    LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WVALID,LSU_AXI_WREADY,
    LSU_AXI_BRESP,LSU_AXI_BVALID,LSU_AXI_BREADY,
    LSU_AXI_ARADDR,LSU_AXI_ARVALID,LSU_AXI_ARREADY,
    LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RVALID,LSU_AXI_RREADY
);
WBU_ysyx_24110017 WBU(clk,rst,
		EXU_VALID,WBU_READY,
		xrd,res,ls_rdata,
		lb_w,lh_w,lw_w,lbu_w,lhu_w,
		rf_addr,rd,l_rd,
		rf_wen,gpr_wen,l_wen,
		o_mepc,o_mstatus,o_mcause,o_mtvec,w_mepc,w_mstatus,w_mcause,w_mtvec
);
RegisterFile_ysyx_24110017 #(5,32) RFU (clk,xrd,rf_addr,rf_wen,rs1,r1,rs2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk,rst,w_mepc,mepc,mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk,rst,w_mstatus,mstatus,mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk,rst,w_mcause,mcause,mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk,rst,w_mtvec,mtvec,mtvec_wen);


/***DPI-C*CSR***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction
/***E*N*D***/


endmodule
