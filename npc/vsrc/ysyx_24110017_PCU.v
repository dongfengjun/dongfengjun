`include "defines.v"
module ysyx_24110017_PCU(
	input clk,
	input rst,
	output [31:0]	pc_o,
	input [31:0] dnpc_i,
	output pc_valid_o,
	input if_ready_i
);

reg pc_valid_reg;
assign pc_valid_o = pc_valid_reg;
reg [31:0]pc_reg;
assign pc_o = pc_reg;

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
				if(pc_valid_o) begin
					next_state = WAIT_READY;
				end
			end
			WAIT_READY: begin
				if(pc_valid_o && if_ready_i) begin
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
		pc_valid_reg <= 1'b0;
		//pc <= 32'h10000000; //mrom
		pc_reg <= 32'h30000000; //flash
	end
	else begin
		case (state)
			IDLE: begin
				if(((dnpc_i >= 32'h30000000) && (dnpc_i < 32'h40000000))
					 || ((dnpc_i >= 32'h0f000000) && (dnpc_i < 32'h0f002000))
					 || ((dnpc_i >= 32'h80000000) && (dnpc_i < 32'h84000000))
					 || ((dnpc_i >= 32'ha0000000) && (dnpc_i < 32'hc0000000))) begin 
					pc_valid_reg <= 1'b1;
				end
				if(((pc_o < 32'h30000000) || (pc_o >= 32'h40000000)) 
					&& ((pc_o < 32'h0f000000) || (pc_o >= 32'h0f002000))
					&& ((pc_o < 32'h80000000) || (pc_o >= 32'h84000000))
					&& ((pc_o < 32'ha0000000) || (pc_o >= 32'hc0000000))) begin
`ifndef YOSYS_STA
					$fwrite(32'h80000002, "Assertion failed: Invalid PC `%xh`\n",pc_o);
          $fatal;
`endif
				end
			end
			WAIT_READY: begin
				if(pc_valid_o && if_ready_i) begin
					pc_valid_reg <= 1'b0;
					pc_reg <= dnpc_i;
				end
			end
		endcase
	end
end

endmodule
