module top_ysyx_24110017(clk,rst,pc,dnpc,inst);
input clk;
input rst;
output [31:0]pc;//if
output [31:0]dnpc;
output [31:0]inst;
output IF_DONE;


wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B 
wire [4:0]rs2;	//R S B
wire [31:0]imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
wire wr_en;
wire [31:0]inst;

wire [31:0]res;
wire [31:0]r1,r2,a,b,xrd;
wire [31:0]csrs, csrs_in, mepc_in, mepc, mstatus, mcause_in, mcause, mtvec;
wire mepc_wen, mstatus_wen, mcause_wen, mtvec_wen;
wire IF_DONE;

PCU_ysyx_24110017 PCU(clk,rst,
		op,funct3,imm,
		r1,r2,mtvec,mepc,
		pc,dnpc,
		IF_DONE
);
IFU_ysyx_24110017 IFU(clk,rst,pc,inst,IF_DONE);
IDU_ysyx_24110017 IDU(clk,rst,inst,
		op,rd,funct3,rs1,rs2,imm,funct7,shamt,
		wr_en,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen);
EXU_ysyx_24110017 EXU(clk,rst,
		op,funct3,imm,funct7,shamt,
		a,b,csrs,csrs_in,res);
WBU_ysyx_24110017 WBU(clk,rst,
		op,imm,funct3,
		pc,r1,r2,res,
		a,b,xrd,mepc,mstatus,mcause,mtvec,csrs,csrs_in,mepc_in,mcause_in);

RegisterFile_ysyx_24110017 #(5,32) RF (clk,xrd,rd,wr_en,rs1,r1,rs2,r2);
Reg_ysyx_24110017 #(32, 32'b0) mepc_ysyx_24110017 (clk,rst,mepc_in,mepc,mepc_wen);
Reg_ysyx_24110017 #(32, 32'h1800) mstatus_ysyx_24110017 (clk,rst,csrs_in,mstatus,mstatus_wen);
Reg_ysyx_24110017 #(32, 32'b0) mcause_ysyx_24110017 (clk,rst,mcause_in,mcause,mcause_wen);
Reg_ysyx_24110017 #(32, 32'b0) mtvec_ysyx_24110017 (clk,rst,csrs_in,mtvec,mtvec_wen);


/***DPI-C***/
export "DPI-C" function csr_display;                                    
function int csr_display(int i);
  begin
    assign csr_display = (i == 0) ? mepc : (i == 1) ? mstatus : (i == 2) ? mcause : (i == 3) ? mtvec : 32'b0;
  end
endfunction
/***E*N*D***/


endmodule
