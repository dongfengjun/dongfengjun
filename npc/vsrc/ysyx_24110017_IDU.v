//`define YOSYS_STA
module ysyx_24110017_IDU(
	input	 wire clk,
	input  wire rst,
	input  wire isRAW,
	input  wire isCHazard,

	output reg  [31:0] inst_o,//difftest
	
	output wire [31:0] prepc_o,
	output wire prepc_en_o,

	output wire [ 4:0] rs1_o,
	output wire [ 4:0] rs2_o,
	input  wire [31:0] r1_i,
	input  wire [31:0] r2_i,
	input  wire [31:0] mepc_i,mstatus_i,mcause_i,mtvec_i,

	input  wire if_valid_i,
	output wire id_ready_o,
	output wire id_valid_o,
	input  wire ex_ready_i,

	input  wire [31:0] pc_i,
  input  wire [31:0] inst_i,
	
	output reg  [31:0] pc_o,
	output reg	[31:0] imm_o,
	output reg  [ 6:0] op_o,
	output reg  [ 2:0] funct3_o,
	output reg  [ 4:0] rd_o,
	output reg  gpr_wen_o,
	output reg  [ 3:0] alu_sel_o,
	output reg  [31:0] a_o,
	output reg  [31:0] b_o,
	output reg  [31:0] r1_o,
	output reg  [31:0] r2_o,
	output reg	[31:0] csr_o,
	output reg  [31:0] mepc_o,mtvec_o,
	output reg	mepc_wen_o,mstatus_wen_o,mcause_wen_o,mtvec_wen_o,
	output reg  fencei_o
);

/***分布式控制***/
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk or posedge rst) begin
	if(rst) state <= IDLE;
	else if(isCHazard) state <= IDLE;
  else begin
		case (state)
			IDLE: state <= (if_valid_i && id_ready_o) ? WAIT : state;
			WAIT: state <= (id_valid_o && ex_ready_i) ?	IDLE : state;
		endcase
	end
end

assign id_valid_o = (state == WAIT) && (!isRAW);
assign id_ready_o = (state == IDLE) && (!isRAW);


always@(posedge clk or posedge rst) begin
	if(rst) begin
		inst_o			<= 32'h0;
		pc_o				<= 32'h0;
		imm_o				<= 32'h0;
		op_o				<= 7'b0;
		funct3_o		<= 3'b0;
		rd_o				<= 5'b0;
		gpr_wen_o		<= 1'b0;
		alu_sel_o		<= 4'b0;
		a_o					<= 32'h0;
		b_o					<= 32'h0;
		r1_o				<= 32'h0;
		r2_o				<= 32'h0;
		csr_o				<= 32'h0;
		mepc_o			<= 32'h0;
		mtvec_o			<= 32'h0;
		mepc_wen_o		<= 1'b0;
		mstatus_wen_o <= 1'b0;
		mcause_wen_o	<= 1'b0;
		mtvec_wen_o		<= 1'b0;
		fencei_o		<= 1'b0;
	end
	else if(isCHazard) begin
    inst_o      <= 32'h0;
    pc_o        <= 32'h0;
    imm_o       <= 32'h0;
    op_o        <= 7'b0;
    funct3_o    <= 3'b0;
    rd_o        <= 5'b0;
    gpr_wen_o   <= 1'b0;
    alu_sel_o   <= 4'b0;
    a_o         <= 32'h0;
    b_o         <= 32'h0;
    r1_o        <= 32'h0;
    r2_o        <= 32'h0;
    csr_o       <= 32'h0;
    mepc_o      <= 32'h0;
    mtvec_o     <= 32'h0;
    mepc_wen_o    <= 1'b0;
		mstatus_wen_o <= 1'b0;
		mcause_wen_o  <= 1'b0;
    mtvec_wen_o   <= 1'b0;
    fencei_o    <= 1'b0;
  end
	else begin
		case(state)
			IDLE: begin
			end
			WAIT: begin
				if(id_valid_o && ex_ready_i) begin
					inst_o			<= inst_i;
					pc_o        <= pc_i;
					imm_o       <= imm;
					op_o				<= op;
					funct3_o		<= funct3;
					rd_o        <= rd;
					gpr_wen_o   <= gpr_wen;
					alu_sel_o   <= alu_sel;
					a_o         <= a;
					b_o         <= b;
					r1_o				<= r1_i;
					r2_o				<= r2_i;
					csr_o       <= csr;
					mepc_o      <= mepc_i;
					mtvec_o     <= mtvec_i;
					mepc_wen_o    <= mepc_wen;
					mstatus_wen_o <= mstatus_wen;
					mcause_wen_o  <= mcause_wen;
					mtvec_wen_o   <= mtvec_wen;
					fencei_o		<= fencei;
				end
			end
		endcase
	end
