module ysyx_24110017_EXU(
	input  wire clk,
	input  wire rst,

	input  wire flush_i,

`ifndef YOSYS_STA
	input  wire [31:0] inst_i,//difftest
	output reg  [31:0] pc_o,
	output reg  [31:0] inst_o,
`endif

	input  wire  id_valid_i,
	output wire  ex_ready_o,
	output wire  ex_valid_o,
	input  wire  ls_ready_i,
	
  input  wire [31:0] pc_i,
  input  wire [31:0] imm_i,
  input  wire [ 4:0] op_i,
  input  wire [ 2:0] funct3_i,
  input  wire [31:0] r1_i,
	input  wire [31:0] r2_i,
	input  wire [ 3:0] rd_i,
	input  wire				 gpr_wen_i,
	input  wire [31:0] mepc_i,mstatus_i,mcause_i,mtvec_i,

	output reg  [ 4:0] op_o,
	output reg  [ 2:0] funct3_o,
	output reg  [ 3:0] rd_o,
	output reg				 gpr_wen_o,
	output reg  [31:0] mepc_o,
  output reg  [31:0] mcause_o,
  output reg  [31:0] csrsw_o,
  output reg  [ 3:0] csrs_wen_o,
	output reg  [31:0] ex_o,
	output reg				 ls_wen_o,ls_ren_o,
	output reg  [31:0] ls_waddr_o,ls_wdata_o,ls_raddr_o,
	output reg  [31:0] dnpc_o
);

/***分布式控制***/
assign ex_ready_o = (state == IDLE);
assign ex_valid_o = (state == WAIT) && (al_done || ex_valid_reg);
reg ex_valid_reg;
parameter IDLE = 1'b0,WAIT = 1'b1;
reg state;

always @(posedge clk) begin
	if(rst) state <= IDLE;
	else if(flush_i) state <= IDLE;
  else begin
		case (state)
			IDLE: state <= (id_valid_i && ex_ready_o) ? WAIT : state;
			WAIT: state <= (ex_valid_o && ls_ready_i) ? IDLE : state;
		endcase
	end
end

always @(posedge clk) begin
	if(rst) ex_valid_reg <= 1'b0;
	else if(flush_i) ex_valid_reg <= 1'b0;
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
always @(posedge clk) begin
	if(rst) begin
`ifndef YOSYS_STA
		pc_o					<= 32'h0;
		inst_o				<= 32'h0;
`endif
		op_o					<= 5'b0;
		funct3_o			<= 3'b0;
		rd_o					<= 4'b0;
		gpr_wen_o			<= 1'b0;
		mepc_o				<= 32'h0;
		mcause_o			<= 32'h0;
		csrsw_o				<= 32'h0;
		csrs_wen_o		<= 4'b0;
		ex_o					<= 32'h0;

		ls_wen_o			<= 1'b0;
		ls_ren_o			<= 1'b0;
		ls_waddr_o		<= 32'h0;
		ls_wdata_o		<= 32'h0;
		ls_raddr_o		<= 32'h0;
		dnpc_o				<= 32'h0;
	end
	else if(flush_i) begin
`ifndef YOSYS_STA
		pc_o          <= 32'h0;
    inst_o        <= 32'h0;
`endif
    op_o          <= 5'b0;
    funct3_o      <= 3'b0;
    rd_o          <= 4'b0;
    gpr_wen_o     <= 1'b0;
    mepc_o        <= 32'h0;
    mcause_o      <= 32'h0;
    csrsw_o       <= 32'h0;
    csrs_wen_o    <= 4'b0;
    ex_o          <= 32'h0;

    ls_wen_o      <= 1'b0;
		ls_ren_o			<= 1'b0;
    ls_waddr_o    <= 32'h0;
    ls_wdata_o    <= 32'h0;
    ls_raddr_o    <= 32'h0;
    dnpc_o        <= 32'h0;
  end
	else begin
		case(state)
			IDLE: begin
		    ls_wen_o      <= 1'b0;
				ls_ren_o			<= 1'b0;
			end
			WAIT: begin
				if(ex_valid_o && ls_ready_i) begin
