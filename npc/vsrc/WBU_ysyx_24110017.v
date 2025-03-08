module WBU_ysyx_24110017(clk,rst,
			EXU_VALID,WBU_READY,
			xrd,res,ls_rdata,
			lb_w,lh_w,lw_w,lbu_w,lhu_w,
			o_rf_raddr,rd,l_rd,
			o_rf_wen,gpr_wen,l_wen,
			o_mepc,o_mstatus,o_mcause,o_mtvec,
			w_mepc,w_mstatus,w_mcause,w_mtvec
);
input clk;
input rst;
input EXU_VALID;
output WBU_READY;
output [31:0]xrd;
input [31:0]res,ls_rdata;
input lb_w,lh_w,lw_w,lbu_w,lhu_w;
output [4:0]o_rf_raddr;
input [4:0]rd,l_rd;
output o_rf_wen;
input gpr_wen,l_wen;
input [31:0]o_mepc,o_mstatus,o_mcause,o_mtvec;
output [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

wire EXU_VALID,WBU_READY = 1'b1;
reg wbu_ready;

wire [31:0]xrd;
wire [4:0]o_rf_raddr;
wire o_rf_wen;
wire [31:0]w_mepc,w_mstatus,w_mcause,w_mtvec;

assign xrd = res |
	({32{lb_w}} & {{24{ls_rdata[7]}},(ls_rdata[7:0])}) | //I_lb
	({32{lh_w}} & {{16{ls_rdata[15]}},(ls_rdata[15:0])}) | //I_lh
	({32{lw_w}} & (ls_rdata)) | //I_lw
	({32{lbu_w}} & {24'b0,(ls_rdata[7:0])}) | //I_lbu
	({32{lhu_w}} & {16'b0,(ls_rdata[15:0])}); //I_lhu
assign o_rf_raddr = (rd | l_rd);
assign o_rf_wen = gpr_wen || l_wen;

assign w_mepc = o_mepc;
assign w_mstatus = o_mstatus;
assign w_mcause = o_mcause;
assign w_mtvec = o_mtvec;

endmodule
