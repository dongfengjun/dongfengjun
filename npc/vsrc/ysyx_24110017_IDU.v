//`define YOSYS_STA
module ysyx_24110017_IDU(
	input	 wire clk,
	input  wire rst,
	output wire rs1_o,
	output wire rs2_o,
	input  wire r1_i,
	input  wire r2_i,

	input  wire if_valid_i,		//valid
	output reg  id_ready_o,
	output reg  id_valid_o,
	input  wire ex_ready_i,

	input  wire [31:0] pc_i,	//i.bit
  input  wire [31:0] inst_i,
	
	output reg  [31:0] pc_o,	//o.bit
	output reg	[31:0] imm_o,
	output reg  [ 6:0] op_o,
	output reg  [ 2:0] funct3_o,
	output reg  [ 4:0] rd_o,
	output reg  gpr_wen_o,
	output reg  alu_valid_o,		//alu
	output reg  [ 3:0] alu_sel_o,
	output reg  [31:0] a_o,
	output reg  [31:0] b_o,
	output reg  [31:0] r2_o,
	output reg  fencei_o
);

/***分布式控制***/
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk or posedge rst) begin
	if(rst) begin
		state = IDLE;
	end
  else begin
		case (state)
			IDLE: state <= (if_valid_i && id_ready_o) ? WAIT : state;
			WAIT: state <= (id_valid_o && ex_ready_i) ?	IDLE : state;
		endcase
	end
end

always @(posedge clk or posedge rst) begin
	if(rst) begin
		id_valid_o <= 1'b0;
		id_ready_o <= 1'b0;
	end
	else begin
		case (state)
			IDLE: begin
				id_ready_o <= 1'b1;
				if(if_valid_i && id_ready_o) begin
					id_ready_o <= 1'b0;
				end
			end
			WAIT: begin
				id_valid_o <= 1'b1;
				if(id_valid_o && ex_ready_i) begin
					id_valid_o <= 1'b0;
				end
			end
		endcase
	end
end

always@(posedge clk or posedge rst) begin
	if(rst) begin
		pc_o				<= 32'h0;
		imm_o				<= 32'h0;
		op_o				<= 7'b0;
		funct3			<= 3'b0;
		rd_o				<= 5'b0;
		gpr_wen_o		<= 1'b0;
		alu_valid_o <= 1'b0;
		alu_sel_o		<= 4'b0;
		a_o					<= 32'h0;
		b_o					<= 32'h0;
		r2_o				<= 32'h0;
		fencei_o		<= 1'b0;
	end
	else begin
		if(id_valid_o && ex_ready_i) begin
			pc_o        <= pc_i;
      imm_o       <= imm;
			op_o				<= op;
			funct3_o		<= funct3;
      rd_o        <= rd;
	    gpr_wen_o   <= gpr_wen;
	    alu_valid_o <= alu_valid;
	    alu_sel_o   <= alu_sel;
	    a_o         <= a;
	    b_o         <= b;
			r2_o				<= r2_i;
			fencei_o		<= fencei;
		end
	end
end

/***pattern***/
wire [6:0]op;
wire [4:0]rd; //R I U J
wire [2:0]funct3;
wire [4:0]rs1;  //R I S B
wire [4:0]rs2;  //R S B
wire [31:0]immI,immU,immS,immB,immJ,imm;
wire [6:0]funct7; //R
wire [4:0]shamt;  //I shamt
 
assign op = inst_i[6:0];
assign rd = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 
 || op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111
 || op == 7'b1110011 || op == 7'b0110011) ? inst_i[11:7] : 5'b0;
