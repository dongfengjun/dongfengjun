//`define YOSYS_STA
module ysyx_24110017_CACHE #(n = 4, m = 4, w = 3) (
	input clk,
	input rst,
	input  wire fencei_i,
	output wire m_axi_awready,
	input  wire m_axi_awvalid,
	input  wire [ 3:0]m_axi_awid,
	input  wire [31:0]m_axi_awaddr,
	input  wire [ 7:0]m_axi_awlen,
	input  wire [ 2:0]m_axi_awsize,
	input  wire [ 1:0]m_axi_awburst, 
	output wire m_axi_wready,
	input  wire m_axi_wvalid,
	input  wire [31:0]m_axi_wdata,
	input  wire [ 3:0]m_axi_wstrb,
	input  wire m_axi_wlast,
	input  wire m_axi_bready,
	output wire m_axi_bvalid,
	output wire [ 3:0]m_axi_bid,
	output wire [ 1:0]m_axi_bresp,

	output reg  m_axi_arready,
	input  wire m_axi_arvalid,
	input  wire [ 3:0]m_axi_arid,
	input  wire [31:0]m_axi_araddr,
	input  wire [ 7:0]m_axi_arlen,
	input  wire [ 2:0]m_axi_arsize,
	input  wire [ 1:0]m_axi_arburst,
	input  wire m_axi_rready,
	output wire m_axi_rvalid,
	output wire [ 3:0]m_axi_rid,
	output wire [31:0]m_axi_rdata,
	output wire [ 1:0]m_axi_rresp,
	output wire m_axi_rlast,

	input  wire s_axi_awready,
	output wire s_axi_awvalid,
	output wire [ 3:0]s_axi_awid,
	output wire [31:0]s_axi_awaddr,
	output wire [ 7:0]s_axi_awlen,
	output wire [ 2:0]s_axi_awsize,
	output wire [ 1:0]s_axi_awburst,
	input  wire s_axi_wready,
	output wire s_axi_wvalid,
	output wire [31:0]s_axi_wdata,
	output wire [ 3:0]s_axi_wstrb,
	output wire s_axi_wlast,
	output wire s_axi_bready,
	input  wire s_axi_bvalid,
	input  wire [ 3:0]s_axi_bid,
	input  wire [ 1:0]s_axi_bresp,

	input  wire s_axi_arready,
	output reg  s_axi_arvalid,
	output wire [ 3:0]s_axi_arid,
	output reg  [31:0]s_axi_araddr,
	output reg  [ 7:0]s_axi_arlen,
	output reg  [ 2:0]s_axi_arsize,
	output reg  [ 1:0]s_axi_arburst,
	output reg  s_axi_rready,
	input wire  s_axi_rvalid,
	input wire  [ 3:0]s_axi_rid,
	input wire  [31:0]s_axi_rdata,
	input wire  [ 1:0]s_axi_rresp,
	input wire  s_axi_rlast
);

	localparam CACHE_WIDTH = (1 << (m-2));
	localparam CACHE_DEPTH = (1 << n);
	localparam CACHE_WAY	 = (1 << w);

	reg  [31:0]								 cache_reg [CACHE_WIDTH - 1 : 0][CACHE_DEPTH - 1 : 0];
  reg  [31-m-n+w : 0]				 tag_reg	 [CACHE_WIDTH - 1 : 0][CACHE_DEPTH - 1 : 0];
  reg  [CACHE_DEPTH - 1 : 0] valid_reg [CACHE_WIDTH - 1 : 0];
	wire [31-m-n+w : 0]				 tag			 = m_axi_araddr[31 : m+n-w];
  wire [n-w-1 : 0]					 index		 = m_axi_araddr[m+n-w-1 : m];
  wire [m-3 : 0]						 offset	   = m_axi_araddr[m-1 : 2];
	wire [31-m-n+w : 0]				 s_tag		 = s_axi_araddr[31 : m+n-w];
  wire [n-w-1 : 0]					 s_index   = s_axi_araddr[m+n-w-1 : m];
  wire [m-3 : 0]						 s_offset  = s_axi_araddr[m-1 : 2];
 
	wire [CACHE_WAY - 1 : 0]access;
	wire [CACHE_WAY - 1 : 0]hit;

	wire [127:0] cache_test0 = {cache_reg[0][0],cacge_reg[1][0],cache_reg[2][0],cache_reg[3][0]};
	wire [127:0] cache_test0 = {cache_reg[0][1],cacge_reg[1][1],cache_reg[2][1],cache_reg[3][1]};
	wire [127:0] cache_test0 = {cache_reg[0][2],cacge_reg[1][2],cache_reg[2][2],cache_reg[3][2]};
	wire [127:0] cache_test0 = {cache_reg[0][3],cacge_reg[1][3],cache_reg[2][3],cache_reg[3][3]};
	wire [127:0] cache_test0 = {cache_reg[0][4],cacge_reg[1][4],cache_reg[2][4],cache_reg[3][4]};
	wire [127:0] cache_test0 = {cache_reg[0][5],cacge_reg[1][5],cache_reg[2][5],cache_reg[3][5]};
	wire [127:0] cache_test0 = {cache_reg[0][6],cacge_reg[1][6],cache_reg[2][6],cache_reg[3][6]};
	wire [127:0] cache_test0 = {cache_reg[0][7],cacge_reg[1][7],cache_reg[2][7],cache_reg[3][7]};
	wire [127:0] cache_test0 = {cache_reg[0][8],cacge_reg[1][8],cache_reg[2][8],cache_reg[3][8]};
	wire [127:0] cache_test0 = {cache_reg[0][9],cacge_reg[1][9],cache_reg[2][9],cache_reg[3][9]};
	wire [127:0] cache_test0 = {cache_reg[0][10],cacge_reg[1][10],cache_reg[2][10],cache_reg[3][10]};
	wire [127:0] cache_test0 = {cache_reg[0][11],cacge_reg[1][11],cache_reg[2][11],cache_reg[3][11]};
	wire [127:0] cache_test0 = {cache_reg[0][12],cacge_reg[1][12],cache_reg[2][12],cache_reg[3][12]};
	wire [127:0] cache_test0 = {cache_reg[0][13],cacge_reg[1][13],cache_reg[2][13],cache_reg[3][13]};
	wire [127:0] cache_test0 = {cache_reg[0][14],cacge_reg[1][14],cache_reg[2][14],cache_reg[3][14]};
	wire [127:0] cache_test0 = {cache_reg[0][15],cacge_reg[1][15],cache_reg[2][15],cache_reg[3][15]};

	generate 
    genvar i; 
      for(i = 0; i < CACHE_WAY; i = i + 1) begin : comparator
        assign hit = ((s_tag == tag_reg[s_offset][s_index * CACHE_WAY + i]) && (valid_reg[s_offset][s_index * CACHE_WAY + i])) ? i + 1 : 0;
				assign access = ((tag == tag_reg[offset][index * CACHE_WAY + i]) && (valid_reg[offset][index * CACHE_WAY + i])) ? i + 1  : 0;
			end
	endgenerate

	assign m_axi_rvalid = axi_rvalid && !axi_rvalid_enable;
	assign m_axi_rdata  = (|hit) ? cache_reg[s_offset][s_index * CACHE_WAY + hit - 1] : 32'h0;
	wire	 axi_rvalid   = (s_axi_arlen != 0) ? s_axi_rlast : (|hit) && !(m_axi_arvalid && m_axi_arready);
	reg axi_rvalid_enable;
	always @(posedge clk) begin
		if(axi_rvalid) axi_rvalid_enable <= 1'b1;
		else axi_rvalid_enable <= 1'b0;
	end 

	localparam IDLE = 1'b0;
  localparam TRANS = 1'b1;
