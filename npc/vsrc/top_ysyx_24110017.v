module top_ysyx_24110017(clk,rst,pc,dnpc,inst);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;

wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
wire wr_en;
wire [31:0]pc,inst;

wire [31:0]res;
wire [4:0]raddr1,raddr2;
wire [31:0]r1,r2,a,b,xrd;
wire [31:0]csrs, csrs_in, mepc_in, mepc, mstatus, mcause_in, mcause, mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;

/***SCP***
PCU_ysyx_24110017 PCU(clk,rst,op,funct3,imm,r1,r2,mtvec,mepc,pc,dnpc);
IFU_ysyx_24110017 IFU(clk,rst,pc,inst);
IDU_ysyx_24110017 IDU(inst,op,rd,funct3,rs1,rs2,imm,funct7,shamt,wr_en);
RegisterFile_ysyx_24110017 #(5,32) RF (clk,xrd,rd,wr_en,raddr1,r1,raddr2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk, rst, mepc_in, mepc, mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk, rst, csrs_in, mstatus, mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk, rst, mcause_in, mcause, mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk, rst, csrs_in, mtvec, mtvec_wen);
EXU_ysyx_24110017 EXU(clk, rst, a, b, funct3, op, funct7, shamt, imm, r1, r2, csrs, csrs_in, res);
***SCP*END***/

/***MCA***/
wire [31 : 0] AXI_AWADDR,AXI_WDATA,AXI_ARADDR,AXI_RDATA;
wire [3 : 0] AXI_WSTRB;
wire [1 : 0] AXI_BRESP,AXI_RRESP;
wire INIT_AXI_TXN,ERROR,TXN_DONE,AXI_AWVALID,AXI_AWREADY,AXI_WVALID,AXI_WREADY,AXI_BVALID,AXI_BREADY,AXI_ARVALID,AXI_ARREADY,AXI_RVALID,AXI_RREADY;

PCU_ysyx_24110017 PCU(clk,rst,op,funct3,imm,r1,r2,mtvec,mepc,pc,dnpc,INIT_AXI_TXN,TXN_DONE);
IDU_ysyx_24110017 IDU(inst,op,rd,funct3,rs1,rs2,imm,funct7,shamt,wr_en);
RegisterFile_ysyx_24110017 #(5,32) RF (clk,xrd,rd,(wr_en&&TXN_DONE),raddr1,r1,raddr2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk, rst, mepc_in, mepc, mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk, rst, csrs_in, mstatus, mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk, rst, mcause_in, mcause, mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk, rst, csrs_in, mtvec, mtvec_wen);
EXU_ysyx_24110017 EXU(clk, rst, a, b, funct3, op, funct7, shamt, imm, r1, r2, csrs, csrs_in, res);
IFU_AXI4_ysyx_24110017 IFU_AXI4_ysyx_24110017(pc,inst,
        INIT_AXI_TXN,// Initiate AXI transactions
        ERROR,// Asserts when ERROR is detected
        TXN_DONE,// Asserts when AXI transactions is complete
        clk,// AXI clock signal
        rst,// AXI active high reset signal
        AXI_AWADDR,// 主发写地址
        //[2 : 0] M_AXI_AWPROT,// 主发写地址保护类型，该信号表示事务的特权和安全级别，该事务是数据访问还是指令访问。
        AXI_AWVALID,// 主发写地址valid，该信号表示主信令有效的写地址和控制信息。
        AXI_AWREADY,// 从发写地址ready，信号表明从机已经准备好接受一个地址和相关的控制信号。
        
        AXI_WDATA,// 主发写数据
        AXI_WSTRB,// 主发写Mask，信号指示哪些字节通道保存有效数据。
        AXI_WVALID,// 主发写数据valid.This signal indicates that valid write data and strobes are available.
        AXI_WREADY,// 从发写数据ready.This signal indicates that the slave can accept the write data.
        
        AXI_BRESP,// 从发写响应，信号表示写事务的状态。
        AXI_BVALID,// 从发写响应valid.信号表明从机正在发出一个有效的写响应信号 
        AXI_BREADY,// 主发写响应ready，信号表明主机可以接受写响应。
        
        AXI_ARADDR,// 主发读地址
        //[2 : 0] M_AXI_ARPROT,// 主发读地址保护类型，信号指示事务的特权和安全级别，以及该事务是数据访问还是指令访问。
        AXI_ARVALID,// 主发读地址valid，信号表示通道正在发送有效的读地址和控制信息。
        AXI_ARREADY,// 从发读地址ready，信号表明从机已经准备好接受一个地址和相关的控制信号。
        AXI_RDATA,// 从发读数据
        AXI_RRESP,// 从发读数据响应，信号表示读传输的状态。
        AXI_RVALID,// 从发读数据valid，信号表明通道正在发送所需的读取数据。
        AXI_RREADY// 主发读数据ready，信号表示主机可以接受读取的数据和响应信息。
);

