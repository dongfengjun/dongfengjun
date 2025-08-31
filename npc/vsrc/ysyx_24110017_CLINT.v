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
//reg [63:0] mtime;
wire [63:0] mtime = {47'b0,q,p,o,n,m,l,k,j,i,h,g,f,e,d,c,b,a};

/***
always @(posedge clk) begin
	if(rst) begin
		mtime <= 64'b0;
	end
	else begin
		mtime <= mtime + 1;
	end
end
***/
reg a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
always @(posedge clk) begin
    if(rst)
      a <= 1'b0;
    else
      a <= ~a;
end
always @(posedge rst or negedge a) begin
  if(rst)
    b <= 1'b0;
  else
    b <= ~b;
end
always @(posedge rst or negedge b) begin
  if(rst)
    c <= 1'b0;
  else
    c <= ~c;
end
always @(posedge rst or negedge c) begin
	if(rst)
		d <= 1'b0;
	else
		d <= ~d;
	end
always @(posedge rst or negedge d) begin
	if(rst)
		e <= 1'b0;
	else
		e <= ~e;
	end
always @(posedge rst or negedge e) begin
	if(rst)
		f <= 1'b0;
	else
		f <= ~f;
end
always @(posedge rst or negedge f) begin
	if(rst)
		g <= 1'b0;
	else
		g <= ~g;
	end
always @(posedge rst or negedge g) begin
	if(rst)
		h <= 1'b0;
	else
		h <= ~h;
	end
always @(posedge rst or negedge h) begin
  if(rst)
    i <= 1'b0;
  else
    i <= ~i;
end
always @(posedge rst or negedge i) begin
  if(rst)
    j <= 1'b0;
  else
    j <= ~j;
end
always @(posedge rst or negedge j) begin
  if(rst)
    k <= 1'b0;
  else
    k <= ~k;
end
always @(posedge rst or negedge k) begin
  if(rst)
    l <= 1'b0;
  else
    l <= ~l;
end
always @(posedge rst or negedge l) begin
  if(rst)
    m <= 1'b0;
  else
    m <= ~m;
end
always @(posedge rst or negedge m) begin
  if(rst)
    n <= 1'b0;
  else
    n <= ~n;
end
always @(posedge rst or negedge n) begin
  if(rst)
    o <= 1'b0;
  else
    o <= ~o;
end
always @(posedge rst or negedge o) begin
  if(rst)
    p <= 1'b0;
  else
    p <= ~p;
end
always @(posedge rst or negedge p) begin
  if(rst)
    q <= 1'b0;
  else
    q <= ~q;
end

wire[31:0] c_rdata = {32{(c_axi_araddr == DEVICE_CLINT_LOW_ADDR)}} & mtime[31:0] | {32{(c_axi_araddr == DEVICE_CLINT_HIGH_ADDR)}} & mtime[63:32];
assign c_axi_rdata = (c_axi_rvalid && c_axi_rready) ? c_rdata : 32'h0;

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

endmodule
