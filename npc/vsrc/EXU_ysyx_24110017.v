module EXU_ysyx_24110017(a,b,sel,op,funct7,shamt,offset,r1,r2,res);
input [31:0] a,b;
input [2:0] sel;
input [6:0] op;
input [6:0] funct7;
input [4:0] shamt;
input [31:0] offset;
input [31:0] r1;
input [31:0] r2;
output [31:0] res;


wire [4:0]shn;
assign shn = b[4:0];
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
			({32{(sel == 3'b101) && (funct7 == 7'b0100000)}}) 
					& (a >>> shamt) |	//srai
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
					& (a << b)) |  //sll
      ({32{(sel == 3'b010) && (funct7 == 7'b0000000)}}
					& {31'b0, ($signed(a) < $signed(b))}) | //slt
      ({32{(sel == 3'b011) && (funct7 == 7'b0000000)}} 
					& {31'b0,(a < $unsigned(b))}) |  //sltu
      ({32{(sel == 3'b100) && (funct7 == 7'b0000000)}}
					& (a ^ b)) | //xor
      ({32{(sel == 3'b101) && (funct7 == 7'b0000000)}} 
		      & (a >> b)) | //srl
      ({32{(sel == 3'b101) && (funct7 == 7'b0100000)}}
					& ($signed(a) >> $signed(b)) ) | //sra
      ({32{(sel == 3'b110) && (funct7 == 7'b0000000)}}
					& (a | b)) | //or
      ({32{(sel == 3'b111) && (funct7 == 7'b0000000)}}
					& (a & b)) | //and
      ({32{(sel == 3'b000) && (funct7 == 7'b0000001)}}
          & (a * b)) | //mul
      ({32{(sel == 3'b001) && (funct7 == 7'b0000001)}} 
          & {{32'b0,$signed(a)} * {32'b0,$signed(b)} >>> 32}[31:0]) | //mulh
      ({32{(sel == 3'b100) && (funct7 == 7'b0000001)}}
          & ($signed(a) / $signed(b))) |  //div
      ({32{(sel == 3'b101) && (funct7 == 7'b0000001)}}
          & (a / b)) | //divu
      ({32{(sel == 3'b110) && (funct7 == 7'b0000001)}} 
          & ($signed(a) % $signed(b))) |  //R_rem
      ({32{(sel == 3'b111) && (funct7 == 7'b0000001)}}
          & (a % b)) //R_remui			
																										))
/***I_lb~lhu***/
			|
			({32{(op == 7'b0000011) && (sel == 3'b000)}} 
					& {{24{rdata[7]}},(rdata[7:0])}) | //I_lb
			({32{(op == 7'b0000011) && (sel == 3'b001)}}
          & {{16{rdata[15]}},(rdata[15:0])}) | //I_lw
			({32{(op == 7'b0000011) && (sel == 3'b010)}} 
          & (rdata)) | //I_lw
			({32{(op == 7'b0000011) && (sel == 3'b100)}}
          & {24'b0,(rdata[7:0])}) | //I_lbu
			({32{(op == 7'b0000011) && (sel == 3'b0)}}
          & {16'b0,(rdata[15:0])}); //I_lhu

/***sw sh***/
wire [31:0]raddr;
reg [31:0]rdata;
wire valid,wen;
wire [31:0]waddr, wdata;
wire [7:0]wmask;

import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

assign valid = (op == 7'b0100011 || op == 7'b0000011) ? 1'b1 : 1'b0;
assign wen = (op == 7'b0100011) ? 1'b1 : 1'b0;
assign waddr = (op == 7'b0100011) ? (r1 + offset) : 32'h80000000;
assign wdata = (op == 7'b0100011) ? r2 : 32'b0;
assign wmask = (op == 7'b0100011 && sel == 3'b000) ? 8'b00000001
 : (op == 7'b0100011 && sel == 3'b001) ? 8'b00000011
 : (op == 7'b0100011 && sel == 3'b010) ? 8'b00001111
 : 8'b0;
assign raddr = (op == 7'b0000011) ? (r1 + offset) : 32'h80000000; //lb~lhu

always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(raddr);
    if (wen) begin // 有写请求时
      pmem_write(waddr, wdata, wmask);
    end
  end
  else begin
    rdata = 0;
  end
end
endmodule
