//`define YOSYS_STA
module ysyx_24110017_EXU(
	input  wire clk,
	input  wire rst,
	input  wire isCHazard,

	input  wire id_valid_i,
	output wire  ex_ready_o,
	output wire  ex_valid_o,
	input  wire ls_ready_i,
	
  input  wire [31:0] pc_i,  //i.bit
  input  wire [31:0] imm_i,
  input  wire [ 6:0] op_i,
  input  wire [ 2:0] funct3_i,
  input  wire [ 4:0] rd_i,
  input  wire gpr_wen_i,
  input  wire [ 3:0] alu_sel_i,
  input  wire [31:0] a_i,
  input  wire [31:0] b_i,
	input  wire [31:0] r1_i,
	input	 wire [31:0] r2_i,
  input	 wire [31:0] csr_i,
	input  wire [31:0] mepc_i,mtvec_i,
	input  wire mepc_wen_i,mstatus_wen_i,mcause_wen_i,mtvec_wen_i,

	output reg  [ 6:0] op_o,
	output reg  [ 2:0] funct3_o,
	output reg  [ 4:0] rd_o,
	output reg  gpr_wen_o,
	output reg  [31:0] mepc_o,
  output reg  [31:0] mstatus_o,
  output reg  [31:0] mcause_o,
  output reg  [31:0] mtvec_o,
  output reg  mepc_wen_o,
	output reg  mstatus_wen_o,
	output reg  mcause_wen_o,
	output reg  mtvec_wen_o,
	output reg  [31:0] ex_o,
	output reg  ls_valid_o,ls_wen_o,
	output reg  ls_read_o,ls_write_o,
	output reg  [31:0] ls_waddr_o,ls_wdata_o,ls_raddr_o,
	output reg  [ 3:0] ls_wmask_o,
	output reg  [ 2:0] ls_awsize_o,ls_arsize_o,
	output reg  [ 7:0] ls_awlen_o,ls_arlen_o,
	output reg  [ 1:0] ls_awburst_o,ls_arburst_o,
	output reg  [31:0] dnpc_o
);

/***分布式控制***/
assign ex_ready_o = (state == IDLE);
assign ex_valid_o = (state == WAIT) && (al_done || ex_valid_reg);
reg ex_valid_reg;
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk or posedge rst) begin
	if(rst || isCHazard) state <= IDLE;
  else begin
		case (state)
			IDLE: state <= (id_valid_i && ex_ready_o) ? WAIT : state;
			WAIT: state <= (ex_valid_o && ls_ready_i) ? IDLE : state;
		endcase
	end
end

always @(posedge clk or posedge rst) begin
	if(rst || isCHazard) ex_valid_reg <= 1'b0;
	else begin
		case(state)
			IDLE: ex_valid_reg <= 1'b0;
			WAIT: begin
				if(ex_valid_o && ls_ready_i) begin                                  
          ex_valid_reg <= 1'b0;
        end
				else if(al_done) begin
					ex_valid_reg <= 1'b1;
				end
			end
		endcase
	end
end