assign funct3 = inst_i[14:12];
assign rs1 = (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I
 || op == 7'b1100011	//B
 || op == 7'b0100011	//S
 || op == 7'b0110011) ? //R
 inst_i[19:15] : 5'b0;
assign rs2 = (op == 7'b1100011  //B
 || op == 7'b0100011  //S
 || op == 7'b0110011) ? inst_i[24:20] //R
 : (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 5'd15 //ecall
 : 5'b0;
assign funct7 = (op == 7'b0110011 || op == 7'b0010011) ? inst_i[31:25] : 7'b0;
assign immI = {{20{inst_i[31]}},inst_i[31:20]};	//SEXTIimmediate
assign shamt = {inst_i[24:20]};	//I shamt
assign immU = {inst_i[31:12],{12{1'b0}}};	//UEXTUimm
assign immS = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};	//SEXTSimm
assign immB = {{19{inst_i[31]}}, inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};	//SEXTBimm
assign immJ = {{11{inst_i[31]}}, inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};	//SEXTJimm

assign imm = (op == 7'b0110111 || op == 7'b0010111) ? immU
 : (op == 7'b1101111) ? immJ
 : (op == 7'b1100011) ? immB
 : (op == 7'b0100011) ? immS
 : (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011) ? immI 
 : 32'b0;

wire gpr_wen = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || op == 7'b1100111 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011 || op == 7'b0110011 || op == 7'b0000011) ? 1'b1 : 1'b0;
/***ALU***/
wire alu_valid = (op == 7'b0010011) || (op == 7'b0110011);
wire [3:0]alu_sel;
wire [31:0]a,b;
assign a = ((op == 7'b0010011) && (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b011 || funct3 == 3'b100 || funct3 == 3'b101 || funct3 == 3'b110 || funct3 == 3'b111) || (op == 7'b0110011) && ((funct3 == 3'b000 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0100000) || (funct3 == 3'b001 && funct7 == 7'b0000000) || (funct3 == 3'b011 && funct7 == 7'b0000000) || (funct3 == 3'b100 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0100000) || (funct3 == 3'b110 && funct7 == 7'b0000000) || (funct3 == 3'b111 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001))) ? r1_i 
	: ((op == 7'b0010011 && funct3 == 3'b010) || ((op == 7'b0110011) && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b001 && funct7 == 7'b0000001) || (funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b110 && funct7 == 7'b0000001)))) ? $signed(r1_i)
	: 32'b0;
assign b = ((op == 7'b0010011) && (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b011 || funct3 == 3'b100 || funct3 == 3'b110 || funct3 == 3'b111)) ? imm
	: ((op == 7'b0010011) && (funct3 == 3'b010)) ? $signed(imm) 
	: ((op == 7'b0010011) && (funct3 == 3'b001 || funct3 == 3'b101)) ? {27'b0,shamt} 
	: ((op == 7'b0110011) && ((funct3 == 3'b000 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0100000) || (funct3 == 3'b011 && funct7 == 7'b0000000) || (funct3 == 3'b100 && funct7 == 7'b0000000) || (funct3 == 3'b110 && funct7 == 7'b0000000) || (funct3 == 3'b111 && funct7 == 7'b0000000) || (funct3 == 3'b000 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001))) ? r2_i
	: ((op == 7'b0110011 && ((funct3 == 3'b001 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0000000) || (funct3 == 3'b101 && funct7 == 7'b0100000)))) ? {27'b0,r2_i[4:0]}
	: ((op == 7'b0110011) && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b001 && funct7 == 7'b0000001) || (funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b110 && funct7 == 7'b0000001))) ? $signed(r2_i)
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
assign alu_sel =  ((op == 7'b0010011 && funct3 == 3'b000) || (op == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000000)) ? ADD : 
							(op == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0100000) ? SUB :
						  ((op == 7'b0010011 && funct3 == 3'b001) || (op == 7'b0110011 && (funct3 == 3'b001 && funct7 == 7'b0000000))) ? SLL :
							((op == 7'b0010011 &&(funct3 == 3'b010 || funct3 == 3'b011)) || (op == 7'b0110011 && ((funct3 == 3'b010 && funct7 == 7'b0000000) || (funct3 == 3'b011 && funct7 == 7'b0000000)))) ? SLT :
							((op == 7'b0010011 && funct3 == 3'b100) || (op == 7'b0110011 && (funct3 == 3'b100 && funct7 == 7'b0000000))) ? XOR :
							((op == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0000000) || (op == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000000)) ? SRL :
							((op == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0100000) || (op == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0100000)) ? SRA :
							((op == 7'b0010011 && funct3 == 3'b110) || (op == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000000)) ? OR : 
							((op == 7'b0010011 && funct3 == 3'b111) || (op == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000000)) ? AND : 
							(op == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000001) ? MUL :
							(op == 7'b0110011 && funct3 == 3'b001 && funct7 == 7'b0000001) ? MULH :
							(op == 7'b0110011 && ((funct3 == 3'b100 && funct7 == 7'b0000001) || (funct3 == 3'b101 && funct7 == 7'b0000001))) ? DIV :
							(op == 7'b0110011 && ((funct3 == 3'b110 && funct7 == 7'b0000001) || (funct3 == 3'b111 && funct7 == 7'b0000001))) ? REM 
							: 4'b1111;

wire fencei = (inst_i == 32'b00000000000000000001000000001111);


/***DPIC*etrace***/
`ifndef YOSYS_STA
import "DPI-C" function void npc_trap();
always@(*) begin
	if(inst_i == 32'b00000000000100000000000001110011) begin
		npc_trap();
	end
end
`endif
/***DPIC*END***/

endmodule
