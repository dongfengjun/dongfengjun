module ysyx_24110017_EXU(clk,rst,sram_lsu_read,sram_lsu_write,LSU_DONE,
			IDU_VALID,EXU_READY,EXU_VALID,WBU_READY,
			op,funct3,imm,funct7,shamt,r1,r2, //i_IDU
			res_reg, //o_WBU
			ls_valid,ls_wen,ls_waddr,ls_wdata,ls_raddr,ls_wmask,ls_awsize,ls_arsize,ls_awlen,ls_arlen,ls_awburst,ls_arburst,//o_LSU
			ls_rdata, //i_LSU
			pc,dnpc_reg,	//PCU
			mepc,mstatus,mcause,mtvec, //i_csr
			o_mepc_reg,o_mstatus_reg,o_mcause_reg,o_mtvec_reg, //o_csr
			gpr_wen_reg,mepc_wen_reg,mstatus_wen_reg,mcause_wen_reg,mtvec_wen_reg
);
input clk;
input rst;
output sram_lsu_read,sram_lsu_write;
input LSU_DONE;
input IDU_VALID;
output EXU_READY;
output EXU_VALID;
input WBU_READY;
input [6:0]op;
input [2:0]funct3;
input [31:0]imm;
input [6:0]funct7;
input [4:0]shamt;
input [31:0]r1,r2;
output [31:0]res_reg;

output ls_valid,ls_wen;
output [31:0]ls_waddr,ls_wdata,ls_raddr;
output [3:0]ls_wmask;
output [2:0]ls_awsize,ls_arsize;
output [7:0]ls_awlen,ls_arlen;
output [1:0]ls_awburst,ls_arburst;
input [31:0]ls_rdata;

input [31:0]pc;
output [31:0]dnpc_reg;

input [31:0]mepc,mstatus,mcause,mtvec;
output [31:0]o_mepc_reg,o_mstatus_reg,o_mcause_reg,o_mtvec_reg;
output gpr_wen_reg,mepc_wen_reg,mstatus_wen_reg,mcause_wen_reg,mtvec_wen_reg;

/***分布式控制***/
wire IDU_VALID,EXU_READY = exu_ready;
reg exu_ready;
wire EXU_VALID = exu_valid,WBU_READY;
reg exu_valid;

reg sram_lsu_read,sram_lsu_write;
reg [31:0]res_reg;
reg [31:0]dnpc_reg;
reg gpr_wen_reg;
reg [31:0]o_mepc_reg,o_mstatus_reg,o_mcause_reg,o_mtvec_reg;
reg mepc_wen_reg,mstatus_wen_reg,mcause_wen_reg,mtvec_wen_reg;

parameter IDLE = 2'b00,WAIT_SRAM = 2'b01,WAIT_READY = 2'b10,DONE_EXU=2'b11;
reg [1:0]state,next_state;
reg [31:0]s_rdata_reg;

always @(posedge clk) begin
  if (rst) begin
    state <= IDLE;
  end
	else begin
    state <= next_state;
  end
end

always @(*) begin
  next_state = state;
	if(rst) begin
		next_state = IDLE;
	end
  else begin
		case (state)
			IDLE: begin
				if(IDU_VALID && EXU_READY) begin
					next_state = WAIT_SRAM;
				end
			end
			WAIT_SRAM: begin
				if((!ls_valid)) begin
					next_state = WAIT_READY;
				end
				if(LSU_DONE) begin
					next_state = WAIT_READY;
				end
			end
			WAIT_READY: begin
				if(EXU_VALID && WBU_READY) begin
					next_state = DONE_EXU;
				end
			end
			DONE_EXU: begin
				next_state = IDLE;
			end
			default: begin
				next_state = IDLE; // 默认回到初始状态
			end
		endcase
	end
end