wire [31:0]al_res;
always @(posedge clk or posedge rst) begin
	if(rst || isCHazard) begin
		op_o					<= 7'b0;
		funct3_o			<= 3'b0;
		rd_o					<= 5'b0;
		gpr_wen_o			<= 1'b0;
		mepc_o				<= 32'h0;
		mstatus_o			<= 32'h0;
		mcause_o			<= 32'h0;
		mtvec_o				<= 32'h0;
		mepc_wen_o		<= 1'b0;
		mstatus_wen_o	<= 1'b0;
		mcause_wen_o	<= 1'b0;
		mtvec_wen_o		<= 1'b0;
		ex_o					<= 32'h0;
		ls_valid_o		<= 1'b0;
		ls_wen_o			<= 1'b0;
		ls_read_o			<= 1'b0;
		ls_write_o		<= 1'b0;
		ls_waddr_o		<= 32'h0;
		ls_wdata_o		<= 32'h0;
		ls_raddr_o		<= 32'h0;
		ls_wmask_o		<= 4'b0;
		ls_awsize_o		<= 3'b0;
		ls_arsize_o		<= 3'b0;
		ls_awlen_o		<= 8'b0;
		ls_arlen_o		<= 8'b0;
		ls_awburst_o	<= 2'b0;
		ls_arburst_o	<= 2'b0;
		dnpc_o				<= 32'h0;
	end
	else begin
		case(state)
			IDLE: begin
				op_o          <= 7'b0;
		    funct3_o      <= 3'b0;
		    rd_o          <= 5'b0;
		    gpr_wen_o     <= 1'b0;
		    mepc_o        <= 32'h0;
		    mstatus_o     <= 32'h0;
		    mcause_o      <= 32'h0;
		    mtvec_o       <= 32'h0;
		    mepc_wen_o    <= 1'b0;
		    mstatus_wen_o <= 1'b0;
		    mcause_wen_o  <= 1'b0;
		    mtvec_wen_o   <= 1'b0;
		    ex_o          <= 32'h0;
		    ls_valid_o    <= 1'b0;
		    ls_wen_o      <= 1'b0;
		    ls_read_o     <= 1'b0;
		    ls_write_o    <= 1'b0;
		    ls_waddr_o    <= 32'h0;
		    ls_wdata_o    <= 32'h0;
		    ls_raddr_o    <= 32'h0;
		    ls_wmask_o    <= 4'b0;
		    ls_awsize_o   <= 3'b0;
		    ls_arsize_o   <= 3'b0;
		    ls_awlen_o    <= 8'b0;
		    ls_arlen_o    <= 8'b0;
		    ls_awburst_o  <= 2'b0;
		    ls_arburst_o  <= 2'b0;
			end
			WAIT: begin
				if(ex_valid_o && ls_ready_i) begin
					rd_o          <= rd_i;
					gpr_wen_o     <= gpr_wen_i;
					mepc_o        <= mepc_w;
					mstatus_o     <= mstatus_w;
					mcause_o      <= mcause_w;
					mtvec_o       <= mtvec_w;
					mepc_wen_o    <= mepc_wen_i;
					mstatus_wen_o <= mstatus_wen_i;
					mcause_wen_o  <= mcause_wen_i;
					mtvec_wen_o   <= mtvec_wen_i;
					ex_o          <= ex;
					ls_valid_o    <= ls_valid;
					ls_wen_o      <= ls_wen;
					ls_read_o     <= ls_valid && !ls_wen;
					ls_write_o    <= ls_valid && ls_wen;
					ls_waddr_o    <= ls_waddr;
					ls_wdata_o    <= ls_wdata;
					ls_raddr_o    <= ls_raddr;
					ls_wmask_o    <= ls_wmask;
					ls_awsize_o   <= ls_awsize;
					ls_arsize_o   <= ls_arsize;
					ls_awlen_o    <= ls_awlen;
					ls_arlen_o    <= ls_arlen;
					ls_awburst_o  <= ls_awburst;
					ls_arburst_o  <= ls_arburst;
					dnpc_o				<= dnpc;
				end
			end
		endcase
	end
end

wire al_done;
ysyx_24110017_ALU ALU(clk,rst,a_i,b_i,alu_sel_i,al_res,al_done);

