//`define YOSYS_STA
module ysyx_24110017_EXU(
	input  wire clk,
	input  wire rst,

	input  wire flush_i,

`ifndef YOSYS_STA
	input  wire [31:0] inst_i,//difftest
	output reg  [31:0] pc_o,
	output reg  [31:0] inst_o,
	output reg  [31:0] npc_o,
`endif

	input  wire  id_valid_i,
	output wire  ex_ready_o,
	output wire  ex_valid_o,
	
  input  wire [31:0] pc_i,
  input  wire [31:0] imm_i,
  input  wire [ 4:0] op_i,
  input  wire [ 2:0] funct3_i,
  input  wire [31:0] r1_i,
	input  wire [31:0] r2_i,
	input  wire [ 3:0] rd_i,
	input  wire				 gpr_wen_i,
	input  wire [31:0] mepc_i,mstatus_i,mcause_i,mtvec_i,

	output reg  [31:0] xrd_o, 
	output reg  [ 3:0] rd_o,
	output reg				 gpr_wen_o,
	
  output reg  [31:0] mcause_o,
	output reg  [31:0] csrsw_o,
  output reg  [ 3:0] csrs_wen_o,

	output wire [31:0] ls_addr_o,ls_wdata_o,
	input  wire [31:0] ls_rdata_i,
	input  wire ls_done_i,

	output reg  [31:0] dnpc_o
);

/***分布式控制***/
assign ex_ready_o = !state;
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

wire updata = (!ls_valid || ls_done_i);
assign ex_valid_o = updata && state; 
always @(posedge clk) begin
  if(rst || flush_i)						state <= IDLE;
  else if(id_valid_i && !state) state <= WAIT;
  else if(updata && state)			state <= IDLE;
end

always@(posedge clk) begin
	casez({flush_i,state})
		2'b1? : begin
`ifndef YOSYS_STA
			pc_o   <= 32'h0;
			inst_o <= 32'h0;
			npc_o  <= 32'h0;
`endif
			xrd_o  <= 32'h0;
		end
		2'b01 : begin
			if(updata) begin
`ifndef YOSYS_STA
				pc_o	 <= pc_i;
				inst_o <= inst_i;
				npc_o  <= dnpc;
`endif
				xrd_o  <= xrd;
			end
		end
		default : begin
		end
	endcase
end

always@(posedge clk) begin
  casez({flush_i,state})
		2'b1? : rd_o <= 4'b0;
    2'b01 : begin
      if(updata) rd_o <= rd_i;
    end
		default : begin
		end
	endcase
end

always@(posedge clk) begin
  if(flush_i) gpr_wen_o	<= 1'b0;
  else begin
    case(state)
      IDLE : gpr_wen_o	<= 1'b0;
      WAIT : begin
        if(updata) gpr_wen_o <= gpr_wen_i;
      end
    endcase
  end
end

always@(posedge clk) begin
  casez({flush_i,state})
		2'b1? : mcause_o <= 32'h0;
    2'b01 : begin
			if(updata) mcause_o <= mcause_w;
    end
		default : begin
		end
	endcase
end

always@(posedge clk) begin
  casez({flush_i,state})
		2'b1? : csrsw_o	<= 32'h0;
		2'b01 : begin
			if(updata) csrsw_o <= csrs_w;
		end
		default : begin
		end
  endcase
end

always@(posedge clk) begin
  if(flush_i)
		csrs_wen_o <= 4'b0;
  else begin
    case(state)
      IDLE : begin
				csrs_wen_o <= 4'b0;
			end
			WAIT : begin
        if(updata) csrs_wen_o <= csrs_wen;
      end
    endcase
	end
end

always@(posedge clk) begin
	casez({flush_i,state})
		2'b1? : dnpc_o <= 32'h0;
		2'b01 : begin
			if(updata) dnpc_o <= dnpc;
		end
		default : dnpc_o <= dnpc_o;
	endcase
end

wire [31:0]add_res = ((op_i == 5'b00000 || op_i == 5'b01000 || op_i == 5'b11001 || (op_i == 5'b00100) || (op_i == 5'b01100)) ? r1_i : pc_i) + ((op_i == 5'b00100) ? r2_i : imm_i);
wire [31:0]add_pc_4 = pc_i + 4;

