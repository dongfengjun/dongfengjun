module EXU_ysyx_24110017(clk,rst,op,sel,imm,funct7,shamt,a,b,csrs,csrs_in,res,rdata,lbdone,lhdone,lwdone,lbudone,lhudone,pc,dnpc);
input clk;
input rst;
input [6:0]op;
input [2:0]sel;
input [31:0]imm;
input [6:0]funct7;
input [4:0]shamt;
input [31:0]a,b;
input [31:0]csrs;
output [31:0]csrs_in;
output [31:0]res;
input [31:0]rdata;
input lbdone,lhdone,lwdone,lbudone,lhudone;
input [31:0]pc;
output [31:0]dnpc;


/***I TYPE***/
/***ALU addi~srai***/
assign res = 
			({32{op == 7'b0010011}} & (
			({32{sel == 3'b000}} & (a + b)) |	//addi
      ({32{sel == 3'b001}} & (a << shamt)) |	//slli
      ({32{sel == 3'b010}} & {31'b0, ($signed(a) < $signed(b))}) |	//slti
	    ({32{sel == 3'b011}} & {31'b0, (a < b)}) |	//sltiu
      ({32{sel == 3'b100}} & (a ^ b)) |	//xori
      ({32{(sel == 3'b101) && (funct7 == 7'b0000000)}} 
					& (a >> shamt)) |	//srli
			({32{(sel == 3'b101) && (funct7 == 7'b0100000)}} 
					& ({{{32{a[31]}}, $signed(a)} >> shamt}[31:0])) |	//srai
      ({32{sel == 3'b110}} & (a | b)) |	//ori
      ({32{sel == 3'b111}} & (a & b)) 	//andi
																	 ))				
																					|
/***R_add~R_remu***/ 
      ({32{op == 7'b0110011}} & (
      ({32{(sel == 3'b000) && (funct7 == 7'b0000000)}} 
					& (a + b)) | //add
			({32{(sel == 3'b000) && (funct7 == 7'b0100000)}} 
					& (a + ((~b)+1))) |	//sub
      ({32{(sel == 3'b001) && (funct7 == 7'b0000000)}}
					& (a << b[4:0])) |  //sll
      ({32{(sel == 3'b010) && (funct7 == 7'b0000000)}}
					& {31'b0, ($signed(a) < $signed(b))}) | //slt
      ({32{(sel == 3'b011) && (funct7 == 7'b0000000)}} 
					& {31'b0,(a < $unsigned(b))}) |  //sltu
      ({32{(sel == 3'b100) && (funct7 == 7'b0000000)}}
					& (a ^ b)) | //xor
      ({32{(sel == 3'b101) && (funct7 == 7'b0000000)}} 
		      & (a >> b[4:0])) | //srl
      ({32{(sel == 3'b101) && (funct7 == 7'b0100000)}}
					&  {{{32{a[31]}}, a} >> b}[31:0] ) | //sra
      ({32{(sel == 3'b110) && (funct7 == 7'b0000000)}}
					& (a | b)) | //or
      ({32{(sel == 3'b111) && (funct7 == 7'b0000000)}}
					& (a & b)) | //and
      ({32{(sel == 3'b000) && (funct7 == 7'b0000001)}}
          & (a * b)) | //mul
      ({32{(sel == 3'b001) && (funct7 == 7'b0000001)}} 
					& {{{32{a[31]}},$signed(a)} * {{32{b[31]}},$signed(b)}}[63:32]) | //mulh
      ({32{(sel == 3'b100) && (funct7 == 7'b0000001)}}
          & ($signed($signed(a) / $signed(b)))) |  //div
      ({32{(sel == 3'b101) && (funct7 == 7'b0000001)}}
          & (a / b)) | //divu
      ({32{(sel == 3'b110) && (funct7 == 7'b0000001)}} 
          & ($signed(a) % $signed(b))) |  //R_rem
      ({32{(sel == 3'b111) && (funct7 == 7'b0000001)}}
          & (a % b)) //R_remui			
																										))
/***I_lb~lhu***/
			|
			({32{lbdone}} 
					& {{24{rdata[7]}},(rdata[7:0])}) | //I_lb
			({32{lhdone}}
          & {{16{rdata[15]}},(rdata[15:0])}) | //I_lh
			({32{lwdone}} 
          & (rdata)) | //I_lw
			({32{lbudone}}
          & {24'b0,(rdata[7:0])}) | //I_lbu
			({32{lhudone}}
          & {16'b0,(rdata[15:0])}) //I_lhu
/***I_csrrw~csrrc***/
			|
			({32{(op == 7'b1110011) && (sel == 3'b001)}}
					& csrs) |	//I_csrrw
			({32{(op == 7'b1110011) && (sel == 3'b010)}}
					& csrs) |	//I_csrrs
			({32{(op == 7'b1110011) && (sel == 3'b000)}}
					& csrs) ;	//I_csrrc

/***csrrw~csrrc***/
assign csrs_in = 
			({32{(op == 7'b1110011) && (sel == 3'b001)}}
          & a) | //I_csrrw
			({32{(op == 7'b1110011) && (sel == 3'b010)}}
          & (csrs | a)) | //I_csrrs
      ({32{(op == 7'b1110011) && (sel == 3'b000)}}
          & (csrs &~a)) ; //I_csrrc

/***load*store*LSU**/
wire [31:0]rdata;
wire lbdone,lhdone,lwdone,lbudone,lhudone;

/***J_B_dnpc***/
wire [31:0]pc;
wire [31:0]dnpc;
wire funct3 = sel;
wire offset = imm;
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

endmodule
