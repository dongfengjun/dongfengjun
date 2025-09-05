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

wire funct7_i = imm_i[10];
wire [ 4:0] shamt_i = imm_i[4:0];
wire [31:0] offset  = imm_i;
//U
wire lui     = (op_i == 5'b01101);
wire auipc   = (op_i == 5'b00101);
//J
wire jal     = (op_i == 5'b11011);
wire jalr    = (op_i == 5'b11001);
//B
wire beq     = (op_i == 5'b11000) && (funct3_i == 3'b000);
wire bne     = (op_i == 5'b11000) && (funct3_i == 3'b001);
wire blt     = (op_i == 5'b11000) && (funct3_i == 3'b100);
wire bge     = (op_i == 5'b11000) && (funct3_i == 3'b101);
wire bltu    = (op_i == 5'b11000) && (funct3_i == 3'b110);
wire bgeu    = (op_i == 5'b11000) && (funct3_i == 3'b111);
//Load
wire load    = (op_i == 5'b00000);
wire lb      = (op_i == 5'b00000) && (funct3_i == 3'b000);
wire lh      = (op_i == 5'b00000) && (funct3_i == 3'b001);
wire lw      = (op_i == 5'b00000) && (funct3_i == 3'b010);
wire lbu     = (op_i == 5'b00000) && (funct3_i == 3'b100);
wire lhu     = (op_i == 5'b00000) && (funct3_i == 3'b101);
//Store
wire sb      = (op_i == 5'b01000) && (funct3_i == 3'b000);
wire sh      = (op_i == 5'b01000) && (funct3_i == 3'b001);
wire sw      = (op_i == 5'b01000) && (funct3_i == 3'b010);
//ALU Immediate
wire addi    = (op_i == 5'b00100) && (funct3_i == 3'b000);
wire slti    = (op_i == 5'b00100) && (funct3_i == 3'b010);
wire sltiu   = (op_i == 5'b00100) && (funct3_i == 3'b011);
wire xori    = (op_i == 5'b00100) && (funct3_i == 3'b100);
wire ori     = (op_i == 5'b00100) && (funct3_i == 3'b110);
wire andi    = (op_i == 5'b00100) && (funct3_i == 3'b111);
wire slli    = (op_i == 5'b00100) && (funct3_i == 3'b001) && (funct7_i == 1'b0);
wire srli    = (op_i == 5'b00100) && (funct3_i == 3'b101) && (funct7_i == 1'b0);
wire srai    = (op_i == 5'b00100) && (funct3_i == 3'b101) && (funct7_i == 1'b1);
//ALU Register
wire add     = (op_i == 5'b01100) && (funct3_i == 3'b000) && (funct7_i == 1'b0);
wire sub     = (op_i == 5'b01100) && (funct3_i == 3'b000) && (funct7_i == 1'b1);
wire sll     = (op_i == 5'b01100) && (funct3_i == 3'b001) && (funct7_i == 1'b0);
wire slt     = (op_i == 5'b01100) && (funct3_i == 3'b010) && (funct7_i == 1'b0);
wire sltu    = (op_i == 5'b01100) && (funct3_i == 3'b011) && (funct7_i == 1'b0);
wire xor_    = (op_i == 5'b01100) && (funct3_i == 3'b100) && (funct7_i == 1'b0);
wire srl     = (op_i == 5'b01100) && (funct3_i == 3'b101) && (funct7_i == 1'b0);
wire sra     = (op_i == 5'b01100) && (funct3_i == 3'b101) && (funct7_i == 1'b1);
wire or_     = (op_i == 5'b01100) && (funct3_i == 3'b110) && (funct7_i == 1'b0);
wire and_    = (op_i == 5'b01100) && (funct3_i == 3'b111) && (funct7_i == 1'b0);
//System
wire ecall = (op_i == 5'b11100 && {offset[9],offset[6],offset[1],offset[0]} == 4'b0000 && funct3_i == 3'b0);
wire mret  = (op_i == 5'b11100 && {offset[9],offset[6],offset[1],offset[0]} == 4'b1010 && funct3_i == 3'b0);
//CSR
wire csrrw   = (op_i == 5'b11100) && (funct3_i == 3'b001);
wire csrrs   = (op_i == 5'b11100) && (funct3_i == 3'b010);
wire csrrc   = (op_i == 5'b11100) && (funct3_i == 3'b011);

//复用
wire [31:0]add_res = ((ls_valid || jalr) ? r1_i : pc_i) + imm_i;
wire [31:0]add_pc_4 = pc_i + 4;

wire [31:0]xrd = 
				(lui)   ? imm_i		   :
				(auipc) ? add_res    :
				(jal)   ? pc_i + 4   :
				(jalr)  ? pc_i + 4   :
				(load)  ? ls_rdata_i :
				(addi)  ? r1_i + imm_i :
				(slti)  ? $signed(r1_i) < $signed(imm_i) :
				(sltiu) ? r1_i < imm_i :
				(xori)  ? r1_i ^ imm_i :
				(ori)   ? r1_i | imm_i :
				(andi)  ? r1_i & imm_i :
				(slli)  ? r1_i << shamt_i :
				(srli)  ? r1_i >> shamt_i :
				(srai)  ? ({32{rs1_i[31]}} << (32 - shamt_i[4:0])) | (r1_i >> shamt_i[4:0]) :
				(add)   ? r1_i + r2_i :
				(sub)   ? r1_i - r2_i :
				(sll)   ? r1_i << r2_i[4:0] :
				(slt)   ? $signed(r1_i) < $signed(r2_i) :
				(sltu)  ? r1_i < r2_i :
				(xor_)  ? r1_i ^ r2_i :
				(srl)   ? r1_i >> r2_i[4:0] :
				(sra)   ? ({32{r1_i[31]}} << (32 - r2_i[4:0])) | (r1_i >> r2_i[4:0]) :
				(or_)   ? r1_i | r2_i :
				(and_)  ? r1_i & r2_i :
				(csrrw) ? csr :
				(csrrs) ? csr :
				(csrrc) ? csr :
				32'h0;

wire[31:0] csr = 
		(op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1101) ? mepc_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1000) ? mstatus_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1110) ? mcause_i
	: (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1001) ? mtvec_i 
	: 32'b0;
	
wire[31:0] mcause_w = (ecall) ? r2_i : csrs_w; //ecall a5
wire[31:0] csrs_w = 
			(csrrw) ? r1_i :
			(csrrs) ? csr |  r1_i :
      (csrrc) ? csr & ~r1_i :
			(ecall) ? pc_i : 32'h0; //ecall_mepc
wire [3:0] csrs_wen = {
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1001), //1100000101
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1110) || ecall_en, //1101000010
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1000), //1100000000
    (op_i == 5'b11100 && {imm_i[9],imm_i[6],imm_i[1],imm_i[0]} == 4'b1101) || ecall_en //1101000001
};

/***ALU***
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
assign alu_res = (alu_sel == ADD) ? (a + b)
	: (alu_sel == SUB) ? (a - b)
	: (alu_sel == SLL) ? (a << b[4:0]) 
	: (alu_sel == SRL) ? (a >> b[4:0]) 
	: (alu_sel == SRA) ? ({32{a[31]}} << (32 - b[4:0])) | (a >> b[4:0]) 
	: (alu_sel == SLT) ? {31'b0, a < b} 
	: (alu_sel == AND) ? (a & b) 
	: (alu_sel == OR)  ? (a | b) 
	: (alu_sel == XOR) ? (a ^ b) 
	: 32'b0;
***/

/***LSU***/
wire ls_valid = (op_i == 5'b01000) || (op_i == 5'b00000);
assign ls_addr_o = (ls_valid) ? add_res : 32'h0;
assign ls_wdata_o = (op_i == 5'b01000) ? 
       ((ls_addr_o[1:0] == 0) ? r2_i 
			: (ls_addr_o[1:0] == 1) ? {r2_i[23:0],8'b0} 
			: (ls_addr_o[1:0] == 2) ? {r2_i[15:0],16'b0} 
			: (ls_addr_o[1:0] == 3) ? {r2_i[7:0],24'b0} : 32'h0) : 32'h0;

/***BU***/
wire [31:0]dnpc = 
    (jal) ?   add_res	//jal
	: (jalr) ? (add_res & ~1) //jalr
	: (beq && (r1_i == r2_i)) ? add_res	//beq
	: (bne && (r1_i != r2_i)) ? add_res	//bne
	: (blt && ($signed(r1_i)  < $signed(r2_i))) ? add_res	//blt
	: (bge && ($signed(r1_i) >= $signed(r2_i))) ? add_res	//bge
	: (bltu && (r1_i  < r2_i)) ? add_res	//bltu
	:	(bgeu && (r1_i >= r2_i)) ? add_res	//bgeu
	: (ecall) ? mtvec_i  //ecall
	: (mret) ?  mepc_i  //mret
	: add_pc_4;

endmodule