wire [31:0]xrd = 
/***I*addi~srai***/
				(op_i == 5'b00100) ? (alu_res) :
/***R_add~R_remu***/
				(op_i == 5'b01100) ? (alu_res) :
/*********/
				(op_i == 5'b11011) ? add_pc_4	: //I_jal
				(op_i == 5'b11001) ? add_pc_4	: //I_jalr
				(op_i == 5'b01101) ? imm_i		: //U_lui
				(op_i == 5'b00101) ? add_res  :	//U_auipc
/***LSU***/
				(op_i == 5'b00000) ? ls_rdata_i   : //LOAD
/***CSRU***/
				((op_i == 5'b11100) && ((funct3_i == 3'b001) || (funct3_i == 3'b010) || (funct3_i == 3'b011))) ? csr : //I_csrrw_csrrs_csrrc
				32'h0;

wire[31:0] csr = 
		(op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1101 && imm_i[2:0] == 3'b001) ? mepc_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1000 && imm_i[2:0] == 3'b000) ? mstatus_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1110 && imm_i[2:0] == 3'b010) ? mcause_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1001 && imm_i[2:0] == 3'b101) ? mtvec_i 
	: 32'b0;
	
wire[31:0] mcause_w = (ecall_en) ? r2_i : csrs_w; //ecall a5
wire[31:0] csrs_w = 
			({32{(op_i == 5'b11100) && (funct3_i == 3'b001)}} & r1_i) | //I_csrrw
			({32{(op_i == 5'b11100) && (funct3_i == 3'b010)}} & (csr |  r1_i)) | //I_csrrs
      ({32{(op_i == 5'b11100) && (funct3_i == 3'b011)}} & (csr & ~r1_i)) | //I_csrrc
			({32{ecall_en}} & pc_i); //ecall_mepc
wire [3:0] csrs_wen = {
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1001 && imm_i[2:0] == 3'b101), //1100000101
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1110 && imm_i[2:0] == 3'b010) || ecall_en, //1101000010
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1000 && imm_i[2:0] == 3'b000), //1100000000
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1101 && imm_i[2:0] == 3'b001) || ecall_en //1101000001
};

/***ALU***/
wire funct7_i = imm_i[10];
wire [4:0]shamt_i  = imm_i[4:0];
wire [3:0]alu_sel;
wire [31:0]alu_res;
wire [31:0]a,b;
wire a_use_r1 = (op_i == 5'b00100) || (op_i == 5'b01100);
wire b_use_imm = (op_i == 5'b00100);
wire b_use_shamt = (funct3_i == 3'b001 || funct3_i == 3'b101);
wire b_use_r2 = (op_i == 5'b01100);
wire ab_use_signed = (funct3_i == 3'b010);
assign a = a_use_r1 ? (ab_use_signed ? $signed(r1_i) : r1_i) : 32'b0;
assign b = b_use_imm ? (ab_use_signed ? $signed(imm_i) : b_use_shamt ? {27'b0, shamt_i} : imm_i) :
           b_use_r2 ? (ab_use_signed ? $signed(r2_i) : r2_i) : 32'b0;

localparam [3:0] ADD = 4'd0,SUB = 4'd1,SLL = 4'd2,SRL = 4'd3,SRA = 4'd4,SLT = 4'd5,AND = 4'd6,OR = 4'd7,XOR = 4'd8;
assign alu_sel =
    ((op_i == 5'b00100 && funct3_i == 3'b000) || (op_i == 5'b01100 && funct3_i == 3'b000 && funct7_i == 1'b0)) ? ADD 
  :  (op_i == 5'b01100 && funct3_i == 3'b000 && funct7_i == 1'b1) ? SUB 
	: ((op_i == 5'b00100 && funct3_i == 3'b001) || (op_i == 5'b01100 && (funct3_i == 3'b001 && funct7_i == 1'b0))) ? SLL 
	: ((op_i == 5'b00100 &&(funct3_i == 3'b010 || funct3_i == 3'b011)) || (op_i == 5'b01100 && ((funct3_i == 3'b010 && funct7_i == 1'b0) || (funct3_i == 3'b011 && funct7_i == 1'b0)))) ? SLT 
	: ((op_i == 5'b00100 && funct3_i == 3'b100) || (op_i == 5'b01100 && (funct3_i == 3'b100 && funct7_i == 1'b0))) ? XOR 
	: ((op_i == 5'b00100 && funct3_i == 3'b101 && funct7_i == 1'b0) || (op_i == 5'b01100 && funct3_i == 3'b101 && funct7_i == 1'b0)) ? SRL 
	: ((op_i == 5'b00100 && funct3_i == 3'b101 && funct7_i == 1'b1) || (op_i == 5'b01100 && funct3_i == 3'b101 && funct7_i == 1'b1)) ? SRA 
	: ((op_i == 5'b00100 && funct3_i == 3'b110) || (op_i == 5'b01100 && funct3_i == 3'b110 && funct7_i == 1'b0)) ? OR 
	: ((op_i == 5'b00100 && funct3_i == 3'b111) || (op_i == 5'b01100 && funct3_i == 3'b111 && funct7_i == 1'b0)) ? AND : ADD;
assign alu_res = (alu_sel == ADD) ? add_res
	: (alu_sel == SUB) ? (a - b)
	: (alu_sel == SLL) ? (a << b[4:0]) 
	: (alu_sel == SRL) ? (a >> b[4:0]) 
	: (alu_sel == SRA) ? ({32{a[31]}} << (32 - b[4:0])) | (a >> b[4:0]) 
	: (alu_sel == SLT) ? {31'b0, a < b} 
	: (alu_sel == AND) ? (a & b) 
	: (alu_sel == OR)  ? (a | b) 
	: (alu_sel == XOR) ? (a ^ b) 
	: 32'b0;

/***LSU***/
wire ls_valid = (op_i == 5'b01000) || (op_i == 5'b00000);
assign ls_addr_o = (ls_valid) ? add_res : 32'h0;
assign ls_wdata_o = (op_i == 5'b01000) ? ((ls_addr_o[1:0] == 0) ? r2_i 
			: (ls_addr_o[1:0] == 1) ? {r2_i[23:0],8'b0} 
			: (ls_addr_o[1:0] == 2) ? {r2_i[15:0],16'b0} 
			: (ls_addr_o[1:0] == 3) ? {r2_i[7:0],24'b0} : 32'h0) : 32'h0;

/***BU***/
wire [31:0] offset = imm_i;
wire jalen,jalren,beqen,bneen,blten,bgeen,bltuen,bgeuen,ecall_en,mret_en;
assign jalen		= (op_i == 5'b11011);
assign jalren		= (op_i == 5'b11001);
assign beqen		= (op_i == 5'b11000 && funct3_i == 3'b000 && (r1_i == r2_i));
assign bneen		= (op_i == 5'b11000 && funct3_i == 3'b001 && (r1_i != r2_i));
assign blten		= (op_i == 5'b11000 && funct3_i == 3'b100 && ($signed(r1_i) < $signed(r2_i)));
assign bgeen		= (op_i == 5'b11000 && funct3_i == 3'b101 && ($signed(r1_i) >= $signed(r2_i)));
assign bltuen		= (op_i == 5'b11000 && funct3_i == 3'b110 && (r1_i < r2_i));
assign bgeuen		= (op_i == 5'b11000 && funct3_i == 3'b111 && (r1_i >= r2_i));
assign ecall_en = (op_i == 5'b11100 && {offset[9],offset[6],offset[1],offset[0]} == 4'b0000 && funct3_i == 3'b0);
assign mret_en	= (op_i == 5'b11100 && {offset[9],offset[6],offset[1],offset[0]} == 4'b1010 && funct3_i == 3'b0);

wire [31:0]dnpc = (jalen) ? add_res	//jal
	: (jalren) ? (add_res & ~1) //jalr
	: (beqen) ? add_res	//beq
	: (bneen) ? add_res	//bne
	: (blten) ? add_res	//blt
	: (bgeen) ? add_res	//bge
	: (bltuen) ? add_res	//bltu
	:	(bgeuen) ? add_res	//bgeu
	: (ecall_en) ? mtvec_i  //ecall
	: (mret_en) ? mepc_i  //mret
	: add_pc_4;

endmodule
