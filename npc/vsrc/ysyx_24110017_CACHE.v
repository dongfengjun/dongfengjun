//`define YOSYS_STA
module ysyx_24110017_CACHE #(n = 4, m = 2, w = 3) (
	input clk,
	input rst,
	output wire m_axi_awready,
	input wire m_axi_awvalid,
	input wire [3:0]m_axi_awid,
	input wire [31:0]m_axi_awaddr,
	input wire [7:0]m_axi_awlen,
	input wire [2:0]m_axi_awsize,
	input wire [1:0]m_axi_awburst, 
	output wire m_axi_wready,
	input wire m_axi_wvalid,
	input wire [31:0]m_axi_wdata,
	input wire [3:0]m_axi_wstrb,
	input wire m_axi_wlast,
	input wire m_axi_bready,
	output wire m_axi_bvalid,
	output wire [3:0]m_axi_bid,
	output wire [1:0]m_axi_bresp,

	output reg m_axi_arready,
	input wire m_axi_arvalid,
	input wire [3:0]m_axi_arid,
	input wire [31:0]m_axi_araddr,
	input wire [7:0]m_axi_arlen,
	input wire [2:0]m_axi_arsize,
	input wire [1:0]m_axi_arburst,
	input wire m_axi_rready,
	output reg m_axi_rvalid,
	output wire [3:0]m_axi_rid,
	output reg [31:0]m_axi_rdata,
	output wire [1:0]m_axi_rresp,
	output wire m_axi_rlast,

	input wire s_axi_awready,
	output wire s_axi_awvalid,
	output wire [3:0]s_axi_awid,
	output wire [31:0]s_axi_awaddr,
	output wire [7:0]s_axi_awlen,
	output wire [2:0]s_axi_awsize,
	output wire [1:0]s_axi_awburst,
	input wire s_axi_wready,
	output wire s_axi_wvalid,
	output wire [31:0]s_axi_wdata,
	output wire [3:0]s_axi_wstrb,
	output wire s_axi_wlast,
	output wire s_axi_bready,
	input wire s_axi_bvalid,
	input wire [3:0]s_axi_bid,
	input wire [1:0]s_axi_bresp,

	input wire s_axi_arready,
	output reg s_axi_arvalid,
	output wire [3:0]s_axi_arid,
	output reg [31:0]s_axi_araddr,
	output reg [7:0]s_axi_arlen,
	output reg [2:0]s_axi_arsize,
	output reg [1:0]s_axi_arburst,
	output reg s_axi_rready,
	input wire s_axi_rvalid,
	input wire [3:0]s_axi_rid,
	input wire [31:0]s_axi_rdata,
	input wire [1:0]s_axi_rresp,
	input wire s_axi_rlast
);

	wire[127:0]cache_test0,cache_test1,cache_test2,cache_test3;
	assign cache_test0 = {cache_reg[0][0],cache_reg[1][0],cache_reg[2][0],cache_reg[3][0]};
	assign cache_test1 = {cache_reg[0][1],cache_reg[1][1],cache_reg[2][1],cache_reg[3][1]};
	assign cache_test2 = {cache_reg[0][2],cache_reg[1][2],cache_reg[2][2],cache_reg[3][2]};
	assign cache_test3 = {cache_reg[0][3],cache_reg[1][3],cache_reg[2][3],cache_reg[3][3]};

	reg [31:0] cache_reg [(1<<(m-2))-1 : 0][(1<<n)-1 : 0];
  reg [31-m-n+w : 0] tag_reg [(1<<(m-2))-1 : 0][(1<<n)-1 : 0];
  reg [(1<<n)-1 : 0] valid_reg[(1<<(m-2))-1 : 0];
	wire [31-m-n+w : 0]tag = m_axi_araddr[31 : m+n-w];
  wire [n-1-w : 0]index = m_axi_araddr[m+n-w-1 : m];
  wire [m-3 : 0]offset = m_axi_araddr[m-1 : 2];

  wire [(1<<w) - 1 : 0]access;
	assign access[0] = (tag == tag_reg[offset][index * (1<<w)]) && (valid_reg[offset][index * (1<<w)]);
	generate 
    genvar i; 
      for(i = 1; i < (1<<w); i = i + 1) begin : comparator
        wire flag = (access[i - 1:0] == 0);
				assign access[i] = (tag == tag_reg[offset][index * (1<<w) + i]) && (valid_reg[offset][index * (1<<w) + i]) && flag;
			end
	endgenerate

	localparam IDLE = 2'b00;
  localparam TRANS = 2'b01;
  localparam RETURN = 2'b10;
  reg [1:0]state;

  always @(posedge clk or posedge rst) begin
    if(rst) state <= IDLE;
    else begin
      case(state)
        IDLE   : begin
          if(m_axi_arvalid) begin
						if(access != 0) begin
							state <= RETURN;
						end
						else begin
							state <= TRANS;
						end
					end
				end
				TRANS  : begin
					if(m_axi_rready && m_axi_rvalid) begin
						state <= IDLE;
					end
				end
				RETURN : begin
					if(m_axi_rready && m_axi_rvalid) begin
						state <= IDLE;
					end
				end
				default: begin
					state <= state;
				end
			endcase
		end
	end

	reg [m-3 : 0]burst_counter;
	reg [31:0] burst_araddr;
	always @(posedge clk or posedge rst) begin
		if(rst) begin
      integer j;
			integer k;
			for (j = 0; j < (1<<(m-2)); j = j + 1) begin : init_reg
				for (k = 0; k < (1 << n); k = k + 1) begin
					cache_reg[j][k]	<= 0;
					tag_reg[j][k]		<= 0;
				end
				valid_reg[j]      <= 0;
			end
		end
		else begin
			case(state)
				IDLE	 : begin
					if(m_axi_arvalid && !m_axi_arready) begin
						m_axi_arready <= 1'b1;
          end
				end
				TRANS  : begin
					if(m_axi_arvalid && m_axi_arready) begin
						m_axi_arready <= 1'b0;
						s_axi_arvalid <= 1'b1;
						s_axi_araddr <= m_axi_araddr;
						burst_araddr <= m_axi_araddr;
						s_axi_arburst <= 2'b01;
						if(m_axi_araddr - 32'ha0000000 < 32'h20000000) begin
							s_axi_arlen <= (1 << (m - 2)) - {6'b0,offset} - 1;
						end
						else begin
							s_axi_arlen <= 8'h0;
						end
						s_axi_arsize <= 3'h2;
					end
					if(s_axi_arvalid && s_axi_arready) begin
						integer a;
            integer b;
						for (b = 0; b < (1<<(m-2)); b = b + 1) begin : fifo
							cache_reg[b][index * (1<<w)] <= 0;
              tag_reg[b][index * (1<<w)] <= 0;
							valid_reg[b][index * (1<<w)] <= 0;
							for (a = 1; a < (1<<w); a = a + 1) begin
                cache_reg[b][index * (1<<w) + a] <= cache_reg[b][index * (1<<w) + a - 1];
                tag_reg[b][index * (1<<w) + a] <= tag_reg[b][index * (1<<w) + a - 1];
                valid_reg[b][index * (1<<w) + a] <= valid_reg[b][index * (1<<w) + a - 1];
              end
            end
						s_axi_arvalid <= 1'b0;
						s_axi_rready <= 1'b1;                                           
            burst_counter <= offset;
					end
					if(s_axi_rready && s_axi_rvalid) begin
						cache_reg[burst_counter][index * (1<<w)] <= s_axi_rdata;
						tag_reg[burst_counter][index * (1<<w)] <= {burst_araddr}[31 : m+n-w];
						valid_reg[burst_counter][index * (1<<w)] <= 1'b1;
						burst_araddr <= burst_araddr + 4;
						burst_counter <= burst_counter + 1;
					end
					if(s_axi_rlast) begin
						s_axi_arvalid <=1'b0;
						s_axi_araddr <= 32'h0;
						s_axi_arsize <= 3'b0;
						s_axi_rready <= 1'b0;
						m_axi_rvalid <= 1'b1;
						burst_counter <= 0;
						if(s_axi_arlen == 8'b0) begin
							m_axi_rdata <= s_axi_rdata;
						end
						else begin
							m_axi_rdata <= cache_reg[offset][index * (1 << w)];
						end
					end
					if(m_axi_rvalid && m_axi_rready) begin
						m_axi_rvalid <= 1'b0;
					end
				end
				RETURN : begin
					if(m_axi_arvalid && m_axi_arready) begin
						m_axi_rvalid <= 1'b1;
						m_axi_arready <= 1'b0;
`ifndef YOSYS_STA
						m_axi_rdata <= cache_reg[offset][index * (2 ** w) + $clog2(access)];
`endif
						m_axi_rresp  <= 2'b11;
					end
					if(m_axi_rvalid && m_axi_rready) begin
						m_axi_rvalid <= 0;
					end		
				end
				default: begin
				end
			endcase
		end
	end

/***
	reg cache_axi_awready,cache_axi_wready,cache_axi_bvalid,cache_axi_arready,cache_axi_rvalid;
	reg cache_axi_rlast;
	reg [1:0]cache_axi_bresp,cache_axi_rresp;
	reg [3:0]cache_axi_bid,cache_axi_rid;
	reg [31:0]cache_axi_rdata;
	assign s_axi_awid = (state == TRANS) ? m_axi_awid : 4'b0;
	assign s_axi_awlen = (state == TRANS) ? m_axi_awlen : 8'b0;
	assign s_axi_awsize = (state == TRANS) ? m_axi_awsize : 3'b0;
	assign s_axi_awburst = (state == TRANS) ? m_axi_awburst : 2'b0;
	assign s_axi_wlast = (state == TRANS) ? m_axi_wlast : 1'b0;
	assign m_axi_bid = (state == TRANS) ? s_axi_bid : (state == RETURN) ? cache_axi_bid : 4'b0;
	assign s_axi_awaddr = (state == TRANS) ? m_axi_awaddr : 32'h0;
	assign s_axi_awvalid = (state == TRANS) ? m_axi_awvalid : 1'b0;
	assign m_axi_awready = (state == TRANS) ? s_axi_awready : (state == RETURN) ? cache_axi_awready : 1'b0;
	assign s_axi_wdata = (state == TRANS) ? m_axi_wdata : 32'h0;
	assign s_axi_wstrb = (state == TRANS) ? m_axi_wstrb : 4'b0;
	assign s_axi_wvalid = (state == TRANS) ? m_axi_wvalid : 1'b0;
	assign m_axi_wready = (state == TRANS) ? s_axi_wready : (state == RETURN) ? cache_axi_wready : 1'b0;
	assign m_axi_bresp = (state == TRANS) ? s_axi_bresp : (state == RETURN) ? cache_axi_bresp : 2'b0;
	assign m_axi_bvalid = (state == TRANS) ? s_axi_bvalid : (state == RETURN) ? cache_axi_bvalid : 1'b0;
	assign s_axi_bready = (state == TRANS) ? m_axi_bready : 1'b0;

	assign s_axi_arid = (state == TRANS) ? m_axi_arid : 4'b0;
	assign s_axi_arlen = (state == TRANS) ? m_axi_arlen : 8'b0;
	assign s_axi_arsize = (state == TRANS) ? m_axi_arsize : 3'b0;
	assign s_axi_arburst = (state == TRANS) ? m_axi_arburst : 2'b0;
	assign s_axi_araddr = (state == TRANS) ? m_axi_araddr : 32'h0;
	assign s_axi_arvalid = (state == TRANS) ? m_axi_arvalid : 1'b0;
	assign m_axi_arready = (state == TRANS) ? s_axi_arready : (state == RETURN) ? cache_axi_arready : 1'b0;
	assign m_axi_rdata = (state == TRANS) ? s_axi_rdata : (state == RETURN) ? cache_axi_rdata : 32'h0;
	assign m_axi_rresp = (state == TRANS) ? s_axi_rresp : (state == RETURN) ? cache_axi_rresp : 2'b0;
	assign m_axi_rvalid = (state == TRANS) ? s_axi_rvalid : (state == RETURN) ? cache_axi_rvalid : 1'b0;
	assign s_axi_rready = (state == TRANS) ? m_axi_rready : 1'b0;
	assign m_axi_rid = (state == TRANS) ? s_axi_rid : (state == RETURN) ? cache_axi_rid : 4'b0;
	assign m_axi_rlast = (state == TRANS) ? s_axi_rlast : (state == RETURN) ? cache_axi_rlast : 1'b0;
***/

/***DPIC-AMAT***/
`ifndef YOSYS_STA
	export "DPI-C" function amat_counter;
	function int amat_counter(int i);
	  begin
			assign amat_counter = (i == 0) ? {31'b0,(access != 0)} : 32'b0;
		end
	endfunction
`endif

endmodule
