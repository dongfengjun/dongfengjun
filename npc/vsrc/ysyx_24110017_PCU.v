`define YOSYS_STA
module ysyx_24110017_PCU(
	input  wire				 clk,
	input  wire				 rst,
	input  wire				 isCHazard,
	output reg  [31:0] pc_o,
	input  wire [31:0] dnpc_i,
	input  wire [31:0] snpc_i,
	output wire				 pc_valid_o,
	input  wire				 if_ready_i
);
//
assign pc_valid_o = 1'b1;

always @(posedge clk) begin
	if(rst) begin
		pc_o <= 32'h30000000; //flash
	end
	else begin
		if(isCHazard) pc_o <= dnpc_i;
		else begin
			if(pc_valid_o && if_ready_i) begin
				pc_o <= snpc_i;
			end
		end
`ifndef YOSYS_STA
		if(((pc_o < 32'h30000000) || (pc_o >= 32'h40000000)) 
			&& ((pc_o < 32'h0f000000) || (pc_o >= 32'h0f002000))
			&& ((pc_o < 32'h80000000) || (pc_o >= 32'h84000000))
			&& ((pc_o < 32'ha0000000) || (pc_o >= 32'hc0000000))) begin
			$fwrite(32'h80000002, "Assertion failed: Invalid PC `%xh`\n",pc_o);
      $fatal;
		end
`endif
	end
end

endmodule
