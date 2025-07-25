module ysyx_24110017_WBU(
	input clk,
	input rst,
	input ex_valid_i,
	output wb_ready_o,
	output wb_done_o,
	output difftest,
	output [31:0]xrd_o,
	input [31:0]ex_i,
	output [4:0]rd_o,
	input [4:0]rd_i,
	output gpr_wen_o,
	input gpr_wen_i,
	input [31:0]mepc_i,mstatus_i,mcause_i,mtvec_i,
	output [31:0]mepc_o,mstatus_o,mcause_o,mtvec_o,
	input mepc_wen_i,mstatus_wen_i,mcause_wen_i,mtvec_wen_i,
	output mepc_wen_o,mstatus_wen_o,mcause_wen_o,mtvec_wen_o
);

reg wb_ready;
assign wb_ready_o = wb_ready;

reg wb_done_reg;
reg difftest_reg;
reg [31:0]xrd_reg;
reg [4:0]rd_reg;
reg gpr_wen_reg;
reg [31:0]mepc_reg,mstatus_reg,mcause_reg,mtvec_reg;
reg mepc_wen_reg,mstatus_wen_reg,mcause_wen_reg,mtvec_wen_reg;
assign wb_done_o = wb_done_reg;
assign difftest = difftest_reg;
assign xrd_o = xrd_reg;
assign rd_o = rd_reg;
assign gpr_wen_o = gpr_wen_reg;
assign mepc_o = mepc_reg;
assign mstatus_o = mstatus_reg;
assign mcause_o = mcause_reg;
assign mtvec_o = mtvec_reg;
assign mepc_wen_o = mepc_wen_reg;
assign mstatus_wen_o = mstatus_wen_reg;
assign mcause_wen_o = mcause_wen_reg;
assign mtvec_wen_o = mtvec_wen_reg;

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
				if(ex_valid_i && wb_ready_o) begin
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
		wb_ready <= 1'b0;
		xrd_reg <= 32'h0;
		rd_reg <= 5'b0;
		gpr_wen_reg <= 1'b0;
		
		mepc_reg <= 32'h0;
		mstatus_reg <= 32'h0;
		mcause_reg <= 32'h0;
		mtvec_reg <= 32'h0;
		mepc_wen_reg <= 1'b0;
		mstatus_wen_reg <= 1'b0;
		mcause_wen_reg <= 1'b0;
		mtvec_wen_reg <= 1'b0;
		
		wb_done_reg <= 1'b0;
		difftest_reg <= 1'b0;
	end
	else begin
		case (state)
			IDLE: begin
				difftest_reg <= 1'b0;
				if(ex_valid_i) begin //判断条件
					wb_ready <= 1'b1;
				end
				if(ex_valid_i && wb_ready_o) begin
					wb_ready <= 1'b0;
				end
			end
			WRITE: begin
	      xrd_reg <= ex_i;
        rd_reg <= rd_i;
        gpr_wen_reg <= gpr_wen_i;

				mepc_reg <= mepc_i;
				mstatus_reg <= mstatus_i;
				mcause_reg <= mcause_i;
				mtvec_reg <= mtvec_i;
				mepc_wen_reg <= mepc_wen_i;
	      mstatus_wen_reg <= mstatus_wen_i;
				mcause_wen_reg <= mcause_wen_i;
		    mtvec_wen_reg <= mtvec_wen_i;
        
				wb_done_reg <= 1'b1;
			end
			DIFF: begin
				wb_done_reg <= 1'b0;
				difftest_reg <= 1'b1;
			end
			NULL: begin
			end
		endcase
	end
end

endmodule
