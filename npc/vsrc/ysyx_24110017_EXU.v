//`define YOSYS_STA
module ysyx_24110017_EXU(
	input  wire clk,
	input  wire rst,

	input  wire id_valid_i,
	output reg  ex_ready_o,
	output reg  ex_valid_o,
	input  wire wb_ready_i,
	
  input  wire [31:0] pc_i,  //i.bit
  input  wire [31:0] imm_i,
  input  wire [ 6:0] op_i,
  input  wire [ 2:0] funct3_i,
  input  wire [ 4:0] rd_i,
  input  wire gpr_wen_i,
  input  wire alu_valid_i,
  input  wire [ 3:0] alu_sel_i,
  input  wire [31:0] a_i,
  input  wire [31:0] b_i,
  input  wire fencei_i,

	output reg  ls_read_o,ls_write_o,
	input  wire ls_done_i,
	output reg  ls_valid_o,ls_wen_o,
	output reg  [31:0]ls_waddr_o,ls_wdata_o,ls_raddr_o,
	output reg  [ 3:0]ls_wmask_o,
	output reg  [ 2:0]ls_awsize_o,ls_arsize_o,
	output reg  [ 7:0]ls_awlen_o,ls_arlen_o,
	output reg  [ 1:0]ls_awburst_o,ls_arburst_o,
	input  wire [31:0]ls_rdata_i,
/***BU***/
	output reg  [31:0]dnpc_o,
/***CSRU***/
	input  wire [31:0]mepc_i,mstatus_i,mcause_i,mtvec_i,
	output reg  [31:0]mepc_o,mstatus_o,mcause_o,mtvec_o,
	output reg  gpr_wen_o,mepc_wen_o,mstatus_wen_o,mcause_wen_o,mtvec_wen_o
);

/***分布式控制***/
reg al_start;
wire al_done;
reg [31:0]ram_rdata_reg;
parameter IDLE = 2'b00,WAIT = 2'b01,READY = 2'b10,DONE=2'b11;
reg [1:0]state;

always @(posedge clk or posedge rst) begin
	if(rst) state <= IDLE;
  else begin
		case (state)
			IDLE:  state <= (id_valid_i && ex_ready_o) ? WAIT : state;
			WAIT:  state <= ((!al_valid) && (!ls_valid_o)) ? READY : (al_done) ? READY : (ls_done_i) ? READY : state;
			READY: state <= (ex_valid_o && wb_ready_i) ? DONE : state;
			DONE:  state <= IDLE : state;
		endcase
	end
end

always @(posedge clk or posedge rst) begin
	if(rst) begin
		ex_valid_o		<= 1'b0;
		ex_ready_o		<= 1'b0;
		ex_o					<= 32'h0;
		al_start			<= 1'b0;
		al_res_o			<= 32'b0;
		dnpc_o				<= pc_i + 4;
		gpr_wen_o			<= 1'b0;
		mepc_o				<= 32'h0;
    mstatus_o			<= 32'h0;
    mcause_o			<= 32'h0;
    mtvec_o				<= 32'h0;
    mepc_wen_o		<= 1'b0;
    mstatus_wen_o <= 1'b0;
    mcause_wen_o	<= 1'b0;
    mtvec_wen_o		<= 1'b0;
		ls_read_o			<= 1'b0;
		ls_write_o		<= 1'b0;
		ram_rdata_o		<= 32'h0;
	end
	else begin
		case (state)
			IDLE: begin
				if(id_valid_i) begin //判断条件
					ex_ready_o	<= 1'b1;
				end
				if(id_valid_i && ex_ready_o) begin
					ex_ready_o	<= 1'b0;
				end
			end
			WAIT: begin
				if(al_valid_i) begin
					al_start		<= 1'b1;
				end
				if(al_done) begin
					al_start		<= 1'b0;
					al_res			<= res;
				end
				if(ls_valid_o && (!ls_wen_o)) begin
					ex_o				<= 32'h0;
					ls_read_o		<= 1'b1;
				end
				if(ls_wen_o) begin
					ls_write_o	<= 1'b1;
				end
				if(ls_done_i) begin
					ls_read_o		<= 1'b0;
					ls_write_o	<= 1'b0;
					ram_rdata_o <= ls_rdata;
				end
			end
			READY: begin
				ex_valid <= 1'b1;
				if(ex_valid_o && wb_ready_i) begin
					ex_valid_o <= 1'b0;
					ex_reg <= ex;
					gpr_wen_reg <= gpr_wen;

					mepc_reg <= mepc_w;
					mstatus_reg <= mstatus_w;
					mcause_reg <= mcause_w;
					mtvec_reg <= mtvec_w;
					mepc_wen_reg <= mepc_wen;
					mstatus_wen_reg <= mstatus_wen;
					mcause_wen_reg <= mcause_wen;
					mtvec_wen_reg <= mtvec_wen;
				end
			end
			DONE: begin
				dnpc_reg <= dnpc;
				al_res <= 32'h0;
				ram_rdata_reg <= 32'h0;
			end
		endcase
	end