SRAM_AXI4_ysyx_24110017 SRAM_AXI4_ysyx_24110017(clk,rst,
        AXI_AWADDR,// 主机写地址 (issued by master, acceped by Slave)
        //[2 : 0] S_AXI_AWPROT,// 主机写地址保护类型，指示事务的特权和安全级别，以及该事务是数据访问还是指令访问。
        AXI_AWVALID,// 主机写地址valid，表示主机有效的写地址和控制信息。
        AXI_AWREADY,// 从机写地址ready，表明从机已经准备好接受地址和相关的控制信号。
        
        AXI_WDATA,// 写数据(issued by master, acceped by Slave)
        AXI_WSTRB,// Write Mask
        AXI_WVALID,// 主机写数据valid，表明有效的写数据和mask可用。
        AXI_WREADY,// 从机写数据ready，表示从机可以接受写数据。
        
        AXI_BRESP,// 从机写数据响应，表示写事务的状态
        AXI_BVALID,// 从机写数据响应valid信号，表明从机正在发出有效写响应的信号。
        AXI_BREADY,// 主机写数据响应ready信号，表明主机可以接受写响应。

        AXI_ARADDR,// 主机读地址 (issued by master, acceped by Slave)
        //[2 : 0] S_AXI_ARPROT, // 主机读地址保护类型，信号指示事务的特权和安全级别，以及该事务是数据访问还是指令访问。
        AXI_ARVALID,// 主机读地址valid信号，表明主机正在发送有效的读地址和控制信息。
        AXI_ARREADY,// 从机读地址ready，表明从机已经准备好接受一个地址和相关的控制信号。
        
        AXI_RDATA,// 从机读数据 (issued by slave)
        AXI_RRESP,// 从机读数据响应，表示读传输的状态。
        AXI_RVALID,// 从机读数据valid，表明从机正在发送所需的读取数据.
        AXI_RREADY// 主机读数据ready，表示主机可以接受读取的数据和响应信息
);


/***riscv32 control***/
assign raddr1 = rs1;
assign raddr2 = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 5'd15 : rs2; //ecall
assign b = (op == 7'b0110011 || op == 7'b0100011) ? r2 : imm;
assign a = (op == 7'b0010011 || op == 7'b0000011 || op == 7'b0100011 || op == 7'b0110011/*R*/) ? r1 : pc;
assign xrd = (op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I 
 || op == 7'b0100011 //S
 || op == 7'b0110011)//R
 ? res 
 : (op == 7'b1101111) ? (pc + 4) //I_jal
 : (op == 7'b1100111) ? (pc + 4) //I_jalr
 : (op == 7'b0110111) ? imm	//U_lui
 : (op == 7'b0010111) ? (pc + imm) //U_auipc
 : 32'b0;
assign csrs = (op == 7'b1110011 && imm == 32'd833) ? mepc :
							(op == 7'b1110011 && imm == 32'd768) ? mstatus : 
							(op == 7'b1110011 && imm == 32'd834) ? mcause :
							(op == 7'b1110011 && imm == 32'd773) ? mtvec : 32'b0;
assign mepc_wen = ((op == 7'b1110011 && imm == 32'd833) || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mstatus_wen = (op == 7'b1110011 && imm == 32'd768) ? 1'b1 : 1'b0;
assign mcause_wen = (op == 7'b1110011 && imm == 32'd834 || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mtvec_wen =	(op == 7'b1110011 && imm == 32'd773) ? 1'b1 : 1'b0;
assign mepc_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? pc : csrs_in;	//ecall
assign mcause_in = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? r2 : csrs_in; //ecall

/***DPI-C***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction
/***E*N*D***/

endmodule
