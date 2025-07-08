module ysyx_24110017_IDU(clk,rst,
			inst,IFU_VALID,IDU_READY,IDU_VALID,EXU_READY,
			op_reg,rd_reg,funct3_reg,rs1_reg,rs2_reg,imm_reg,funct7_reg,shamt_reg
);
input clk;
input rst;
input [31:0]inst;
input IFU_VALID;
output IDU_READY;
output IDU_VALID;
input EXU_READY;

output [6:0]op_reg;
output [4:0]rd_reg;
output [2:0]funct3_reg;
output [4:0]rs1_reg;
output [4:0]rs2_reg;
output [31:0]imm_reg;
output [6:0]funct7_reg;
output [4:0]shamt_reg;

/***TPYE***/
wire [6:0]op;
wire [4:0]rd;	//R I U J
wire [2:0]funct3;
wire [4:0]rs1;	//R I S B
wire [4:0]rs2;	//R S B
wire [31:0]immI,immU,immS,immB,immJ,imm;
wire [6:0]funct7;	//R
wire [4:0]shamt;	//I shamt
/***分布式控制***/
reg idu_ready;
reg idu_valid;
wire IFU_VALID;
wire IDU_READY = idu_ready;
wire IDU_VALID = idu_valid;
wire EXU_READY;

wire [31:0]inst;
reg [6:0]op_reg;
reg [4:0]rd_reg;
reg [2:0]funct3_reg;
reg [4:0]rs1_reg;
reg [4:0]rs2_reg;
reg [31:0]imm_reg;
reg [6:0]funct7_reg;
reg [4:0]shamt_reg;

parameter IDLE = 1'b0,WAIT_READY = 1'b1;
reg state,next_state;

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
				if(IFU_VALID && IDU_READY) begin
					next_state = WAIT_READY;
				end
			end
			WAIT_READY: begin
				if(IDU_VALID && EXU_READY) begin
					next_state = IDLE;
				end
			end
			default: begin
				next_state = IDLE;
			end
		endcase
	end
end

always @(posedge clk) begin
	if(rst) begin
		idu_valid <= 1'b0;
		idu_ready <= 1'b0;
    op_reg <= 7'b0;
    rd_reg <= 5'b0;
    funct3_reg <= 3'b0;
    rs1_reg <= 5'b0;
    rs2_reg <= 5'b0;
    imm_reg <= 32'h0;
    funct7_reg <= 7'b0;
    shamt_reg <= 5'b0;
	end
	else begin
		case (state)
			IDLE: begin
				if(IFU_VALID) begin //判断条件
					idu_ready <= 1'b1;
				end
				if(IFU_VALID && IDU_READY) begin
					idu_ready <= 1'b0;
					idu_valid <= 1'b1;
				end
			end
			WAIT_READY: begin
				if(IDU_VALID && EXU_READY) begin
					idu_valid <= 1'b0;
					op_reg <= op;
					rd_reg <= rd;
					funct3_reg <= funct3;
					rs1_reg <= rs1;
					rs2_reg <= rs2;
					imm_reg <= imm;
					funct7_reg <= funct7;
					shamt_reg <= shamt;
				end
			end
		endcase
	end
end

/***pattern***/
assign op = inst[6:0];
assign rd = (op == 7'b0110111 || op == 7'b0010111 || op == 7'b1101111 || 
op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111
 || op == 7'b1110011 || op == 7'b0110011) ? inst[11:7] : 5'b0;
assign funct3 = inst[14:12];
assign rs1 = (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011	//I
 || op == 7'b1100011	//B
 || op == 7'b0100011	//S
 || op == 7'b0110011) ? //R
 inst[19:15] : 5'b0;
assign rs2 = (op == 7'b1100011  //B
 || op == 7'b0100011  //S
 || op == 7'b0110011) ? inst[24:20] //R
 : (op == 7'b1110011 && imm == 32'd0 && funct3 == 3'b000) ? 5'd17//5'd15 //ecall
 : 5'b0;
assign funct7 = (op == 7'b0110011 || op == 7'b0010011) ? inst[31:25] : 7'b0;
assign immI = {{20{inst[31]}},inst[31:20]};	//SEXTIimmediate
assign shamt = {inst[24:20]};	//I shamt
assign immU = {inst[31:12],{12{1'b0}}};	//UEXTUimm
assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};	//SEXTSimm
assign immB = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};	//SEXTBimm
assign immJ = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};	//SEXTJimm

assign imm = (op == 7'b0110111 || op == 7'b0010111) ? immU
 : (op == 7'b1101111) ? immJ
 : (op == 7'b1100011) ? immB
 : (op == 7'b0100011) ? immS
 : (op == 7'b1100111 || op == 7'b0000011 || op == 7'b0010011 || op == 7'b0001111 || op == 7'b1110011) ? immI 
 : 32'b0;


/***DPIC*etrace***/
import "DPI-C" function void npc_trap();
always@(*) begin
	if(inst == 32'b00000000000100000000000001110011) begin
		npc_trap();
	end
end
/***DPIC*END***/

endmodule