end

ysyx_24110017_ALU ALU(clk,rst,a_i,b_i,al_sel_i,al_start,res,al_done);

assign ex = 
				({32{op_i == 7'b0010011}}/***I*addi~srai***/
				& (
						al_res
					)
				)				
			| ({32{op_i == 7'b0110011}}/***R_add~R_remu***/
				& (
						al_res
					)
				)
			|
/*********/
				({32{(op_i == 7'b1101111)}} & (pc_i + 4)) | //I_jal
				({32{(op_i == 7'b1100111)}} & (pc_i + 4)) | //I_jalr
				({32{(op_i == 7'b0110111)}} & imm_i) | //U_lui
				({32{(op_i == 7'b0010111)}} & (pc_i + imm_i))	//U_auipc
/***LSU***/
			|
				({32{(op_i == 7'b0000011) && (funct3_i == 3'b000)}} & {{24{ram_rdata_reg[7]}},ram_rdata_reg[7:0]}) | //I_lb
				({32{(op_i == 7'b0000011) && (funct3_i == 3'b001)}} & {{16{ram_rdata_reg[15]}},ram_rdata_reg[15:0]}) | //I_lh 
				({32{(op_i == 7'b0000011) && (funct3_i == 3'b010)}} & ram_rdata_reg) | //I_lw
				({32{(op_i == 7'b0000011) && (funct3_i == 3'b100)}} & {{24{1'b0}},ram_rdata_reg[7:0]}) | //I_lbu
				({32{(op_i == 7'b0000011) && (funct3_i == 3'b101)}} & {{16{1'b0}},ram_rdata_reg[15:0]}) //I_lhu
/***CSRU***/
			|
				({32{(op_i == 7'b1110011) && (funct3_i == 3'b001)}} & csr) |	//I_csrrw
				({32{(op_i == 7'b1110011) && (funct3_i == 3'b010)}} & csr) |	//I_csrrs
				({32{(op_i == 7'b1110011) && (funct3_i == 3'b000)}} & csr); 	//I_csrrc

/***CSRU***/
wire[31:0] csr = (op_i == 7'b1110011 && imm_i == 32'd833) ? mepc_i
 : (op_i == 7'b1110011 && imm_i == 32'd768) ? mstatus_i
 : (op_i == 7'b1110011 && imm_i == 32'd834) ? mcause_i
 : (op_i == 7'b1110011 && imm_i == 32'd773) ? mtvec_i
 : 32'b0;
wire[31:0] mepc_w = (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000) ? pc_i : csrs_w; //ecall
wire[31:0] mstatus_w = csrs_w;
wire[31:0] mcause_w = (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000) ? r2_i : csrs_w; //ecall a5
wire[31:0] mtvec_w = csrs_w;
wire[31:0] csrs_w = 
			({32{(op_i == 7'b1110011) && (funct3_i == 3'b001)}} & r1_i) | //I_csrrw
			({32{(op_i == 7'b1110011) && (funct3_i == 3'b010)}} & (csr |  r1_i)) | //I_csrrs
      ({32{(op_i == 7'b1110011) && (funct3_i == 3'b000)}} & (csr & ~r1_i)) ; //I_csrrc
wire mepc_wen = ((op_i == 7'b1110011 && imm_i == 32'd833) || (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000)) ? 1'b1 : 1'b0;
wire mstatus_wen = (op_i == 7'b1110011 && imm_i == 32'd768) ? 1'b1 : 1'b0;
wire mcause_wen = (op_i == 7'b1110011 && imm_i == 32'd834 || (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000)) ? 1'b1 : 1'b0;
wire mtvec_wen = (op_i == 7'b1110011 && imm_i == 32'd773) ? 1'b1 : 1'b0;

/***LSU***/
wire [31:0]ls_rdata;
assign ls_valid_o = (op_i == 7'b0000011 || op_i == 7'b0100011) ? 1'b1 : 1'b0;
assign ls_wen_o = (op_i == 7'b0100011) ? 1'b1 : 1'b0;
assign ls_waddr_o = (op_i == 7'b0100011) ? (r1_i + offset) : 32'h80000000;
assign ls_wdata_o = ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011) ? r2_i //对齐
 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011) ? {r2_i[23:0],8'b0} //0x1
 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011) ? {r2_i[15:0],16'b0} //0x2
 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011) ? {r2_i[7:0],24'b0} //0x3
 : 32'b0;
assign ls_wmask_o = ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0001 : ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b0011 : ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1111 //对齐访问
 : 
((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0010 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b0110 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1110 //单次非对齐
 :
((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0100 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b1100 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1100 //单次非对齐
 :
((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b1000 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b1000 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1000 //单次非对齐
 : 4'b0;
assign ls_raddr_o = (op_i == 7'b0000011) ? (r1_i + offset) : 32'h0;
assign ls_rdata = ((ls_raddr_o % 4 == 0) && op_i == 7'b0000011 && funct3_i == 3'b010) ? ls_rdata_i
 : ((ls_raddr_o % 4 == 1) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {8'b0,ls_rdata_i[31:8]}
 : ((ls_raddr_o % 4 == 2) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {16'b0,ls_rdata_i[31:16]}
 : ((ls_raddr_o % 4 == 3) && op_i == 7'b0000011 && funct3_i == 3'b010) ? {24'b0,ls_rdata_i[31:24]} //
 : ((ls_raddr_o % 4 == 0) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_i[7:0]}
 : ((ls_raddr_o % 4 == 1) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_i[15:8]}
 : ((ls_raddr_o % 4 == 2) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_i[23:16]}
 : ((ls_raddr_o % 4 == 3) && op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? {24'b0,ls_rdata_i[31:24]} //
 : ((ls_raddr_o % 4 == 0) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_i[15:0]}
 : ((ls_raddr_o % 4 == 1) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_i[23:8]}
 : ((ls_raddr_o % 4 == 2) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {16'b0,ls_rdata_i[31:16]}
 : ((ls_raddr_o % 4 == 3) && op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {24'b0,ls_rdata_i[31:24]} //
 : 32'b0;
assign ls_awsize_o = (op_i == 7'b0100011 && funct3_i == 3'b000) ? 3'b000 : (op_i ==  7'b0100011 && funct3_i == 3'b001) ? 3'b1 : (op_i == 7'b0100011 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
assign ls_arsize_o = (op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? 3'b0 : (op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? 3'b1 : (op_i == 7'b0000011 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
assign ls_awlen_o = 8'b0;//(op == 7'b0100011 && funct3 == 3'b000) ? 8'b0 : (op ==  7'b0100011 && funct3 == 3'b001) ? 8'b1 : (op == 7'b0100011 && funct3 == 3'b010) ? 8'b11 : 8'b0;
assign ls_arlen_o = 8'b0;//(op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? 8'b0 : (op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? 8'b1 : (op == 7'b0000011 && funct3 == 3'b010) ? 8'b11 : 8'b0;
assign ls_awburst_o = 2'b01;
assign ls_arburst_o = 2'b01;

/***BU***/
wire [31:0]offset = imm_i;
wire jalen,jalren,beqen,bneen,blten,bgeen,bltuen,bgeuen,ecall_en,mret_en;
assign jalen = (op_i == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op_i == 7'b1100111) ? 1'b1 : 1'b0;
assign beqen = (op_i == 7'b1100011 && funct3_i == 3'b000 && (r1_i == r2_i));
assign bneen = (op_i == 7'b1100011 && funct3_i == 3'b001 && (r1_i != r2_i));
assign blten = (op_i == 7'b1100011 && funct3_i == 3'b100 && ($signed(r1_i) < $signed(r2_i)));
assign bgeen = (op_i == 7'b1100011 && funct3_i == 3'b101 && ($signed(r1_i) >= $signed(r2_i)));
assign bltuen = (op_i == 7'b1100011 && funct3_i == 3'b110 && (r1_i < r2_i));
assign bgeuen = (op_i == 7'b1100011 && funct3_i == 3'b111 && (r1_i >= r2_i));
assign ecall_en = (op_i == 7'b1110011 && offset == 32'd0 && funct3_i == 3'b000);
assign mret_en = (op_i == 7'b1110011 && offset == 32'b1100000010 && funct3_i == 3'b000);

wire [31:0]dnpc = (jalen) ? (pc_i + offset)	//jal
	: (jalren) ? ((r1_i + offset) & ~1) //jalr
	: (beqen) ? (pc_i + offset)	//beq
	: (bneen) ? (pc_i + offset)	//bne
	: (blten) ? (pc_i + offset)	//blt
	: (bgeen) ? (pc_i + offset)	//bge
	: (bltuen) ? (pc_i + offset)	//bltu
	:	(bgeuen) ? (pc_i + offset)	//bgeu
	: (ecall_en) ? mtvec_i  //ecall
	: (mret_en) ? mepc_i  //mret
	: pc_i + 4;

endmodule


module ysyx_24110017_ALU(
	input wire clk,
	input wire rst,
	input wire [31:0] a,
	input wire [31:0] b,
	input wire [3:0] opcode,
	input wire start,
	output reg [31:0] res,
	output reg done
);

	localparam OP_ADD  = 4'b0000;
  localparam OP_SUB  = 4'b0001;
  localparam OP_SLL  = 4'b0010;
  localparam OP_SRL  = 4'b0011;
	localparam OP_SRA  = 4'b0100;
  localparam OP_SLT  = 4'b0101;
	localparam OP_AND  = 4'b0110;
  localparam OP_OR   = 4'b0111;
  localparam OP_XOR  = 4'b1000;
  localparam OP_MUL  = 4'b1001;
	localparam OP_MULH = 4'b1010;
  localparam OP_DIV  = 4'b1011;
	localparam OP_REM  = 4'b1100;

	localparam IDLE		 = 2'b00;
	localparam EXECUTE = 2'b01;
	localparam FINISH  = 2'b10;
	localparam NULL    = 2'b11;

	reg [1:0]state;
	reg [31:0]a_reg,b_reg;
	reg [3:0]opcode_reg;

	reg [63:0]mul_result;
	reg [5:0]mul_counter;
	reg [31:0]dividend,divisor;
	reg [31:0]quotient,remainder;
	reg [5:0]div_counter;

	always @(posedge clk or posedge rst) begin
		if(rst) begin
			state <= IDLE;
			res <= 32'h0;
			done <= 1'b0;
		end
		else begin
			case(state)
				IDLE: begin
					done <= 1'b0;
					if(start) begin
						a_reg <= a;
						b_reg <= b;
						opcode_reg <= opcode;
						state <= EXECUTE;

						if(opcode == OP_MUL || opcode == OP_MULH) begin
							mul_result <= {32'b0, a};
							mul_counter <= 6'd0;
						end
						else if(opcode == OP_DIV || opcode == OP_REM) begin
							dividend <= a;
							divisor <= b;
							quotient <= 32'b0;
							remainder <= 32'b0;
							div_counter <= 6'd0;
						end
					end
				end

				EXECUTE: begin
					case (opcode_reg)
						OP_ADD: begin
							res <= a_reg + b_reg;
							state <= FINISH;
						end
						OP_SUB: begin
							res <= a_reg - b_reg;
							state <= FINISH;
						end
						OP_SLL: begin
							res <= a_reg << b_reg;
							state <= FINISH;
						end
						OP_SRL: begin
							res <= a_reg >> b_reg;
							state <= FINISH;
						end
						OP_SRA: begin
							res <= ({32{a_reg[31]}} << (32 - b_reg)) | (a_reg >> b_reg);
							state <= FINISH;
						end
						OP_SLT: begin
							res <= {31'b0,a < b};
							state <= FINISH;
						end
						OP_AND: begin
							res <= a_reg & b_reg;
							state <= FINISH;
						end
						OP_OR: begin
							res <= a_reg | b_reg;
							state <= FINISH;
						end
						OP_XOR: begin
							res <= a_reg ^ b_reg;
							state <= FINISH;
						end
						OP_MUL: begin
							if(mul_counter < 32) begin
								if(mul_result[0]) begin
									mul_result[63:32] <= mul_result[63:32] + b_reg;
								end
								mul_result <= {1'b0,mul_result[63:1]};
								mul_counter <= mul_counter + 1;
							end
							else begin
								res <= mul_result[31:0];
								state <= FINISH;
							end
						end
						OP_MULH: begin
							if(mul_counter < 32) begin
                if(mul_result[0]) begin
                  mul_result[63:32] <= mul_result[63:32] + b_reg;
                end
                mul_result <= {1'b0,mul_result[63:1]};
                mul_counter <= mul_counter + 1;
              end
              else begin
                res <= mul_result[63:32];
                state <= FINISH;
              end
            end
						OP_DIV: begin
							if(div_counter < 32) begin
								remainder <= {remainder[30:0],dividend[31 - div_counter]};
								if(remainder >= divisor) begin
									remainder <= remainder - divisor;
									quotient[31 - div_counter] <= 1'b1;
								end
								else begin
									quotient[31 - div_counter] <= 1'b0;
								end
								div_counter <= div_counter + 1;
							end
							else begin
								res <= quotient;
								state <= FINISH;
							end
						end
						OP_REM: begin
              if(div_counter < 32) begin
                remainder <= {remainder[30:0],dividend[31 - div_counter]};
                if(remainder >= divisor) begin
                  remainder <= remainder - divisor;
                  quotient[31 - div_counter] <= 1'b1;
                end
	              else begin
		              quotient[31 - div_counter] <= 1'b0;
	              end
	              div_counter <= div_counter + 1;
              end
              else begin
                res <= remainder;
                state <= FINISH;
              end
            end
						default: begin
							res <= 32'b0;
							state <= FINISH;
						end
					endcase
				end

				FINISH: begin
					done <= 1'b1;
					state <= NULL;
				end
				NULL: begin
					done <= 1'b0;
					state <= IDLE;
				end
			endcase
		end
	end

endmodule
