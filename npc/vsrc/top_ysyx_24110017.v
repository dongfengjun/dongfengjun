module top_ysyx_24110017(clk,rst,pc,dnpc,inst,DIFFTEST);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;
output DIFFTEST;

wire DIFFTEST = difftest;
/***PCU***/
wire [31:0]pc;
wire [31:0]dnpc;
wire PCU_VALID,IFU_READY; //分布式控制
/***IFU***/
wire [31:0]inst;
wire IFU_VALID,IDU_READY; //分布式控制
wire [31:0] IFU_AXI_AWADDR,IFU_AXI_WDATA,IFU_AXI_ARADDR,IFU_AXI_RDATA;
wire [7:0] IFU_AXI_WSTRB;
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
wire sram_lsu_read,sram_lsu_write,LSU_DONE,EXU_VALID,WBU_READY;
wire [31:0]res;
wire ls_valid,ls_wen;
wire [31:0]ls_waddr,ls_wdata,ls_raddr;
wire [7:0]ls_wmask;
wire [31:0]mepc,o_mepc,mstatus,o_mstatus,mcause,o_mcause,mtvec,o_mtvec;
wire gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;
/***LSU***/
wire [31:0]ls_rdata; //LSU_AXI4-LITE
wire [31:0] LSU_AXI_AWADDR,LSU_AXI_WDATA,LSU_AXI_ARADDR,LSU_AXI_RDATA;
wire [7:0] LSU_AXI_WSTRB;
wire [1:0] LSU_AXI_BRESP,LSU_AXI_RRESP;
wire LSU_AXI_AWVALID,LSU_AXI_AWREADY,LSU_AXI_WVALID,LSU_AXI_WREADY,LSU_AXI_BVALID,LSU_AXI_BREADY,LSU_AXI_ARVALID,LSU_AXI_ARREADY,LSU_AXI_RVALID,LSU_AXI_RREADY;
/***Arbiter-Xbar***/
wire [31:0] S_AXI_AWADDR,S_AXI_WDATA,S_AXI_ARADDR,S_AXI_RDATA;
wire [7:0] S_AXI_WSTRB;
wire [1:0] S_AXI_BRESP,S_AXI_RRESP;
wire S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WVALID,S_AXI_WREADY,S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RVALID,S_AXI_RREADY;

wire [31:0] U_AXI_AWADDR,U_AXI_WDATA,U_AXI_ARADDR,U_AXI_RDATA;
wire [7:0] U_AXI_WSTRB;
wire [1:0] U_AXI_BRESP,U_AXI_RRESP;
wire U_AXI_AWVALID,U_AXI_AWREADY,U_AXI_WVALID,U_AXI_WREADY,U_AXI_BVALID,U_AXI_BREADY,U_AXI_ARVALID,U_AXI_ARREADY,U_AXI_RVALID,U_AXI_RREADY;

wire [31:0] C_AXI_AWADDR,C_AXI_WDATA,C_AXI_ARADDR,C_AXI_RDATA;
wire [7:0] C_AXI_WSTRB;
wire [1:0] C_AXI_BRESP,C_AXI_RRESP;
wire C_AXI_AWVALID,C_AXI_AWREADY,C_AXI_WVALID,C_AXI_WREADY,C_AXI_BVALID,C_AXI_BREADY,C_AXI_ARVALID,C_AXI_ARREADY,C_AXI_RVALID,C_AXI_RREADY;
/***WBU***/
wire EXU_VALID,WBU_READY,wbu_done,difftest;
wire [31:0]xrd;
wire [4:0]rf_addr;
wire rf_wen;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;
wire mepc_en,mstatus_en,mcause_en,mtvec_en;
/***RFU***/
wire [31:0]r1,r2;


