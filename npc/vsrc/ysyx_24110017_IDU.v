`define YOSYS_STA
module ysyx_24110017_IDU(
	input	 wire clk,
	input  wire rst,

	input  wire isRAW_i,
	input  wire flush_i,

`ifndef YOSYS_STA
	output reg  [31:0] inst_o,//difftest
`endif

	output wire [20:0] prepc_o,
	output wire [ 1:0] prepc_en_o,

	input  wire if_valid_i,
	output wire id_ready_o,
	output wire id_valid_o,
	input  wire ex_ready_i,

	input  wire [31:0] pc_i,
  input  wire [31:0] inst_i,
	
	output reg  [31:0] pc_o,
	output wire	[31:0] imm_o,
	output reg  [ 4:0] op_o,
	output reg  [ 2:0] funct3_o,
	output reg	[ 3:0] rs1_o,
  output reg	[ 3:0] rs2_o,
	output reg	[ 3:0] rd_o,
	output reg	       gpr_wen_o,
	output reg         fencei_o
);

/***分布式控制***/
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk) begin
	if(rst || flush_i) state <= IDLE;
  else begin
		case (state)
			IDLE: state <= (if_valid_i && id_ready_o) ? WAIT : state;
			WAIT: state <= (id_valid_o && ex_ready_i) ?	IDLE : state;
		endcase
	end
end

assign id_valid_o = (state == WAIT) && (!isRAW_i);
assign id_ready_o = (state == IDLE) && (!isRAW_i);

reg [24:0]imm_reg;
assign imm_o = imm;
always@(posedge clk) begin
	if(rst || flush_i) begin
`ifndef YOSYS_STA
		inst_o			<= 32'h0;
`endif
		pc_o				<= 32'h0;
		imm_reg			<= 25'b0;
		op_o				<= 5'b0;
		funct3_o		<= 3'b0;
		rs1_o				<= 4'b0;
		rs2_o				<= 4'b0;
		rd_o				<= 4'b0;
		gpr_wen_o		<= 1'b0;
		fencei_o		<= 1'b0;
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
					imm_reg     <= inst[31:7];
					op_o				<= op;
					funct3_o		<= funct3;
					rs1_o				<= rs1;
					rs2_o				<= rs2;
					rd_o        <= rd;
					gpr_wen_o   <= gpr_wen;
					fencei_o		<= fencei;
				end
			end
		endcase
	end
end

/***pattern***/
wire [4:0]op;
wire [3:0]rd; //R I U J
wire [2:0]funct3;
wire [3:0]rs1;  //R I S B
wire [3:0]rs2;  //R S B
wire [31:0]immI,immU,immS,immB,immJ,imm;
wire [6:0]funct7; //R
 
assign op = inst_i[6:2];
assign rd = (op == 5'b01101 || op == 5'b00101 || op == 5'b11011 || op == 5'b11001 || op == 5'b00000 || op == 5'b00100 || op == 5'b11100 || op == 5'b01100) ? inst_i[10:7] : 4'b0;
wire gpr_wen = (op == 5'b01101 || op == 5'b00101 || op == 5'b11011 || op == 5'b11001 || op == 5'b00100 || op == 5'b11100 || op == 5'b01100 || op == 5'b00000) ? 1'b1 : 1'b0;
assign funct3 = inst_i[14:12];
assign rs1 = (op == 5'b11001 || op == 5'b00000 || op == 5'b00100 || op == 5'b11100	//I
 || op == 5'b11000	//B
 || op == 5'b01000	//S
 || op == 5'b01100) ? //R
 inst_i[18:15] : 4'b0;
assign rs2 = (op == 5'b11000  //B
 || op == 5'b01000 //S
 || op == 5'b01100) ? inst_i[23:20] //R
 : (op == 5'b11100 && imm == 32'd0 && funct3 == 3'b000) ? 4'd15 //ecall
 : 4'b0;
assign immI = {{20{imm_reg[24]}},imm_reg[24:13]};	//SEXTIimmediate
assign immU = {imm_reg[24:5],{12{1'b0}}};	//UEXTUimm
assign immS = {{20{imm_reg[24]}},imm_reg[24:18], imm_reg[4:0]};	//SEXTSimm
assign immB = {{19{imm_reg[24]}},imm_reg[24],imm_reg[0],imm_reg[23:18],imm_reg[4:1],1'b0}; //SEXTBimm
assign immJ = {{11{imm_reg[24]}},imm_reg[24],imm_reg[12:5],imm_reg[13],imm_reg[23:14],1'b0}; //SEXTJimm
assign funct7 = imm_reg[24:18];

assign imm = (op == 5'b01101 || op == 5'b00101) ? immU
 : (op == 5'b11011) ? immJ
 : (op == 5'b11000) ? immB
 : (op == 5'b01000) ? immS
 : (op == 5'b11001 || op == 5'b00000 || op == 5'b00100 || op == 5'b11100) ? immI 
 : (op == 5'b01100) ? {20'b0,funct7,5'b0}
 : 32'b0; 

wire fencei = (op == 5'b00011);

//静态分支预测
assign prepc_en_o[1:0] = (op == 5'b11000 && inst_i[31]) ? 2'b01 : (op == 5'b11011) ? 2'b10 : 2'b00;
assign prepc_o = ((op == 5'b11000 && inst_i[31]) || (op == 5'b11011)) ? imm[20:0] : 21'b0;

endmodule