always @(posedge clk) begin
	if(rst) begin
		exu_valid <= 1'b0;
		exu_ready <= 1'b0;
		res_reg <= 32'h0;
		dnpc_reg <= pc + 4;
		gpr_wen_reg <= 1'b0;
		o_mepc_reg <= 32'h0;
    o_mstatus_reg <= 32'h0;
    o_mcause_reg <= 32'h0;
    o_mtvec_reg <= 32'h0;
    mepc_wen_reg <= 1'b0;
    mstatus_wen_reg <= 1'b0;
    mcause_wen_reg <= 1'b0;
    mtvec_wen_reg <= 1'b0;
		sram_lsu_read <= 1'b0;
		sram_lsu_write <= 1'b0;
		s_rdata_reg <= 32'h0;
	end
	else begin
		case (state)
			IDLE: begin
				if(IDU_VALID) begin //判断条件
					exu_ready <= 1'b1;
				end
				if(IDU_VALID && EXU_READY) begin
					exu_ready <= 1'b0;
				end
			end
			WAIT_SRAM: begin
				if(ls_valid && (!ls_wen)) begin
					res_reg <= 32'h0;
					sram_lsu_read <= 1'b1;
				end
				if(ls_wen) begin
					sram_lsu_write <= 1'b1;
				end
				if(LSU_DONE) begin
					sram_lsu_read <= 1'b0;
					sram_lsu_write <= 1'b0;
					s_rdata_reg <= s_rdata;
				end
			end
			WAIT_READY: begin
				exu_valid <= 1'b1;
				if(EXU_VALID && WBU_READY) begin
					exu_valid <= 1'b0;
					res_reg <= res;
					gpr_wen_reg <= gpr_wen;

					o_mepc_reg <= o_mepc;
					o_mstatus_reg <= o_mstatus;
					o_mcause_reg <= o_mcause;
					o_mtvec_reg <= o_mtvec;
					mepc_wen_reg <= mepc_wen;
					mstatus_wen_reg <= mstatus_wen;
					mcause_wen_reg <= mcause_wen;
					mtvec_wen_reg <= mtvec_wen;
				end
			end
			DONE_EXU: begin
				dnpc_reg <= dnpc;
				s_rdata_reg <= 32'h0;
			end
		endcase
	end
end

