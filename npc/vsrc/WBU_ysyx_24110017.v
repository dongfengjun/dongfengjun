module WBU_ysyx_24110017(clk,rst,
			EXU_VALID,WBU_READY,wbu_done,difftest,
			xrd_reg,res,ls_rdata,
			rd_reg,rd,l_rd,
			wen_reg,gpr_wen,l_wen,
			o_mepc,o_mstatus,o_mcause,o_mtvec,
			w_mepc,w_mstatus,w_mcause,w_mtvec
);
input clk;
input rst;
input EXU_VALID;
output WBU_READY;
output wbu_done;
output difftest;
output [31:0]xrd_reg;
input [31:0]res,ls_rdata;
output [4:0]rd_reg;
input [4:0]rd,l_rd;
output wen_reg;
input gpr_wen,l_wen;
input [31:0]o_mepc,o_mstatus,o_mcause,o_mtvec;
output [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;


wire [31:0]xrd;
wire [4:0]o_rf_raddr;
wire o_rf_wen;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

assign xrd = res | ls_rdata;
assign o_rf_raddr = (rd | l_rd);
assign o_rf_wen = gpr_wen || l_wen;

assign w_mepc = o_mepc;
assign w_mstatus = o_mstatus;
assign w_mcause = o_mcause;
assign w_mtvec = o_mtvec;

wire EXU_VALID,WBU_READY = wbu_ready;
reg wbu_ready;

reg wbu_done;
reg difftest;
reg [31:0]xrd_reg;
reg [4:0]rd_reg;
reg wen_reg;

parameter IDLE = 2'b00,WRITE = 2'b01,DIFF = 2'b10,NULL = 2'b11;
reg [1:0]state,next_state;

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
				if(EXU_VALID && WBU_READY) begin
					next_state = WRITE;
				end
			end
			WRITE: begin
					next_state = DIFF;
			end
			DIFF: begin
				next_state = IDLE;
			end
			default: begin
				next_state = IDLE;
			end
		endcase
	end
end

always @(posedge clk) begin
	if(rst) begin
		wbu_ready <= 1'b0;
		xrd_reg <= 32'h0;
		rd_reg <= 5'b0;
		wen_reg <= 1'b0;
		wbu_done <= 1'b0;
		difftest <= 1'b0;
	end
	else begin
		case (state)
			IDLE: begin
				difftest <= 1'b0;
				if(EXU_VALID) begin //判断条件
					wbu_ready <= 1'b1;
				end
				if(EXU_VALID && WBU_READY) begin
					wbu_ready <= 1'b0;
				end
			end
			WRITE: begin
	      xrd_reg <= xrd;
        rd_reg <= o_rf_raddr;
        wen_reg <= o_rf_wen;
        wbu_done <= 1'b1;
			end
			DIFF: begin
				wbu_done <= 1'b0;
				difftest <= 1'b1;
			end
			NULL: begin
			end
		endcase
	end
end

endmodule