//  localparam RETURN = 2'b10;
  reg state;

	always @(posedge clk or posedge rst) begin
		if(rst) state <= IDLE;
		else begin
			case(state)
				IDLE:    state <= (m_axi_arvalid && m_axi_arready) && (access == 0) ? TRANS : state;
				TRANS:   state <= (m_axi_rready && m_axi_rvalid) ? IDLE : state;
//        RETURN:	 state <= (m_axi_rready && m_axi_rvalid) ? IDLE : state;
        default: state <= state;
			endcase
		end
	end

	reg [m-3 : 0]burst_counter;
	reg [31:0] burst_araddr;
	always @(posedge clk or posedge rst) begin
		if(rst) begin
      integer j;
			for (j = 0; j < CACHE_WIDTH; j = j + 1) begin : init_reg
				valid_reg[j]      <= 0;
			end
		end
		else begin
			if(fencei_i) begin
				integer f;
				for (f = 0; f < CACHE_WIDTH; f = f + 1) begin : fencei
					valid_reg[f] <= 0;
				end
			end
			else begin
				case(state)
				IDLE: begin
					m_axi_arready <= 1'b1;
					if(m_axi_arvalid && m_axi_arready) begin
						s_axi_araddr <= m_axi_araddr;
						if(access == 0) begin
							m_axi_arready <= 1'b0;
							s_axi_arvalid <= 1'b1;
							burst_araddr <= m_axi_araddr;
							s_axi_arburst <= 2'b01;
							if(m_axi_araddr - 32'ha0000000 < 32'h20000000) begin
								s_axi_arlen <= CACHE_WIDTH - {6'b0,offset} - 1;
							end
							else begin
								s_axi_arlen <= 8'h0;
							end
							s_axi_arsize <= 3'h2;
						end
						else begin
							m_axi_arready <= 1'b0;
						end
					end
				end
				TRANS: begin
					if(s_axi_arvalid && s_axi_arready) begin
						integer a;
            integer b;
						for (b = 0; b < CACHE_WIDTH; b = b + 1) begin : fifo
							for (a = 1; a < CACHE_WAY; a = a + 1) begin
                cache_reg[b][s_index * CACHE_WAY + a] <= cache_reg[b][s_index * CACHE_WAY + a - 1];
                tag_reg[b][s_index * CACHE_WAY + a] <= tag_reg[b][s_index * CACHE_WAY + a - 1];
                valid_reg[b][s_index * CACHE_WAY + a] <= valid_reg[b][s_index * CACHE_WAY + a - 1];
              end
							cache_reg[b][s_index * CACHE_WAY] <= 0;
              tag_reg[b][s_index * CACHE_WAY] <= 0;
              valid_reg[b][s_index * CACHE_WAY] <= 0;
            end
						s_axi_arvalid <= 1'b0;
						s_axi_rready <= 1'b1;                                           
            burst_counter <= s_offset;
					end
					if(s_axi_rready && s_axi_rvalid) begin
						cache_reg[burst_counter][s_index * CACHE_WAY] <= s_axi_rdata;
						tag_reg[burst_counter][s_index * CACHE_WAY] <= burst_araddr[31 : m+n-w];
						valid_reg[burst_counter][s_index * CACHE_WAY] <= 1'b1;
						burst_araddr <= burst_araddr + 4;
						burst_counter <= burst_counter + 1;
					end
					if(s_axi_rlast) begin
						s_axi_arvalid <=1'b0;
						s_axi_arsize <= 3'b0;
						s_axi_arlen  <= 8'b0;
						s_axi_rready <= 1'b0;
//						m_axi_rvalid <= 1'b1;
						burst_counter <= 0;
/***
						if(s_axi_arlen == 8'b0) begin
							m_axi_rdata <= s_axi_rdata;
						end
						else begin
							m_axi_rdata <= cache_reg[s_offset][s_index * CACHE_WAY];
						end
					end
					if(m_axi_rvalid && m_axi_rready) begin
						m_axi_rvalid <= 1'b0;
					end
***/
					end
				end
/***
				RETURN : begin
					m_axi_rvalid <= 1'b1;
					m_axi_arready <= 1'b0;
					m_axi_rdata <= cache_reg[offset][index * CACHE_WAY + access - 1];
					m_axi_rresp  <= 2'b11;
					if(m_axi_rvalid && m_axi_rready) begin
						m_axi_rvalid <= 0;
					end		
				end
***/
				endcase
			end
		end
	end

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