PCU_ysyx_24110017 PCU(clk,rst,
		pc,dnpc,
		PCU_VALID,
		IFU_READY
);
IFU_ysyx_24110017 IFU(clk,rst,
				pc,inst,PCU_VALID,IFU_READY,IFU_VALID,IDU_READY,wbu_done,
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
EXU_ysyx_24110017 EXU(clk,rst,sram_lsu_read,sram_lsu_write,LSU_DONE,
		IDU_VALID,EXU_READY,EXU_VALID,WBU_READY, //分布式控制
		op,funct3,imm,funct7,shamt,r1,r2,
		res,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,
		ls_rdata,
		pc,dnpc,
		mepc,mstatus,mcause,mtvec,o_mepc,o_mstatus,o_mcause,o_mtvec,
		gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen
);
LSU_ysyx_24110017 LSU(clk,rst,sram_lsu_read,sram_lsu_write,LSU_DONE,
		ls_rdata,
		ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,

		LSU_AXI_AWADDR,LSU_AXI_AWVALID,LSU_AXI_AWREADY,
    LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WVALID,LSU_AXI_WREADY,
    LSU_AXI_BRESP,LSU_AXI_BVALID,LSU_AXI_BREADY,
    LSU_AXI_ARADDR,LSU_AXI_ARVALID,LSU_AXI_ARREADY,
    LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RVALID,LSU_AXI_RREADY
);
Xbar_ysyx_24110017 Xbar_ysyx_24110017(clk,rst,
		IFU_AXI_AWADDR,IFU_AXI_AWVALID,IFU_AXI_AWREADY,
		IFU_AXI_WDATA,IFU_AXI_WSTRB,IFU_AXI_WVALID,IFU_AXI_WREADY,
		IFU_AXI_BRESP,IFU_AXI_BVALID,IFU_AXI_BREADY,
		IFU_AXI_ARADDR,IFU_AXI_ARVALID,IFU_AXI_ARREADY,
		IFU_AXI_RDATA,IFU_AXI_RRESP,IFU_AXI_RVALID,IFU_AXI_RREADY,
		LSU_AXI_AWADDR,LSU_AXI_AWVALID,LSU_AXI_AWREADY,
    LSU_AXI_WDATA,LSU_AXI_WSTRB,LSU_AXI_WVALID,LSU_AXI_WREADY,
    LSU_AXI_BRESP,LSU_AXI_BVALID,LSU_AXI_BREADY,
    LSU_AXI_ARADDR,LSU_AXI_ARVALID,LSU_AXI_ARREADY,
    LSU_AXI_RDATA,LSU_AXI_RRESP,LSU_AXI_RVALID,LSU_AXI_RREADY,
		S_AXI_AWADDR,S_AXI_AWVALID,S_AXI_AWREADY,
    S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WVALID,S_AXI_WREADY,
    S_AXI_BRESP,S_AXI_BVALID,S_AXI_BREADY,
    S_AXI_ARADDR,S_AXI_ARVALID,S_AXI_ARREADY,
    S_AXI_RDATA,S_AXI_RRESP,S_AXI_RVALID,S_AXI_RREADY,
		U_AXI_AWADDR,U_AXI_AWVALID,U_AXI_AWREADY,
    U_AXI_WDATA,U_AXI_WSTRB,U_AXI_WVALID,U_AXI_WREADY,
    U_AXI_BRESP,U_AXI_BVALID,U_AXI_BREADY,
    U_AXI_ARADDR,U_AXI_ARVALID,U_AXI_ARREADY,
    U_AXI_RDATA,U_AXI_RRESP,U_AXI_RVALID,U_AXI_RREADY
);
SRAM_ysyx_24110017 SRAM_ysyx_24110017(clk,rst,
    S_AXI_AWADDR,S_AXI_AWVALID,S_AXI_AWREADY,
    S_AXI_WDATA,S_AXI_WSTRB,S_AXI_WVALID,S_AXI_WREADY,
    S_AXI_BRESP,S_AXI_BVALID,S_AXI_BREADY,
    S_AXI_ARADDR,S_AXI_ARVALID,S_AXI_ARREADY,
    S_AXI_RDATA,S_AXI_RRESP,S_AXI_RVALID,S_AXI_RREADY
);
UART_ysyx_24110017 UART_ysyx_24110017(clk,rst,
    U_AXI_AWADDR,U_AXI_AWVALID,U_AXI_AWREADY,
    U_AXI_WDATA,U_AXI_WSTRB,U_AXI_WVALID,U_AXI_WREADY,
    U_AXI_BRESP,U_AXI_BVALID,U_AXI_BREADY,
    U_AXI_ARADDR,U_AXI_ARVALID,U_AXI_ARREADY,
    U_AXI_RDATA,U_AXI_RRESP,U_AXI_RVALID,U_AXI_RREADY
);
CLINT_ysyx_24110017 CLINT_ysyx_24110017(clk,rst,
    C_AXI_AWADDR,C_AXI_AWVALID,C_AXI_AWREADY,
    C_AXI_WDATA,C_AXI_WSTRB,C_AXI_WVALID,C_AXI_WREADY,
    C_AXI_BRESP,C_AXI_BVALID,C_AXI_BREADY,
    C_AXI_ARADDR,C_AXI_ARVALID,C_AXI_ARREADY,
    C_AXI_RDATA,C_AXI_RRESP,C_AXI_RVALID,C_AXI_RREADY
);
WBU_ysyx_24110017 WBU(clk,rst,
		EXU_VALID,WBU_READY,wbu_done,difftest,
		xrd,res,
		rf_addr,rd,
		rf_wen,gpr_wen,
		o_mepc,o_mstatus,o_mcause,o_mtvec,w_mepc,w_mstatus,w_mcause,w_mtvec,
		mepc_wen,mstatus_wen,mcause_wen,mtvec_wen,
		mepc_en,mstatus_en,mcause_en,mtvec_en
);
RegisterFile_ysyx_24110017 #(5,32) RFU (clk,xrd,rf_addr,rf_wen,rs1,r1,rs2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk,rst,w_mepc,mepc,mepc_en);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk,rst,w_mstatus,mstatus,mstatus_en);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk,rst,w_mcause,mcause,mcause_en);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk,rst,w_mtvec,mtvec,mtvec_en);


/***DPI-C*CSR***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction
/***E*N*D***/


endmodule
