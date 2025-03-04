module PCU_ysyx_24110017(clk,rst,pc,dnpc
		PC_VALID,IFU_READY
);
input	clk;
input rst;
output [31:0]pc;
input [31:0]dnpc;

output PC_VALID;
input IFU_READY;
reg pc_valid;
wire IFU_VALID;
wire PC_VALID = pc_valid;


reg [31:0]pc;
wire [31:0]dnpc;

parameter IDLE = 1'b0,WAIT_READY=1'b1;
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
    case (state)
        IDLE: begin
            if(PC_VALID) begin
                next_state = WAIT_READY;
            end
        end
        WAIT_READY: begin
            if(IFU_READY) begin
                next_state = IDLE;
            end
        end
        default: begin
            next_state = IDLE; // 默认回到初始状态
        end
    endcase
end

always @(*) begin
		pc = 32'h80000000;
    case (state)
        IDLE: begin
					if(dnpc >= 32'h80000000) begin
						pc_valid = 1'b1;
					end
        end
        WAIT_READY: begin
					if(IFU_READY) begin
						pc_valid = 1'b0;
						pc = dnpc;
					end
        end
    endcase
end
endmodule
