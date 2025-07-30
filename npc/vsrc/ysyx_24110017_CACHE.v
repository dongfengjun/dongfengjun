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

	output wire m_axi_arready,
	input wire m_axi_arvalid,
	input wire [3:0]m_axi_arid,
	input wire [31:0]m_axi_araddr,
	input wire [7:0]m_axi_arlen,
	input wire [2:0]m_axi_arsize,
	input wire [1:0]m_axi_arburst,
	input wire m_axi_rready,
	output wire m_axi_rvalid,
	output wire [3:0]m_axi_rid,
	output wire [31:0]m_axi_rdata,
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
	output wire s_axi_arvalid,
	output wire [3:0]s_axi_arid,
	output wire [31:0]s_axi_araddr,
	output wire [7:0]s_axi_arlen,
	output wire [2:0]s_axi_arsize,
	output wire [1:0]s_axi_arburst,
	output wire s_axi_rready,
	input wire s_axi_rvalid,
	input wire [3:0]s_axi_rid,
	input wire [31:0]s_axi_rdata,
	input wire [1:0]s_axi_rresp,
	input wire s_axi_rlast
);

	reg [31:0] cache_reg [2**n-1 : 0];
  reg [31-m-n : 0] tag_reg [2**n-1 : 0];
  reg [2**n-1 : 0] valid_reg;
	wire [31-m-n : 0]tag = m_axi_araddr[31 : m+n];
  wire [n-1-w: 0]index = m_axi_araddr[m+n-1 : m + w];
  wire [m-1 : 0]offset = m_axi_araddr[m-1 : 0];

  wire [2 ** w - 1 : 0]access;
	generate 
    genvar i; 
      for(i = 0; i < 2 ** w; i = i + 1) begin : comparator
        assign access[i] = (tag == tag_reg[index * (2 ** w) + i]) && (valid_reg[index * (2 ** w) + i]);
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
						if(access) begin
							state <= RETURN;
						end
						else begin
							state <= TRANS;
						end
					end
				end
				TRANS  : begin
					if(m_axi_rready && s_axi_rvalid) begin
						state <= IDLE;
					end
				end
				RETURN : begin
					if(m_axi_rready && cache_axi_rvalid) begin
						state <= IDLE;
					end
				end
				default: begin
					state <= state;
				end
			endcase
		end
	end

	always @(posedge clk or posedge rst) begin
		if(rst) begin
			generate
        genvar j;
				for (j = 0; j < (2 ** n); j = j + 1) begin : init_reg
					cache_reg[j]	<= 32'h0;
					tag_reg[j]		<= 0;
				end
			endgenerate
			valid_reg				<= 0;
		end
		else begin
			case(state)
				IDLE	 : begin
				end
				TRANS  : begin
					if(m_axi_rready && s_axi_rvalid) begin
						generate
							genvar k;
							for (k = 1; k < (2 ** w) - 1; k = k + 1) begin : fifo
								cache_reg[index * (2 ** w) + k] <= cache_reg[index * (2 **  w) + k - 1];
								tag_reg[index * (2 ** w) + k] <= tag_reg[index * (2 ** w) + k - 1];
							end
						endgenerate
						valid_reg[(index + 1) * (2 ** w) - 1 : index * (2 ** w)] <= valid_reg[(index + 1) * (2 ** w) - 1 : index * (2 ** w)] >> 1;
						cache_reg[index * (2 ** w)] <= s_axi_rdata;
						tag_reg[index * (2 **  w)] <= tag;
						valid_reg[index * (2 ** w)] <= 1'b1;
					end	
				end
				RETURN : begin
					if(m_axi_arvalid && !cache_axi_arready) begin
						cache_axi_arready <= 1'b1;
					end
					if(m_axi_arvalid && cache_axi_arready) begin
						cache_axi_rvalid <= 1;
						cache_axi_arready <= 0;
						cache_axi_rdata <= cache_reg[$clog2(access)];
						cache_axi_rresp  <= 2'b11;
					end
					if(cache_axi_rvalid && m_axi_rready) begin
						cache_axi_rvalid <= 0;
					end		
				end
				default: begin
				end
			endcase
		end
	end

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

/***DPIC-AMAT***/
	export "DPI-C" function amat_counter;
	function int amat_counter(int i);
	  begin
			assign amat_counter = (i == 0) ? {31'b0,(tag_reg[index] == tag && valid_reg[index])} : 32'b0;
		end
	endfunction

endmodule
