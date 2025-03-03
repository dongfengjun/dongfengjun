module top_ysyx_24110017(clk,rst,pc,dnpc,inst,DIFFTEST);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;
output DIFFTEST;

wire [6:0]op;
wire [4:0]rd,lrd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
wire wr_en;
wire [31:0]inst;

wire [31:0]res;
wire ldone;
wire [31:0]r1,r2,a,b,xrd;
wire [31:0]csrs, csrs_in, mepc_in, mepc, mstatus, mcause_in, mcause, mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;

wire IFU_DONE,DIFFTEST;//IFU_AXI4-LITE
wire [31:0] IFU_AXI_AWADDR,IFU_AXI_WDATA,IFU_AXI_ARADDR,IFU_AXI_RDATA;
wire [3:0] IFU_AXI_WSTRB;
wire [1:0] IFU_AXI_BRESP,IFU_AXI_RRESP;
wire IFU_AXI_AWVALID,IFU_AXI_AWREADY,IFU_AXI_WVALID,IFU_AXI_WREADY,IFU_AXI_BVALID,IFU_AXI_BREADY,IFU_AXI_ARVALID,IFU_AXI_ARREADY,IFU_AXI_RVALID,IFU_AXI_RREADY;

wire [31:0]rdata;//LSU_AXI4-LITE
wire lbdone,lhdone,lwdone,lbudone,lhudone;
wire [31:0] LSU_AXI_AWADDR,LSU_AXI_WDATA,LSU_AXI_ARADDR,LSU_AXI_RDATA;
wire [7:0] LSU_AXI_WSTRB;
wire [1:0] LSU_AXI_BRESP,LSU_AXI_RRESP;
wire LSU_AXI_AWVALID,LSU_AXI_AWREADY,LSU_AXI_WVALID,LSU_AXI_WREADY,LSU_AXI_BVALID,LSU_AXI_BREADY,LSU_AXI_ARVALID,LSU_AXI_ARREADY,LSU_AXI_RVALID,LSU_AXI_RREADY;

PCU_ysyx_24110017 PCU(clk,rst,
		pc,dnpc,
		IFU_DONE
);
IFU_ysyx_24110017 IFU(clk,rst,pc,inst,IFU_DONE,DIFFTEST,
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
IDU_ysyx_24110017 IDU(clk,rst,inst,
		op,rd,funct3,rs1,rs2,imm,funct7,shamt,
		wr_en,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen);
EXU_ysyx_24110017 EXU(clk,rst,
		op,funct3,imm,funct7,shamt,
		a,b,csrs,csrs_in,res,
		r1,r2,rdata,lbdone,lhdone,lwdone,lbudone,lhudone,
		pc,dnpc,mepc,mtvec
);
LSU_ysyx_24110017 LSU_ysyx_24110017(clk,rst,
		op,rd,imm,funct3,
		a,b,rdata,
		lrd,ldone,lbdone,lhdone,lwdone,lbudone,lhudone,
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
		op,imm,funct3,
		pc,r1,r2,res,
		a,b,xrd,ldone,
		mepc,mstatus,mcause,mtvec,csrs,csrs_in,mepc_in,mcause_in);

RegisterFile_ysyx_24110017 #(5,32) RF (clk,xrd,(rd | lrd),(wr_en || ldone),rs1,r1,rs2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk,rst,mepc_in,mepc,mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk,rst,csrs_in,mstatus,mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk,rst,mcause_in,mcause,mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk,rst,csrs_in,mtvec,mtvec_wen);


/***DPI-C*CSR***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction
/***E*N*D***/


endmodule