`ifndef YOSYS_STA
					pc_o					<= pc_i;
					inst_o				<= inst_i;
					op_o          <= op_i;
`endif
					funct3_o      <= funct3_i;
					rd_o          <= rd_i;
					gpr_wen_o     <= gpr_wen_i;
					mepc_o        <= mepc_w;
					mcause_o      <= mcause_w;
					csrsw_o       <= csrs_w;
					csrs_wen_o    <= csrs_wen;
					ex_o          <= ex;

					ls_wen_o      <= ls_valid && ls_wen;
					ls_ren_o			<= ls_valid && !ls_wen;
					ls_waddr_o    <= ls_waddr;
					ls_wdata_o    <= ls_wdata;
					ls_raddr_o    <= ls_raddr;
					dnpc_o				<= dnpc;
				end
			end
		endcase
	end
end

wire al_done;
ysyx_24110017_ALU ALU(clk,rst,a,b,alu_sel,al_res,al_done);

wire [31:0]ex;
assign ex = 
/***I*addi~srai***/
				(op_i == 5'b00100) ? (al_res) :
/***R_add~R_remu***/
				(op_i == 5'b01100) ? (al_res) :
/*********/
				(op_i == 5'b11011) ? pc_i + 4			: //I_jal
				(op_i == 5'b11001) ? pc_i + 4			: //I_jalr
				(op_i == 5'b01101) ? imm_i				: //U_lui
				(op_i == 5'b00101) ? pc_i + imm_i :	//U_auipc
/***CSRU***/
				((op_i == 5'b11100) && ((funct3_i == 3'b001) || (funct3_i == 3'b010) || (funct3_i == 3'b000))) ? csr : //I_csrrw_csrrs_csrrc
				32'h0;

wire[31:0] csr = (op_i == 5'b11100 && imm_i == 32'd833) ? mepc_i
	: (op_i == 5'b11100 && imm_i == 32'd768) ? mstatus_i
	: (op_i == 5'b11100 && imm_i == 32'd834) ? mcause_i
	: (op_i == 5'b11100 && imm_i == 32'd773) ? mtvec_i
	: 32'b0;
wire[31:0] mepc_w = (op_i == 5'b11100 && imm_i == 32'd0 && funct3_i == 3'b000) ? pc_i : csrs_w; //ecall
wire[31:0] mstatus_w = csrs_w;
wire[31:0] mcause_w = (op_i == 5'b11100 && imm_i == 32'd0 && funct3_i == 3'b000) ? r2_i : csrs_w; //ecall a5
wire[31:0] mtvec_w = csrs_w;
wire[31:0] csrs_w = 
			({32{(op_i == 5'b11100) && (funct3_i == 3'b001)}} & r1_i) | //I_csrrw
			({32{(op_i == 5'b11100) && (funct3_i == 3'b010)}} & (csr |  r1_i)) | //I_csrrs
      ({32{(op_i == 5'b11100) && (funct3_i == 3'b000)}} & (csr & ~r1_i)) ; //I_csrrc
wire [3:0] csrs_wen = {
    (op_i == 5'b11100 && imm_i == 32'd773),
    (op_i == 5'b11100 && (imm_i == 32'd834 || (imm_i == 32'd0 && funct3_i == 3'b000))),
    (op_i == 5'b11100 && imm_i == 32'd768),
    (op_i == 5'b11100 && (imm_i == 32'd833 || (imm_i == 32'd0 && funct3_i == 3'b000)))
};

/***ALU***/
wire [6:0]funct7_i = imm_i[11:5];
wire [4:0]shamt_i  = imm_i[4:0];
wire [3:0]alu_sel;
wire [31:0]a,b;
assign a = 
	((op_i == 5'b00100) && (funct3_i == 3'b000 || funct3_i == 3'b001 || funct3_i == 3'b011 || funct3_i == 3'b100 || funct3_i == 3'b101 || funct3_i == 3'b110 || funct3_i == 3'b111)) ? r1_i
	: ((op_i == 5'b01100) && ((funct3_i == 3'b000 && funct7_i == 7'b0000000) || (funct3_i == 3'b000 && funct7_i == 7'b0100000) || (funct3_i == 3'b001 && funct7_i == 7'b0000000) || (funct3_i == 3'b011 && funct7_i == 7'b0000000) || (funct3_i == 3'b100 && funct7_i == 7'b0000000) || (funct3_i == 3'b101 && funct7_i == 7'b0000000) || (funct3_i == 3'b101 && funct7_i == 7'b0100000) || (funct3_i == 3'b110 && funct7_i == 7'b0000000) || (funct3_i == 3'b111 && funct7_i == 7'b0000000) || (funct3_i == 3'b000 && funct7_i == 7'b0000001) || (funct3_i == 3'b101 && funct7_i == 7'b0000001) || (funct3_i == 3'b111 && funct7_i == 7'b0000001))) ? r1_i
	: ((op_i == 5'b00100 && funct3_i == 3'b010)) ? $signed(r1_i)
	: (((op_i == 5'b01100) && ((funct3_i == 3'b010 && funct7_i == 7'b0000000) || (funct3_i == 3'b001 && funct7_i == 7'b0000001) || (funct3_i == 3'b100 && funct7_i == 7'b0000001) || (funct3_i == 3'b110 && funct7_i == 7'b0000001)))) ? $signed(r1_i)
	: 32'b0;
assign b = ((op_i == 5'b00100) && (funct3_i == 3'b000 || funct3_i == 3'b001 || funct3_i == 3'b011 || funct3_i == 3'b100 || funct3_i == 3'b110 || funct3_i == 3'b111)) ? imm_i
	: ((op_i == 5'b00100) && (funct3_i == 3'b010)) ? $signed(imm_i)
	: ((op_i == 5'b00100) && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? {27'b0,shamt_i}
	: ((op_i == 5'b01100) && ((funct3_i == 3'b000 && funct7_i == 7'b0000000) || (funct3_i == 3'b000 && funct7_i == 7'b0100000) || (funct3_i == 3'b011 && funct7_i == 7'b0000000) || (funct3_i == 3'b100 && funct7_i == 7'b0000000) || (funct3_i == 3'b110 && funct7_i == 7'b0000000) || (funct3_i == 3'b111 && funct7_i == 7'b0000000) || (funct3_i == 3'b000 && funct7_i == 7'b0000001) || (funct3_i == 3'b101 && funct7_i == 7'b0000001) || (funct3_i == 3'b111 && funct7_i == 7'b0000001))) ? r2_i
	: ((op_i == 5'b01100 && ((funct3_i == 3'b001 && funct7_i == 7'b0000000) || (funct3_i == 3'b101 && funct7_i == 7'b0000000) || (funct3_i == 3'b101 && funct7_i == 7'b0100000)))) ? {27'b0,r2_i[4:0]}
	: ((op_i == 5'b01100) && ((funct3_i == 3'b010 && funct7_i == 7'b0000000) || (funct3_i == 3'b001 && funct7_i == 7'b0000001) || (funct3_i == 3'b100 && funct7_i == 7'b0000001) || (funct3_i == 3'b110 && funct7_i == 7'b0000001))) ? $signed(r2_i)
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
assign alu_sel =  ((op_i == 5'b00100 && funct3_i == 3'b000) || (op_i == 5'b01100 && funct3_i == 3'b000 && funct7_i == 7'b0000000)) ? ADD :
							(op_i == 5'b01100 && funct3_i == 3'b000 && funct7_i == 7'b0100000) ? SUB :
						  ((op_i == 5'b00100 && funct3_i == 3'b001) || (op_i == 5'b01100 && (funct3_i == 3'b001 && funct7_i == 7'b0000000))) ? SLL :
							((op_i == 5'b00100 &&(funct3_i == 3'b010 || funct3_i == 3'b011)) || (op_i == 5'b01100 && ((funct3_i == 3'b010 && funct7_i == 7'b0000000) || (funct3_i == 3'b011 && funct7_i == 7'b0000000)))) ? SLT :
							((op_i == 5'b00100 && funct3_i == 3'b100) || (op_i == 5'b01100 && (funct3_i == 3'b100 && funct7_i == 7'b0000000))) ? XOR :
							((op_i == 5'b00100 && funct3_i == 3'b101 && funct7_i == 7'b0000000) || (op_i == 5'b01100 && funct3_i == 3'b101 && funct7_i == 7'b0000000)) ? SRL :
							((op_i == 5'b00100 && funct3_i == 3'b101 && funct7_i == 7'b0100000) || (op_i == 5'b01100 && funct3_i == 3'b101 && funct7_i == 7'b0100000)) ? SRA :
							((op_i == 5'b00100 && funct3_i == 3'b110) || (op_i == 5'b01100 && funct3_i == 3'b110 && funct7_i == 7'b0000000)) ? OR :
							((op_i == 5'b00100 && funct3_i == 3'b111) || (op_i == 5'b01100 && funct3_i == 3'b111 && funct7_i == 7'b0000000)) ? AND :
							(op_i == 5'b01100 && funct3_i == 3'b000 && funct7_i == 7'b0000001) ? MUL :
							(op_i == 5'b01100 && funct3_i == 3'b001 && funct7_i == 7'b0000001) ? MULH :
							(op_i == 5'b01100 && ((funct3_i == 3'b100 && funct7_i == 7'b0000001) || (funct3_i == 3'b101 && funct7_i == 7'b0000001))) ? DIV :
							(op_i == 5'b01100 && ((funct3_i == 3'b110 && funct7_i == 7'b0000001) || (funct3_i == 3'b111 && funct7_i == 7'b0000001))) ? REM
							: 4'b1111;

/***LSU***/
wire ls_valid = (op_i == 5'b00000 || op_i == 5'b01000);
wire ls_wen = (op_i == 5'b01000);
wire [31:0]ls_addr  = r1_i + offset;
wire [31:0]ls_waddr = (op_i == 5'b01000) ? ls_addr : 32'h0;
wire [31:0]ls_wdata = (op_i == 5'b01000) ? ((ls_waddr[1:0] == 0) ? r2_i : (ls_waddr[1:0] == 1) ? {r2_i[23:0],8'b0} : (ls_waddr[1:0] == 2) ? {r2_i[15:0],16'b0} : (ls_waddr[1:0] == 3) ? {r2_i[7:0],24'b0} : 32'h0) : 32'h0;
wire [3:0]ls_wmask = ((ls_waddr[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0001
 : ((ls_waddr[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b001) ? 4'b0011
 : ((ls_waddr[1:0] == 0) && op_i == 5'b01000 && funct3_i == 3'b010) ? 4'b1111
 : ((ls_waddr[1:0] == 1) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0010
 : ((ls_waddr[1:0] == 2) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b0100 
 : ((ls_waddr[1:0] == 2) && op_i == 5'b01000 && funct3_i == 3'b001) ? 4'b1100 
 : ((ls_waddr[1:0] == 3) && op_i == 5'b01000 && funct3_i == 3'b000) ? 4'b1000 
 : 4'b0;
wire [31:0]ls_raddr = (op_i == 5'b00000) ? ls_addr : 32'h0;
wire [ 2:0]ls_awsize = (op_i == 5'b01000 && funct3_i == 3'b000) ? 3'b000 : (op_i ==  5'b01000 && funct3_i == 3'b001) ? 3'b1 : (op_i == 5'b01000 && funct3_i == 3'b010) ? 3'b10 : 3'b10;
wire [2:0]ls_arsize = (op_i == 5'b00000 && (funct3_i == 3'b000 || funct3_i == 3'b100)) ? 3'b0 : (op_i == 5'b00000 && (funct3_i == 3'b001 || funct3_i == 3'b101)) ? 3'b1 : (op_i == 5'b00000 && funct3_i == 3'b010) ? 3'b10 : 3'b10;

/***BU***/
wire [31:0]offset = imm_i;
wire jalen,jalren,beqen,bneen,blten,bgeen,bltuen,bgeuen,ecall_en,mret_en;
assign jalen = (op_i == 5'b11011) ? 1'b1 : 1'b0;
assign jalren = (op_i == 5'b11001) ? 1'b1 : 1'b0;
assign beqen = (op_i == 5'b11000 && funct3_i == 3'b000 && (r1_i == r2_i));
assign bneen = (op_i == 5'b11000 && funct3_i == 3'b001 && (r1_i != r2_i));
assign blten = (op_i == 5'b11000 && funct3_i == 3'b100 && ($signed(r1_i) < $signed(r2_i)));
assign bgeen = (op_i == 5'b11000 && funct3_i == 3'b101 && ($signed(r1_i) >= $signed(r2_i)));
assign bltuen = (op_i == 5'b11000 && funct3_i == 3'b110 && (r1_i < r2_i));
assign bgeuen = (op_i == 5'b11000 && funct3_i == 3'b111 && (r1_i >= r2_i));
assign ecall_en = (op_i == 5'b11100 && offset == 32'd0 && funct3_i == 3'b000);
assign mret_en = (op_i == 5'b11100 && offset == 32'b1100000010 && funct3_i == 3'b000);

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

    localparam IDLE     = 1'b0;
    localparam EXECUTE = 1'b1;

    reg state;
    reg [63:0] shared_result;
    reg [5:0] shared_counter;
    reg [31:0] opA_reg, opB_reg;
    reg [1:0] current_op;
    
    wire [31:0] imm_res = 
        (opcode == OP_ADD) ? (a + b) :
        (opcode == OP_SUB) ? (a - b) :
        (opcode == OP_SLL) ? (a << b[4:0]) : 
        (opcode == OP_SRL) ? (a >> b[4:0]) : 
        (opcode == OP_SRA) ? ($signed(a) >>> b[4:0]) : 
        (opcode == OP_SLT) ? {31'b0, $signed(a) < $signed(b)} : 
        (opcode == OP_AND) ? (a & b) : 
        (opcode == OP_OR)  ? (a | b) : 
        (opcode == OP_XOR) ? (a ^ b) : 32'b0;
    
    wire [31:0] multi_cycle_res =
        (current_op[1:0] == 3'b00) ? shared_result[31:0] :
        (current_op[1:0] == 3'b10) ? shared_result[63:32] :
        (current_op[1:0] == 3'b11) ? shared_result[31:0] :
        (current_op[1:0] == 3'b10) ? shared_result[63:32] :
        32'b0;
    
    assign res = (state == IDLE) ? imm_res : multi_cycle_res;
    assign done = (state == IDLE) || (shared_counter == 6'd32 && state == EXECUTE);
    
    localparam OP_TYPE_MUL   = 2'b00;
    localparam OP_TYPE_MULH  = 2'b01;
    localparam OP_TYPE_DIV   = 2'b11;
    localparam OP_TYPE_REM   = 2'b10;
    
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            shared_result <= 64'b0;
            shared_counter <= 6'b0;
            opA_reg <= 32'b0;
            opB_reg <= 32'b0;
            current_op <= 2'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (opcode == OP_MUL || opcode == OP_MULH || opcode == OP_DIV || opcode == OP_REM) begin
                        state <= EXECUTE;
                        shared_counter <= 6'b0;
                        opA_reg <= a;
                        opB_reg <= b;
                        
                        case (opcode)
                            OP_MUL:  current_op <= OP_TYPE_MUL;
                            OP_MULH: current_op <= OP_TYPE_MULH;
                            OP_DIV:  current_op <= OP_TYPE_DIV;
                            OP_REM:  current_op <= OP_TYPE_REM;
                            default: current_op <= 2'b0;
                        endcase
                        
                        if (opcode == OP_MUL || opcode == OP_MULH) begin
                            shared_result <= {32'b0, b};
                        end else if (opcode == OP_DIV || opcode == OP_REM) begin
                            shared_result <= {a, 32'b0};
                        end
                    end
                end
                
                EXECUTE: begin
                    if (shared_counter < 32) begin
                        shared_counter <= shared_counter + 1;
                        
                        if (current_op == OP_TYPE_MUL || current_op == OP_TYPE_MULH) begin
                            if (shared_result[0]) begin
                                shared_result[63:32] <= shared_result[63:32] + opA_reg;
                            end
                            shared_result <= {1'b0, shared_result[63:1]};
                        end else begin
                            if (shared_result[63:32] >= opB_reg) begin
                                shared_result[63:32] <= shared_result[63:32] - opB_reg;
                                shared_result <= {shared_result[62:0], 1'b1};
                            end else begin
                                shared_result <= {shared_result[62:0], 1'b0};
                            end
                        end
                    end else begin
                        state <= IDLE;
                        shared_counter <= 6'b0;
                    end
                end
            endcase
        end
    end

endmodule
