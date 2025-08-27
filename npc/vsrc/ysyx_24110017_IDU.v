//`define YOSYS_STA
module ysyx_24110017_IDU(
	input	 wire clk,
	input  wire rst,

	input  wire isRAW_i,
	input  wire flush_i,

`ifndef YOSYS_STA
	output reg  [31:0] inst_o,//difftest
`endif

	output wire [31:0] prepc_o,
	output wire prepc_en_o,
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
	output reg	[ 3:0] rs1_o,
  output reg	[ 3:0] rs2_o,
	output reg	[ 3:0] rd_o,
	output reg  gpr_wen_o,
	output reg	[31:0] csr_o,
	output reg  [31:0] mepc_o,mtvec_o,
	output reg	[ 3:0] csrs_wen_o,
	output reg  fencei_o
);

/***分布式控制***/
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk) begin
	if(rst) state <= IDLE;
	else if(flush_i) state <= IDLE;
  else begin
		case (state)
			IDLE: state <= (if_valid_i && id_ready_o) ? WAIT : state;
			WAIT: state <= (id_valid_o && ex_ready_i) ?	IDLE : state;
		endcase
	end
end

assign id_valid_o = (state == WAIT) && (!isRAW_i);
assign id_ready_o = (state == IDLE) && (!isRAW_i);


always@(posedge clk) begin
	if(rst) begin
`ifndef YOSYS_STA
		inst_o			<= 32'h0;
`endif
		pc_o				<= 32'h0;
		imm_o				<= 32'h0;
		op_o				<= 7'b0;
		funct3_o		<= 3'b0;
		rs1_o				<= 4'b0;
		rs2_o				<= 4'b0;
		rd_o				<= 4'b0;
		gpr_wen_o		<= 1'b0;
		csr_o				<= 32'h0;
		mepc_o			<= 32'h0;
		mtvec_o			<= 32'h0;
		csrs_wen_o  <= 4'b0;
		fencei_o		<= 1'b0;
	end
	else if(flush_i) begin
`ifndef YOSYS_STA
		inst_o      <= 32'h0;
`endif
    pc_o        <= 32'h0;
    imm_o       <= 32'h0;
    op_o        <= 7'b0;
    funct3_o    <= 3'b0;
    rs1_o				<= 4'b0;
		rs2_o       <= 4'b0;
		rd_o        <= 4'b0;
    gpr_wen_o   <= 1'b0;
    csr_o       <= 32'h0;
    mepc_o      <= 32'h0;
    mtvec_o     <= 32'h0;
    csrs_wen_o  <= 4'b0;
		fencei_o    <= 1'b0;
  end
	else begin
		case(state)
			IDLE: begin
			end
			WAIT: begin
				if(id_valid_o && ex_ready_i) begin
`ifndef YOSYS_STA
					inst_o			<= inst_i;
`endif
					pc_o        <= pc_i;
					imm_o       <= imm;
					op_o				<= op;
					funct3_o		<= funct3;
					rs1_o				<= rs1;
					rs2_o				<= rs2;
					rd_o        <= rd;
					gpr_wen_o   <= gpr_wen;
					csr_o       <= csr;
					mepc_o      <= mepc_i;
					mtvec_o     <= mtvec_i;
					csrs_wen_o  <= csrs_wen;
					fencei_o		<= fencei;
				end
			end
		endcase
	end
end

/***pattern***/
wire [6:0]op;
wire [3:0]rd; //R I U J
wire [2:0]funct3;
wire [3:0]rs1;  //R I S B
wire [3:0]rs2;  //R S B
wire [31:0]immI,immU,immS,immB,immJ,imm;
wire [6:0]funct7; //R
 
assign op = inst_i[6:0];
assign rd = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 
 || op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011
 || op == 7'b1110011 || op == 7'b0110011) ? inst_i[10:7] : 4'b0;
assign funct3 = inst_i[14:12];
assign rs1 = (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b1110011	//I
 || op == 7'b1100011	//B
 || op == 7'b0100011	//S
 || op == 7'b0110011) ? //R
 inst_i[18:15] : 4'b0;
assign rs2 = (op == 7'b1100011  //B
 || op == 7'b0100011  //S
 || op == 7'b0110011) ? inst_i[23:20] //R
 : (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 4'd15 //ecall
 : 4'b0;
assign immI = {{20{inst_i[31]}},inst_i[31:20]};	//SEXTIimmediate
assign immU = {inst_i[31:12],{12{1'b0}}};	//UEXTUimm
assign immS = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};	//SEXTSimm
assign immB = {{19{inst_i[31]}}, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};	//SEXTBimm
assign immJ = {{11{inst_i[31]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};	//SEXTJimm
assign funct7 = inst_i[31:25];

assign imm = (op == 7'b0110111 || op == 7'b0010111) ? immU
 : (op == 7'b1101111) ? immJ
 : (op == 7'b1100011) ? immB
 : (op == 7'b0100011) ? immS
 : (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b1110011) ? immI 
 : (op == 7'b0110011) ? {25'b0,funct7}
 : 32'b0;

wire gpr_wen = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || op == 7'b1100111 || op == 7'b0010011 || op == 7'b1110011 || op == 7'b0110011 || op == 7'b0000011) ? 1'b1 : 1'b0;

wire[31:0] csr = (op == 7'b1110011 && imm == 32'd833) ? mepc_i
	: (op == 7'b1110011 && imm == 32'd768) ? mstatus_i
	: (op == 7'b1110011 && imm == 32'd834) ? mcause_i
	: (op == 7'b1110011 && imm == 32'd773) ? mtvec_i
	: 32'b0;
wire [3:0] csrs_wen = {
    (op == 7'b1110011 && imm == 32'd773),
    (op == 7'b1110011 && (imm == 32'd834 || (imm == 32'd0 && funct3 == 3'b000))),
    (op == 7'b1110011 && imm == 32'd768),
    (op == 7'b1110011 && (imm == 32'd833 || (imm == 32'd0 && funct3 == 3'b000)))
};

wire fencei = (inst_i == 32'b00000000000000000001000000001111);

//静态分支预测
assign prepc_en_o = (op == 7'b1100011 && inst_i[31]) || (op == 7'b1101111);
assign prepc_o = ((op == 7'b1100011 && inst_i[31]) || (op == 7'b1101111)) ? pc_i + imm : 32'h0;

endmodule
