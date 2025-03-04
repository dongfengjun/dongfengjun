module WBU_ysyx_24110017(clk,rst,
			res,ls_rdata,
			ldone,lbdone,lhdone,lwdone,lbudone,lhudone,
			xrd,
			o_mepc,o_mstatus,o_mcause,o_mtvec,
			w_mepc,w_mstatus,w_mcause,w_mtvec
);
input clk;
input rst;
input [31:0]res,ls_rdata;
input ldone,lbdone,lhdone,lwdone,lbudone,lhudone;
output [31:0]xrd;
input [31:0]o_mepc,o_mstatus,o_mcause,o_mtvec;
output [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

wire [31:0]xrd;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

assign xrd = res |
	({32{lbdone}} & {{24{ls_rdata[7]}},(ls_rdata[7:0])}) | //I_lb
	({32{lhdone}} & {{16{ls_rdata[15]}},(ls_rdata[15:0])}) | //I_lh
	({32{lwdone}} & (ls_rdata)) | //I_lw
	({32{lbudone}} & {24'b0,(ls_rdata[7:0])}) | //I_lbu
	({32{lhudone}} & {16'b0,(ls_rdata[15:0])}); //I_lhu

assign w_mepc = o_mepc;
assign w_mstatus = o_mstatus;
assign w_mcause = o_mcause;
assign w_mtvec = o_mtvec;

endmodule