wire [31:0]ex;
assign ex = 
/***I*addi~srai***/
				({32{op_i == 7'b0010011}} & (al_res))
/***R_add~R_remu***/
			| ({32{op_i == 7'b0110011}} & (al_res))
/*********/
			|
				({32{(op_i == 7'b1101111)}} & (pc_i + 4)) | //I_jal
				({32{(op_i == 7'b1100111)}} & (pc_i + 4)) | //I_jalr
				({32{(op_i == 7'b0110111)}} & imm_i) | //U_lui
				({32{(op_i == 7'b0010111)}} & (pc_i + imm_i))	//U_auipc
/***CSRU***/
			|
				({32{(op_i == 7'b1110011) && ((funct3_i == 3'b001) || (funct3_i == 3'b010) || (funct3_i == 3'b000))}} & csr_i); //I_csrrw_csrrs_csrrc

wire[31:0] mepc_w = (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000) ? pc_i : csrs_w; //ecall
wire[31:0] mstatus_w = csrs_w;
wire[31:0] mcause_w = (op_i == 7'b1110011 && imm_i == 32'd0 && funct3_i == 3'b000) ? r2_i : csrs_w; //ecall a5
wire[31:0] mtvec_w = csrs_w;
wire[31:0] csrs_w = 
			({32{(op_i == 7'b1110011) && (funct3_i == 3'b001)}} & r1_i) | //I_csrrw
			({32{(op_i == 7'b1110011) && (funct3_i == 3'b010)}} & (csr_i |  r1_i)) | //I_csrrs
      ({32{(op_i == 7'b1110011) && (funct3_i == 3'b000)}} & (csr_i & ~r1_i)) ; //I_csrrc

/***LSU***/
wire ls_valid = (op_i == 7'b0000011 || op_i == 7'b0100011) ? 1'b1 : 1'b0;
wire ls_wen = (op_i == 7'b0100011) ? 1'b1 : 1'b0;
wire [31:0]ls_waddr = (op_i == 7'b0100011) ? (r1_i + offset) : 32'h80000000;
wire [31:0]ls_wdata = ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011) ? r2_i //对齐
 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011) ? {r2_i[23:0],8'b0} //0x1
 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011) ? {r2_i[15:0],16'b0} //0x2
 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011) ? {r2_i[7:0],24'b0} //0x3
 : 32'b0;
wire [3:0]ls_wmask = ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0001 : ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b0011 : ((ls_waddr_o % 4 == 0) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1111 //对齐访问
 : 
((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0010 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b0110 : ((ls_waddr_o % 4 == 1) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1110 //单次非对齐
 :
((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b0100 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b1100 : ((ls_waddr_o % 4 == 2) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1100 //单次非对齐
 :
((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b000) ? 4'b1000 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b001) ? 4'b1000 : ((ls_waddr_o % 4 == 3) && op_i == 7'b0100011 && funct3_i == 3'b010) ? 4'b1000 //单次非对齐
 : 4'b0;
wire [31:0]ls_raddr = (op_i == 7'b0000011) ? (r1_i + offset) : 32'h0;
wire [ 2:0]ls_awsize = (op_i == 7'b0100011 && funct3_i == 3'b000) ? 3'b000 : (op_i ==  7'b0100011 && funct3_i == 3'b001) ? 3'b1 : (op_i == 7'b0100011 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
wire [2:0]ls_arsize = (op_i == 7'b0000011 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? 3'b0 : (op_i == 7'b0000011 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? 3'b1 : (op_i == 7'b0000011 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
wire [7:0]ls_awlen = 8'b0;
wire [7:0]ls_arlen = 8'b0;
wire [1:0]ls_awburst = 2'b01;
wire [1:0]ls_arburst = 2'b01;

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
	output wire [31:0] res,
	output wire done
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

	localparam IDLE		 = 1'b0;
	localparam EXECUTE = 1'b1;

	reg state;

	reg [63:0]mul_result;
	reg [5:0]mul_counter;
	reg [31:0]dividend,divisor;
	reg [31:0]quotient,remainder;
	reg [5:0]div_counter;

	assign res = (opcode == OP_ADD) ? (a + b)
	 : (opcode == OP_SUB) ? (a - b)
	 : (opcode == OP_SLL) ? (a << b) 
	 : (opcode == OP_SRL) ? a >> b 
	 : (opcode == OP_SRA) ? ({32{a[31]}} << (32 - b)) | (a >> b) 
	 : (opcode == OP_SLT) ? {31'b0,a < b} 
	 : (opcode == OP_AND) ? a & b 
	 : (opcode == OP_OR) ? a | b 
	 : (opcode == OP_XOR) ? a ^ b 
	 : (opcode == OP_MUL && done) ? mul_result[31:0]
	 : (opcode == OP_MULH && done) ? mul_result[63:32]
	 : (opcode == OP_DIV && done) ? quotient
	 : (opcode == OP_REM && done) ? remainder
	 : 32'h0;

	assign done = (opcode == OP_MUL || opcode == OP_MULH || opcode == OP_DIV || opcode == OP_REM) ? (state == EXECUTE) && done_reg : 1'b1;
	reg done_reg;

	always @(posedge clk or posedge rst) begin
		if(rst) begin
			state <= IDLE;
			done_reg <= 1'b0;
		end
		else begin
			case(state)
				IDLE: begin
					if((opcode == OP_MUL || opcode == OP_MULH || opcode == OP_DIV || opcode == OP_REM) && !done_reg) begin
						state <= EXECUTE;
						done_reg <= 1'b0;
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
					case (opcode)
						OP_MUL: begin
							if(mul_counter < 32) begin
								if(mul_result[0]) begin
									mul_result[63:32] <= mul_result[63:32] + b;
								end
								mul_result <= {1'b0,mul_result[63:1]};
								mul_counter <= mul_counter + 1;
							end
							else begin
								done_reg <= 1'b1;
								state <= IDLE;
							end
						end
						OP_MULH: begin
							if(mul_counter < 32) begin
                if(mul_result[0]) begin
                  mul_result[63:32] <= mul_result[63:32] + b;
                end
                mul_result <= {1'b0,mul_result[63:1]};
                mul_counter <= mul_counter + 1;
              end
              else begin
								done_reg <= 1'b1;
                state <= IDLE;
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
								done_reg <= 1'b1;
								state <= IDLE;
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
								done_reg <= 1'b1;
                state <= IDLE;
              end
            end
						default: begin
						end
					endcase
				end
			endcase
		end
	end

endmodule
