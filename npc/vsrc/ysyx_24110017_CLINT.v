module ysyx_24110017_CLINT(
    input  wire clk,
    input  wire rst,

    output reg	      c_axi_arready,
    input  wire       c_axi_arvalid,
    input  wire [ 3:0]c_axi_arid,
    input  wire [31:0]c_axi_araddr,
    input  wire [ 7:0]c_axi_arlen,
    input  wire [ 2:0]c_axi_arsize,
    input  wire [ 1:0]c_axi_arburst,
    input  wire       c_axi_rready,
    output reg        c_axi_rvalid,
    output wire [ 3:0]c_axi_rid,
    output wire [31:0]c_axi_rdata,
    output wire [ 1:0]c_axi_rresp,
    output wire       c_axi_rlast
);

localparam DEVICE_CLINT_LOW_ADDR = 32'h02000000;
localparam DEVICE_CLINT_HIGH_ADDR = 32'h02000004;

wire[31:0] c_rdata = {32{(c_axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | {32{(c_axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];
assign c_axi_rdata = (c_axi_rvalid) ? c_rdata : 32'h0;

always @(posedge clk) begin
  if(rst) begin
    c_axi_arready <= 1'b0;
    c_axi_rvalid  <= 1'b0;
	end
	else begin
		c_axi_arready <= 1'b1;
		if(c_axi_arvalid && c_axi_arready) begin
			c_axi_rvalid <= 1'b1;
		end
		if(c_axi_rvalid && c_axi_rready) begin
			c_axi_rvalid <= 1'b0;
		end
	end
end

/***基本二进制***
reg [63:0] mtime;
always @(posedge clk) begin
	if(rst) begin
		mtime <= 64'b0;
	end
	else begin
		mtime <= mtime + 1;
	end
end
***/

/***分层次进位***/
// 第一级计数器（最低8位）
wire [64:0]mtime = {counter_out[7], counter_out[6], counter_out[5], counter_out[4],counter_out[3], counter_out[2], counter_out[1], counter_out[0]};
wire [15:0] counter_out [3:0];
wire [3:0] carry_chain;
counter_8bit #(
    .INIT_VALUE(8'h00)
) counter_level0 (
    .clk(clk),
    .rst_n(rst_n),
    .enable(1'b1),
    .count(counter_out[0]),
    .carry_out(carry_chain[0])
);
genvar i;
generate
    for (i = 1; i < 7; i = i + 1) begin : counter_levels
        counter_8bit #(
            .INIT_VALUE(8'h00)
        ) counter (
            .clk(clk),
            .rst_n(rst_n),
            .enable(carry_chain[i-1]),  // 前一级的进位作为使能
            .count(counter_out[i]),
            .carry_out(carry_chain[i])
        );
    end
endgenerate
counter_8bit counter_level7 (
    .clk(clk),
    .rst_n(rst_n),
    .enable(carry_chain[6]),
    .count(counter_out[7]),
    .carry_out(carry_chain[7])
);
endmodule

module counter_8bit (
    input wire clk,
    input wire rst_n,
    input wire enable,
    output reg [7:0] count,
    output wire carry_out
);

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        count <= INIT_VALUE;      // 异步复位到初始值
    end else if (enable) begin
        count <= count + 1'b1;    // 使能时计数
    end
end

assign carry_out = (count == 8'hFF) & enable;

/***行波进位***
wire [63:0] mtime = {mtime63, mtime62, mtime61, mtime60,mtime59, mtime58, mtime57, mtime56,
                     mtime55, mtime54, mtime53, mtime52,mtime51, mtime50, mtime49, mtime48,
                     mtime47, mtime46, mtime45, mtime44,mtime43, mtime42, mtime41, mtime40,
                     mtime39, mtime38, mtime37, mtime36,mtime35, mtime34, mtime33, mtime32,
                     mtime31, mtime30, mtime29, mtime28,mtime27, mtime26, mtime25, mtime24,
                     mtime23, mtime22, mtime21, mtime20,mtime19, mtime18, mtime17, mtime16,
                     mtime15, mtime14, mtime13, mtime12,mtime11, mtime10, mtime9,  mtime8,
                     mtime7,  mtime6,  mtime5,  mtime4,mtime3,  mtime2,  mtime1,  mtime0};

reg mtime0, mtime1, mtime2, mtime3, mtime4, mtime5, mtime6, mtime7,
    mtime8, mtime9, mtime10, mtime11, mtime12, mtime13, mtime14, mtime15,
    mtime16, mtime17, mtime18, mtime19, mtime20, mtime21, mtime22, mtime23,
    mtime24, mtime25, mtime26, mtime27, mtime28, mtime29, mtime30, mtime31,
    mtime32, mtime33, mtime34, mtime35, mtime36, mtime37, mtime38, mtime39,
    mtime40, mtime41, mtime42, mtime43, mtime44, mtime45, mtime46, mtime47,
    mtime48, mtime49, mtime50, mtime51, mtime52, mtime53, mtime54, mtime55,
    mtime56, mtime57, mtime58, mtime59, mtime60, mtime61, mtime62, mtime63;

always @(posedge clk) begin
  if(rst)
    mtime0 <= 1'b0;
  else
    mtime0 <= ~mtime0;
end

always @(posedge rst or negedge mtime0) begin
  if(rst)
    mtime1 <= 1'b0;
  else
    mtime1 <= ~mtime1;
end

always @(posedge rst or negedge mtime1) begin
  if(rst)
    mtime2 <= 1'b0;
  else
    mtime2 <= ~mtime2;
end

always @(posedge rst or negedge mtime2) begin
  if(rst)
    mtime3 <= 1'b0;
  else
    mtime3 <= ~mtime3;
end

always @(posedge rst or negedge mtime3) begin
  if(rst)
    mtime4 <= 1'b0;
  else
    mtime4 <= ~mtime4;
end

always @(posedge rst or negedge mtime4) begin
  if(rst)
    mtime5 <= 1'b0;
  else
    mtime5 <= ~mtime5;
end

always @(posedge rst or negedge mtime5) begin
  if(rst)
    mtime6 <= 1'b0;
  else
    mtime6 <= ~mtime6;
end

always @(posedge rst or negedge mtime6) begin
  if(rst)
    mtime7 <= 1'b0;
  else
    mtime7 <= ~mtime7;
end

always @(posedge rst or negedge mtime7) begin
  if(rst)
    mtime8 <= 1'b0;
  else
    mtime8 <= ~mtime8;
end

always @(posedge rst or negedge mtime8) begin
  if(rst)
    mtime9 <= 1'b0;
  else
    mtime9 <= ~mtime9;
end

always @(posedge rst or negedge mtime9) begin
  if(rst)
    mtime10 <= 1'b0;
  else
    mtime10 <= ~mtime10;
end

always @(posedge rst or negedge mtime10) begin
  if(rst)
    mtime11 <= 1'b0;
  else
    mtime11 <= ~mtime11;
end

always @(posedge rst or negedge mtime11) begin
  if(rst)
    mtime12 <= 1'b0;
  else
    mtime12 <= ~mtime12;
end

always @(posedge rst or negedge mtime12) begin
  if(rst)
    mtime13 <= 1'b0;
  else
    mtime13 <= ~mtime13;
end

always @(posedge rst or negedge mtime13) begin
  if(rst)
    mtime14 <= 1'b0;
  else
    mtime14 <= ~mtime14;
end

always @(posedge rst or negedge mtime14) begin
  if(rst)
    mtime15 <= 1'b0;
  else
    mtime15 <= ~mtime15;
end

always @(posedge rst or negedge mtime15) begin
  if(rst)
    mtime16 <= 1'b0;
  else
    mtime16 <= ~mtime16;
end

always @(posedge rst or negedge mtime16) begin
  if(rst)
    mtime17 <= 1'b0;
  else
    mtime17 <= ~mtime17;
end

always @(posedge rst or negedge mtime17) begin
  if(rst)
    mtime18 <= 1'b0;
  else
    mtime18 <= ~mtime18;
end

always @(posedge rst or negedge mtime18) begin
  if(rst)
    mtime19 <= 1'b0;
  else
    mtime19 <= ~mtime19;
end

always @(posedge rst or negedge mtime19) begin
  if(rst)
    mtime20 <= 1'b0;
  else
    mtime20 <= ~mtime20;
end

always @(posedge rst or negedge mtime20) begin
  if(rst)
    mtime21 <= 1'b0;
  else
    mtime21 <= ~mtime21;
end

always @(posedge rst or negedge mtime21) begin
  if(rst)
    mtime22 <= 1'b0;
  else
    mtime22 <= ~mtime22;
end

always @(posedge rst or negedge mtime22) begin
  if(rst)
    mtime23 <= 1'b0;
  else
    mtime23 <= ~mtime23;
end

always @(posedge rst or negedge mtime23) begin
  if(rst)
    mtime24 <= 1'b0;
  else
    mtime24 <= ~mtime24;
end

always @(posedge rst or negedge mtime24) begin
  if(rst)
    mtime25 <= 1'b0;
  else
    mtime25 <= ~mtime25;
end

always @(posedge rst or negedge mtime25) begin
  if(rst)
    mtime26 <= 1'b0;
  else
    mtime26 <= ~mtime26;
end

always @(posedge rst or negedge mtime26) begin
  if(rst)
    mtime27 <= 1'b0;
  else
    mtime27 <= ~mtime27;
end

always @(posedge rst or negedge mtime27) begin
  if(rst)
    mtime28 <= 1'b0;
  else
    mtime28 <= ~mtime28;
end

always @(posedge rst or negedge mtime28) begin
  if(rst)
    mtime29 <= 1'b0;
  else
    mtime29 <= ~mtime29;
end

always @(posedge rst or negedge mtime29) begin
  if(rst)
    mtime30 <= 1'b0;
  else
    mtime30 <= ~mtime30;
end

always @(posedge rst or negedge mtime30) begin
  if(rst)
    mtime31 <= 1'b0;
  else
    mtime31 <= ~mtime31;
end

always @(posedge rst or negedge mtime31) begin
  if(rst)
    mtime32 <= 1'b0;
  else
    mtime32 <= ~mtime32;
end

always @(posedge rst or negedge mtime32) begin
  if(rst)
    mtime33 <= 1'b0;
  else
    mtime33 <= ~mtime33;
end

always @(posedge rst or negedge mtime33) begin
  if(rst)
    mtime34 <= 1'b0;
  else
    mtime34 <= ~mtime34;
end

always @(posedge rst or negedge mtime34) begin
  if(rst)
    mtime35 <= 1'b0;
  else
    mtime35 <= ~mtime35;
end

always @(posedge rst or negedge mtime35) begin
  if(rst)
    mtime36 <= 1'b0;
  else
    mtime36 <= ~mtime36;
end

always @(posedge rst or negedge mtime36) begin
  if(rst)
    mtime37 <= 1'b0;
  else
    mtime37 <= ~mtime37;
end

always @(posedge rst or negedge mtime37) begin
  if(rst)
    mtime38 <= 1'b0;
  else
    mtime38 <= ~mtime38;
end

always @(posedge rst or negedge mtime38) begin
  if(rst)
    mtime39 <= 1'b0;
  else
    mtime39 <= ~mtime39;
end

always @(posedge rst or negedge mtime39) begin
  if(rst)
    mtime40 <= 1'b0;
  else
    mtime40 <= ~mtime40;
end

always @(posedge rst or negedge mtime40) begin
  if(rst)
    mtime41 <= 1'b0;
  else
    mtime41 <= ~mtime41;
end

always @(posedge rst or negedge mtime41) begin
  if(rst)
    mtime42 <= 1'b0;
  else
    mtime42 <= ~mtime42;
end

always @(posedge rst or negedge mtime42) begin
  if(rst)
    mtime43 <= 1'b0;
  else
    mtime43 <= ~mtime43;
end

always @(posedge rst or negedge mtime43) begin
  if(rst)
    mtime44 <= 1'b0;
  else
    mtime44 <= ~mtime44;
end

always @(posedge rst or negedge mtime44) begin
  if(rst)
    mtime45 <= 1'b0;
  else
    mtime45 <= ~mtime45;
end

always @(posedge rst or negedge mtime45) begin
  if(rst)
    mtime46 <= 1'b0;
  else
    mtime46 <= ~mtime46;
end

always @(posedge rst or negedge mtime46) begin
  if(rst)
    mtime47 <= 1'b0;
  else
    mtime47 <= ~mtime47;
end

always @(posedge rst or negedge mtime47) begin
  if(rst)
    mtime48 <= 1'b0;
  else
    mtime48 <= ~mtime48;
end

always @(posedge rst or negedge mtime48) begin
  if(rst)
    mtime49 <= 1'b0;
  else
    mtime49 <= ~mtime49;
end

always @(posedge rst or negedge mtime49) begin
  if(rst)
    mtime50 <= 1'b0;
  else
    mtime50 <= ~mtime50;
end

always @(posedge rst or negedge mtime50) begin
  if(rst)
    mtime51 <= 1'b0;
  else
    mtime51 <= ~mtime51;
end

always @(posedge rst or negedge mtime51) begin
  if(rst)
    mtime52 <= 1'b0;
  else
    mtime52 <= ~mtime52;
end

always @(posedge rst or negedge mtime52) begin
  if(rst)
    mtime53 <= 1'b0;
  else
    mtime53 <= ~mtime53;
end

always @(posedge rst or negedge mtime53) begin
  if(rst)
    mtime54 <= 1'b0;
  else
    mtime54 <= ~mtime54;
end

always @(posedge rst or negedge mtime54) begin
  if(rst)
    mtime55 <= 1'b0;
  else
    mtime55 <= ~mtime55;
end

always @(posedge rst or negedge mtime55) begin
  if(rst)
    mtime56 <= 1'b0;
  else
    mtime56 <= ~mtime56;
end

always @(posedge rst or negedge mtime56) begin
  if(rst)
    mtime57 <= 1'b0;
  else
    mtime57 <= ~mtime57;
end

always @(posedge rst or negedge mtime57) begin
  if(rst)
    mtime58 <= 1'b0;
  else
    mtime58 <= ~mtime58;
end

always @(posedge rst or negedge mtime58) begin
  if(rst)
    mtime59 <= 1'b0;
  else
    mtime59 <= ~mtime59;
end

always @(posedge rst or negedge mtime59) begin
  if(rst)
    mtime60 <= 1'b0;
  else
    mtime60 <= ~mtime60;
end

always @(posedge rst or negedge mtime60) begin
  if(rst)
    mtime61 <= 1'b0;
  else
    mtime61 <= ~mtime61;
end

always @(posedge rst or negedge mtime61) begin
  if(rst)
    mtime62 <= 1'b0;
  else
    mtime62 <= ~mtime62;
end

always @(posedge rst or negedge mtime62) begin
  if(rst)
    mtime63 <= 1'b0;
  else
    mtime63 <= ~mtime63;
end
***/
endmodule