end

/***pattern***/
wire [6:0]op;
wire [4:0]rd; //R I U J
wire [2:0]funct3;
//wire [4:0]rs1;  //R I S B
//wire [4:0]rs2;  //R S B
wire [31:0]immI,immU,immS,immB,immJ,imm;
wire [6:0]funct7; //R
wire [4:0]shamt;  //I shamt
assign op = (state == WAIT) ? inst_i[6:0] : 7'b0;
wire ALUR		= (op == 7'b0110011);
wire ALUI		= (op == 7'b0010011);
wire LOAD		= (op == 7'b0000011);
wire STORE  = (op == 7'b0100011);
wire BRANCH = (op == 7'b1100011);
wire JAL		= (op == 7'b1101111);
wire JALR		= (op == 7'b1100111);
wire LUI		= (op == 7'b0110111);
wire AUIPC	= (op == 7'b0010111);
wire FENCE	= (op == 7'b0001111);
wire SYSTEM = (op == 7'b1110011);
assign rd = ((state == WAIT) && (LUI || AUIPC || JAL || JALR || LOAD || ALUI || ALUR || SYSTEM)) ? inst_i[11:7] : 5'b0;
assign funct3 = (state == WAIT) ? inst_i[14:12] : 3'b0;
assign rs1_o = (JALR || LOAD || ALUI || SYSTEM || BRANCH || STORE || ALUR) ? inst_i[19:15] : 5'b0;
assign rs2_o = (BRANCH || STORE || ALUR) ? inst_i[24:20] : (SYSTEM && (inst_i[31:20] == 12'd0) && funct3 == 3'b000) ? 5'd15 //ecall
 : 5'b0;
assign funct7 = (state == WAIT && ALUR) ? inst_i[31:25] : 7'b0;

assign immI = (state == WAIT)  ? {{20{inst_i[31]}},inst_i[31:20]} : 32'b0; //SEXTIimmediate
assign shamt = (state == WAIT) ? inst_i[24:20] : 5'b0;	//I shamt
assign immU = (state == WAIT)  ? {inst_i[31:12],{12{1'b0}}} : 32'b0; //UEXTUimm
assign immS = (state == WAIT)  ? {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]} : 32'b0; //SEXTSimm
assign immB = (state == WAIT)  ? {{19{inst_i[31]}}, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0} : 32'b0; //SEXTBimm
assign immJ = (state == WAIT)  ? {{11{inst_i[31]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0} : 32'b0; //SEXTJimm
assign imm = (LUI || AUIPC) ? immU : (JAL) ? immJ : (BRANCH) ? immB : (STORE) ? immS : (JALR || LOAD || ALUI || SYSTEM) ? immI : 32'b0;

wire gpr_wen = (state == WAIT) && (LUI || AUIPC || JAL || JALR || LOAD || ALUI || ALUR || SYSTEM);

/***ALU***/
wire [3:0]alu_sel;
wire [31:0]a,b;
assign a = ((state == WAIT) && ALUI && (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b011 || funct3 == 3'b100 || funct3 == 3'b101 || funct3 == 3'b110 || funct3 == 3'b111) || (ALUR && ((funct3 == 3'b000 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0100000) || (funct3 == 3'b001 && funct7 == 7'b0000000) || (funct3 == 3'b011 && funct7 == 7'b0000000) || (funct3 == 3'b100 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0100000) || (funct3 == 3'b110 && funct7 == 7'b0000000) || (funct3 == 3'b111 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001)))) ? r1_i
 : ((state == WAIT) && ((ALUI && funct3 == 3'b010) || (ALUR && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b001 && funct7 == 7'b0000001) || (funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b110 && funct7 == 7'b0000001))))) ? $signed(r1_i) : 32'b0;
assign b = ((state == WAIT) && (ALUI && (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b011 || funct3 == 3'b100 || funct3 == 3'b110 || funct3 == 3'b111))) ? imm
	: ((state == WAIT) && ALUI && (funct3 == 3'b010)) ? $signed(imm) 
	: ((state == WAIT) && ALUI && (funct3 == 3'b001 || funct3 == 3'b101)) ? {27'b0,shamt} 
	: ((state == WAIT) && (ALUR && ((funct3 == 3'b000 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0100000) || (funct3 == 3'b011 && funct7 == 7'b0000000) || (funct3 == 3'b100 && funct7 == 7'b0000000) || (funct3 == 3'b110 && funct7 == 7'b0000000) || (funct3 == 3'b111 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001)))) ? r2_i
	: ((state == WAIT) && (ALUR && ((funct3 == 3'b001 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0100000)))) ? {27'b0,r2_i[4:0]}
	: ((state == WAIT) && ALUR && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b001 && funct7 == 7'b0000001) || (funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b110 && funct7 == 7'b0000001))) ? $signed(r2_i)
	: 32'b0;
localparam ADD  = 4'b0000;
localparam SUB  = 4'b0001;
localparam SLL  = 4'b0010;
localparam SRL  = 4'b0011;
localparam SRA  = 4'b0100;
localparam SLT  = 4'b0101;
localparam AND  = 4'b0110;
localparam OR   = 4'b0111;
localparam XOR  = 4'b1000;
localparam MUL  = 4'b1001;
localparam MULH = 4'b1010;
localparam DIV  = 4'b1011;
localparam REM  = 4'b1100;
assign alu_sel = (state == WAIT) ? 
								(((ALUI && funct3 == 3'b000) || (op == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000000)) ? ADD : 
									(ALUR && funct3 == 3'b000 && funct7 == 7'b0100000) ? SUB :
									((ALUI && funct3 == 3'b001) || (op == 7'b0110011 && (funct3 == 3'b001 && funct7 == 7'b0000000))) ? SLL :
									((ALUI &&(funct3 == 3'b010 || funct3 == 3'b011)) || (op == 7'b0110011 && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b011 && funct7 == 7'b0000000)))) ? SLT :
									((ALUI && funct3 == 3'b100) || (op == 7'b0110011 && (funct3 == 3'b100 && funct7 == 7'b0000000))) ? XOR :
									((ALUI && funct3 == 3'b101 && funct7 == 7'b0000000) || (op == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000000)) ? SRL :
									((ALUI && funct3 == 3'b101 && funct7 == 7'b0100000) || (op == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0100000)) ? SRA :
									((ALUI && funct3 == 3'b110) || (op == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000000)) ? OR : 
									((ALUI && funct3 == 3'b111) || (op == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000000)) ? AND : 
									 (ALUR && funct3 == 3'b000 && funct7 == 7'b0000001) ? MUL :
									 (ALUR && funct3 == 3'b001 && funct7 == 7'b0000001) ? MULH :
									 (ALUR && ((funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001))) ? DIV :
									 (ALUR && ((funct3 == 3'b110 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001))) ? REM : 4'b1111) : 4'b1111;

wire[31:0] csr = ((state == WAIT) && SYSTEM && imm == 32'd833) ? mepc_i
	: ((state == WAIT) && SYSTEM && imm == 32'd768) ? mstatus_i
	: ((state == WAIT) && SYSTEM && imm == 32'd834) ? mcause_i
	: ((state == WAIT) && SYSTEM && imm == 32'd773) ? mtvec_i
	: 32'b0;
wire mepc_wen		 = ((state == WAIT) && ((SYSTEM && imm == 32'd833) || (SYSTEM && imm == 32'd0 && funct3 == 3'b000))) ? 1'b1 : 1'b0;
wire mstatus_wen = ((state == WAIT) && (SYSTEM && imm == 32'd768)) ? 1'b1 : 1'b0;
wire mcause_wen  = ((state == WAIT) && (SYSTEM && imm == 32'd834 || (SYSTEM && imm == 32'd0 && funct3 == 3'b000))) ? 1'b1 : 1'b0;
wire mtvec_wen	 = ((state == WAIT) && (SYSTEM && imm == 32'd773)) ? 1'b1 : 1'b0;

wire fencei = (inst_i == 32'b00000000000000000001000000001111);

//静态分支预测
assign prepc_en_o = (BRANCH && inst_i[31]) || (JAL);
assign prepc_o = ((BRANCH && inst_i[31]) || (op == JAL)) ? pc_i + imm : 32'h0;

endmodule
