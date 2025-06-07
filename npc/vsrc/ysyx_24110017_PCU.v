module ysyx_24110017_PCU(clk,rst,pc,dnpc,
			PCU_VALID,IFU_READY
);
input	clk;
input rst;
output [31:0]pc;
input [31:0]dnpc;

output PCU_VALID;
input IFU_READY;
reg pcu_valid;
wire IFU_READY;
wire PCU_VALID = pcu_valid;


reg [31:0]pc;
wire [31:0]dnpc;

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
				if(PCU_VALID) begin
					next_state = WAIT_READY;
				end
			end
			WAIT_READY: begin
				if(PCU_VALID && IFU_READY) begin
					next_state = IDLE;
				end
			end
			default: begin
				next_state = IDLE; // 默认回到初始状态
			end
		endcase
	end
end

always @(posedge clk) begin
	if(rst) begin
		pcu_valid <= 1'b0;
		//pc <= 32'h10000000; //mrom
		pc <= 32'h30000000; //flash
	end
	else begin
		case (state)
			IDLE: begin
				if((dnpc >= 32'h30000000) && (dnpc < 32'h40000000)) begin //判断条件
					pcu_valid <= 1'b1;
				end
				if((pc < 32'h30000000) || (pc >= 32'h40000000)) begin
					$fwrite(32'h80000002, "Assertion failed: Invalid PC `%xh`\n",pc);
          $fatal;
				end
			end
			WAIT_READY: begin
				if(PCU_VALID && IFU_READY) begin
					pcu_valid <= 1'b0;
					pc <= dnpc;
				end
			end
		endcase
	end
end

endmodule