wire [31:0]a,b,res,ls_rdata;
assign b = (op == 7'b0110011 || op == 7'b0100011) ? r2 : imm;
assign a = (op == 7'b0010011 || op == 7'b0000011 || op == 7'b0100011 || op == 7'b0110011/*R*/ || (op == 7'b1110011 && (funct3 == 3'b001 || funct3 == 3'b010 || funct3 == 3'b011))/*csr*/) ? r1 : pc;
/***ALU I*addi~srai***/
assign res = 
			({32{op == 7'b0010011}} & (
			({32{funct3 == 3'b000}} & (a + b)) |	//addi
      ({32{funct3 == 3'b001}} & (a << shamt)) |	//slli
      ({32{funct3 == 3'b010}} & {31'b0, ($signed(a) < $signed(b))}) |	//slti
	    ({32{funct3 == 3'b011}} & {31'b0, (a < b)}) |	//sltiu
      ({32{funct3 == 3'b100}} & (a ^ b)) |	//xori
      ({32{(funct3 == 3'b101) && (funct7 == 7'b0000000)}} 
					& (a >> shamt)) |	//srli
			({32{(funct3 == 3'b101) && (funct7 == 7'b0100000)}} 
					& ({{{32{a[31]}}, $signed(a)} >> shamt}[31:0])) |	//srai
      ({32{funct3 == 3'b110}} & (a | b)) |	//ori
      ({32{funct3 == 3'b111}} & (a & b)) 	//andi
																	 ))				
																					|
/***R_add~R_remu***/ 
      ({32{op == 7'b0110011}} & (
      ({32{(funct3 == 3'b000) && (funct7 == 7'b0000000)}} 
					& (a + b)) | //add
			({32{(funct3 == 3'b000) && (funct7 == 7'b0100000)}} 
					& (a + ((~b)+1))) |	//sub
      ({32{(funct3 == 3'b001) && (funct7 == 7'b0000000)}}
					& (a << b[4:0])) |  //sll
      ({32{(funct3 == 3'b010) && (funct7 == 7'b0000000)}}
					& {31'b0, ($signed(a) < $signed(b))}) | //slt
      ({32{(funct3 == 3'b011) && (funct7 == 7'b0000000)}} 
					& {31'b0,(a < $unsigned(b))}) |  //sltu
      ({32{(funct3 == 3'b100) && (funct7 == 7'b0000000)}}
					& (a ^ b)) | //xor
      ({32{(funct3 == 3'b101) && (funct7 == 7'b0000000)}} 
		      & (a >> b[4:0])) | //srl
      ({32{(funct3 == 3'b101) && (funct7 == 7'b0100000)}}
					&  {{{32{a[31]}}, a} >> b}[31:0] ) | //sra
      ({32{(funct3 == 3'b110) && (funct7 == 7'b0000000)}}
					& (a | b)) | //or
      ({32{(funct3 == 3'b111) && (funct7 == 7'b0000000)}}
					& (a & b)) | //and
      ({32{(funct3 == 3'b000) && (funct7 == 7'b0000001)}}
          & (a * b)) | //mul
      ({32{(funct3 == 3'b001) && (funct7 == 7'b0000001)}} 
					& {{{32{a[31]}},$signed(a)} * {{32{b[31]}},$signed(b)}}[63:32]) | //mulh
      ({32{(funct3 == 3'b100) && (funct7 == 7'b0000001)}}
          & ($signed($signed(a) / $signed(b)))) |  //div
      ({32{(funct3 == 3'b101) && (funct7 == 7'b0000001)}}
          & (a / b)) | //divu
      ({32{(funct3 == 3'b110) && (funct7 == 7'b0000001)}} 
          & ($signed(a) % $signed(b))) |  //R_rem
      ({32{(funct3 == 3'b111) && (funct7 == 7'b0000001)}}
          & (a % b)) //R_remui			
																										))
			| //I_lb~lhu
      ({32{(op == 7'b0000011) && (funct3 == 3'b000)}}
          & {{24{s_rdata_reg[7]}},s_rdata_reg[7:0]}) | //I_lb
			({32{(op == 7'b0000011) && (funct3 == 3'b001)}}
          & {{16{s_rdata_reg[15]}},s_rdata_reg[15:0]}) | //I_lh 
			({32{(op == 7'b0000011) && (funct3 == 3'b010)}}
          & s_rdata_reg) | //I_lw
			({32{(op == 7'b0000011) && (funct3 == 3'b100)}}
          & {{24{1'b0}},s_rdata_reg[7:0]}) | //I_lbu
			({32{(op == 7'b0000011) && (funct3 == 3'b101)}}
          & {{16{1'b0}},s_rdata_reg[15:0]}) //I_lhu
/***I_csrrw~csrrc***/
			|
			({32{(op == 7'b1110011) && (funct3 == 3'b001)}}
					& csr) |	//I_csrrw
			({32{(op == 7'b1110011) && (funct3 == 3'b010)}}
					& csr) |	//I_csrrs
			({32{(op == 7'b1110011) && (funct3 == 3'b000)}}
					& csr) 	//I_csrrc
			|
			({32{(op == 7'b1101111)}}
					& (pc + 4)) | //I_jal
			({32{(op == 7'b1100111)}}
					& (pc + 4)) | //I_jalr
			({32{(op == 7'b0110111)}}
					& imm) | //U_lui
			({32{(op == 7'b0010111)}}
					& (pc + imm)); //U_auipc

/***csrrw~csrrc***/
wire [31:0]csr,w_csrs;
wire [31:0]o_mepc,o_mstatus,o_mcause,o_mtvec;
assign csr = (op == 7'b1110011 && imm == 32'd833) ? mepc
 : (op == 7'b1110011 && imm == 32'd768) ? mstatus
 : (op == 7'b1110011 && imm == 32'd834) ? mcause
 : (op == 7'b1110011 && imm == 32'd773) ? mtvec
 : 32'b0;
assign o_mepc= (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? pc
 : w_csrs; //ecall
assign o_mstatus = w_csrs;
assign o_mcause = (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? r2 : w_csrs; //ecall
assign o_mtvec = w_csrs;
assign w_csrs = 
			({32{(op == 7'b1110011) && (funct3 == 3'b001)}}
          & r1) | //I_csrrw
			({32{(op == 7'b1110011) && (funct3 == 3'b010)}}
          & (csr | r1)) | //I_csrrs
      ({32{(op == 7'b1110011) && (funct3 == 3'b000)}}
          & (csr &~r1)) ; //I_csrrc

/***load*store*LSU***/
wire ls_valid,ls_wen;
wire [31:0]ls_waddr,ls_wdata,ls_raddr,s_rdata;
wire [7:0]ls_wmask;
wire [2:0]ls_wsize,ls_rsize;
wire [1:0]ls_awburst,ls_arburst;
assign ls_valid = (op == 7'b0000011 || op == 7'b0100011) ? 1'b1 : 1'b0;
assign ls_wen = (op == 7'b0100011) ? 1'b1 : 1'b0;
assign ls_waddr = (op == 7'b0100011) ? (r1 + offset) : 32'h80000000;
assign ls_wdata = ((ls_waddr%4 == 0) && op == 7'b0100011) ? r2 //对齐
 : ((ls_waddr%4 == 1) && op == 7'b0100011) ? {r2[23:0],8'b0} //0x1
 : ((ls_waddr%4 == 2) && op == 7'b0100011) ? {r2[15:0],16'b0} //0x2
 : ((ls_waddr%4 == 3) && op == 7'b0100011) ? {r2[7:0],24'b0} //0x3
 : 32'b0;
assign ls_wmask = 
((ls_waddr%4 == 0) && op == 7'b0100011 && funct3 == 3'b000) ? 4'b0001 : ((ls_waddr%4 == 0) && op == 7'b0100011 && funct3 == 3'b001) ? 4'b0011 : ((ls_waddr%4 == 0) && op == 7'b0100011 && funct3 == 3'b010) ? 4'b1111 //对齐访问
 : 
((ls_waddr%4 == 1) && op == 7'b0100011 && funct3 == 3'b000) ? 4'b0010 : ((ls_waddr%4 == 1) && op == 7'b0100011 && funct3 == 3'b001) ? 4'b0110 : ((ls_waddr%4 == 1) && op == 7'b0100011 && funct3 == 3'b010) ? 4'b1110 //单次非对齐
 :
((ls_waddr%4 == 2) && op == 7'b0100011 && funct3 == 3'b000) ? 4'b0100 : ((ls_waddr%4 == 2) && op == 7'b0100011 && funct3 == 3'b001) ? 4'b1100 : ((ls_waddr%4 == 2) && op == 7'b0100011 && funct3 == 3'b010) ? 4'b1100 //单次非对齐
 :
 ((ls_waddr%4 == 3) && op == 7'b0100011 && funct3 == 3'b000) ? 4'b1000 : ((ls_waddr%4 == 3) && op == 7'b0100011 && funct3 == 3'b001) ? 4'b1000 : ((ls_waddr%4 == 3) && op == 7'b0100011 && funct3 == 3'b010) ? 4'b1000 //单次非对齐
 : 4'b0;
assign ls_raddr = (op == 7'b0000011) ? (r1 + offset) : 32'h0;
assign s_rdata = ((ls_raddr%4 == 0) && op == 7'b0000011 && funct3 == 3'b010) ? ls_rdata
 : ((ls_raddr%4 == 1) && op == 7'b0000011 && funct3 == 3'b010) ? {8'b0,ls_rdata[31:8]}
 : ((ls_raddr%4 == 2) && op == 7'b0000011 && funct3 == 3'b010) ? {16'b0,ls_rdata[31:16]}
 : ((ls_raddr%4 == 3) && op == 7'b0000011 && funct3 == 3'b010) ? {24'b0,ls_rdata[31:24]} //
 : ((ls_raddr%4 == 0) && op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? {24'b0,ls_rdata[7:0]}
 : ((ls_raddr%4 == 1) && op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? {24'b0,ls_rdata[15:8]}
 : ((ls_raddr%4 == 2) && op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? {24'b0,ls_rdata[23:16]}
 : ((ls_raddr%4 == 3) && op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? {24'b0,ls_rdata[31:24]} //
 : ((ls_raddr%4 == 0) && op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? {16'b0,ls_rdata[15:0]}
 : ((ls_raddr%4 == 1) && op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? {16'b0,ls_rdata[23:8]}
 : ((ls_raddr%4 == 2) && op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? {16'b0,ls_rdata[31:16]}
 : ((ls_raddr%4 == 3) && op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? {24'b0,ls_rdata[31:24]} //
 : 32'b0;
assign ls_awsize = (op == 7'b0100011 && funct3 == 3'b000) ? 3'b000 : (op ==  7'b0100011 && funct3 == 3'b001) ? 3'b1 : (op == 7'b0100011 && funct3 == 3'b010) ? 3'b10 : 3'b10;
assign ls_arsize = (op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? 3'b0 : (op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? 3'b1 : (op == 7'b0000011 && funct3 == 3'b010) ? 3'b10 : 3'b10;
assign ls_awlen = (op == 7'b0100011 && funct3 == 3'b000) ? 8'b0 : (op ==  7'b0100011 && funct3 == 3'b001) ? 8'b1 : (op == 7'b0100011 && funct3 == 3'b010) ? 8'b11 : 8'b0;
assign ls_arlen = (op == 7'b0000011 && (funct3 == 3'b000 || funct3 == 3'b100)) ? 8'b0 : (op == 7'b0000011 && (funct3 == 3'b001 || funct3 == 3'b101)) ? 8'b1 : (op == 7'b0000011 && funct3 == 3'b010) ? 8'b11 : 8'b0;
assign ls_awburst = (op == 7'b0100011) ? 2'b01 : 2'b01;
assign ls_arburst = (op == 7'b0000011) ? 2'b01 : 2'b01;
/***J_B_dnpc***/
wire [31:0]pc;
wire [31:0]dnpc;
wire [31:0]offset = imm;
wire jalen,jalren,beqen,bneen,blten,bgeen,bltuen,bgeuen,ecall_en,mret_en;
assign jalen = (op == 7'b1101111) ? 1'b1 : 1'b0;
assign jalren = (op == 7'b1100111) ? 1'b1 : 1'b0;
assign beqen = (op == 7'b1100011 && funct3 == 3'b000 && (r1 == r2));
assign bneen = (op == 7'b1100011 && funct3 == 3'b001 && (r1 != r2));
assign blten = (op == 7'b1100011 && funct3 == 3'b100 && ($signed(r1) < $signed(r2)));
assign bgeen = (op == 7'b1100011 && funct3 == 3'b101 && ($signed(r1) >= $signed(r2)));
assign bltuen = (op == 7'b1100011 && funct3 == 3'b110 && (r1 < r2));
assign bgeuen = (op == 7'b1100011 && funct3 == 3'b111 && (r1 >= r2));
assign ecall_en = (op == 7'b1110011 && offset == 32'd0 && funct3 == 3'b000);
assign mret_en = (op == 7'b1110011 && offset == 32'b1100000010 && funct3 == 3'b000);

assign dnpc = (jalen) ? (pc + offset)	//jal
	: (jalren) ? ((r1 + offset) & ~1) //jalr
	: (beqen) ? (pc + offset)	//beq
	: (bneen) ? (pc + offset)	//bne
	: (blten) ? (pc + offset)	//blt
	: (bgeen) ? (pc + offset)	//bge
	: (bltuen) ? (pc + offset)	//bltu
	:	(bgeuen) ? (pc + offset)	//bgeu
	: (ecall_en) ? mtvec  //ecall
	: (mret_en) ? mepc  //mret
	: pc + 4;

/***riscv32e_regs_controller***/
wire gpr_wen,mepc_wen,mstatus_wen,mcause_wen,mtvec_wen;
assign gpr_wen = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || op == 7'b1100111 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011 || op == 7'b0110011 || op == 7'b0000011) ? 1'b1 : 1'b0;
assign mepc_wen = ((op == 7'b1110011 && imm == 32'd833) || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mstatus_wen = (op == 7'b1110011 && imm == 32'd768) ? 1'b1 : 1'b0;
assign mcause_wen = (op == 7'b1110011 && imm == 32'd834 || (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000)) ? 1'b1 : 1'b0;
assign mtvec_wen = (op == 7'b1110011 && imm == 32'd773) ? 1'b1 : 1'b0;

endmodule
