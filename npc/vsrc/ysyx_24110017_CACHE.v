//`define YOSYS_STA
module ysyx_24110017_CACHE 
#(n = 1, m = 4, w = 0, TAG_WIDTH = 16) (//tag_width = 16 中型程序
	input  wire clk,
	input  wire rst,
	input  wire fencei_i,

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

	input  wire s_axi_arready,
	output reg  s_axi_arvalid,
	output wire [ 3:0]s_axi_arid,
	output reg  [31:0]s_axi_araddr,
	output reg  [ 7:0]s_axi_arlen,
	output wire [ 2:0]s_axi_arsize,
	output wire [ 1:0]s_axi_arburst,
	output reg  s_axi_rready,
	input wire  s_axi_rvalid,
	input wire  [ 3:0]s_axi_rid,
	input wire  [31:0]s_axi_rdata,
	input wire  [ 1:0]s_axi_rresp,
	input wire  s_axi_rlast
);

	reg [31:TAG_WIDTH]tag_check;
	wire unvalid = m_axi_araddr[31:TAG_WIDTH] != tag_check;
	always @(posedge clk) begin
		tag_check <= m_axi_araddr[31:TAG_WIDTH];
	end

	localparam CACHE_WIDTH = (1 << (m-2));
	localparam CACHE_DEPTH = (1 << n);
	localparam CACHE_WAY	 = (1 << w);

	reg  [31:0]								   cache_reg [CACHE_WIDTH - 1 : 0][CACHE_DEPTH - 1 : 0];
  reg  [TAG_WIDTH-1-m-n+w : 0] tag_reg	 [CACHE_WIDTH - 1 : 0][CACHE_DEPTH - 1 : 0];
  reg  [CACHE_DEPTH - 1 : 0]   valid_reg [CACHE_WIDTH - 1 : 0];
	
	wire [31:0] axi_araddr = (!state) ? m_axi_araddr : s_axi_araddr;
	wire [TAG_WIDTH-1-m-n+w : 0] tag     = axi_araddr[TAG_WIDTH-1 : m+n-w];
  wire [n-w-1 : 0]					 index		 = axi_araddr[m+n-w-1 : m];
  wire [m-3 : 0]						 offset	   = axi_araddr[m-1 : 2];
 
	wire [CACHE_WAY - 1 : 0] hit;

	generate 
    genvar i; 
      for(i = 0; i < CACHE_WAY; i = i + 1) begin : comparator
        assign hit[i] = ((tag == tag_reg[offset][index * CACHE_WAY + i]) && (valid_reg[offset][index * CACHE_WAY + i])) ? 1 : 0;
			end
	endgenerate

	function integer log2;
    input [CACHE_WAY - 1 : 0] value;
    integer loop_var;
		begin
			for (loop_var = 0; loop_var < CACHE_WAY; loop_var = loop_var + 1) begin
				if(value != 0) begin
					value = value >> 1;
					log2 = loop_var;
				end
			end
		end
	endfunction

	assign m_axi_rvalid = axi_rvalid && !axi_rvalid_enable;
	assign m_axi_rdata  = (|hit) ? cache_reg[offset][index * CACHE_WAY + log2(hit)] : 32'h0;
	wire	 axi_rvalid   = (s_axi_arlen != 0) ? s_axi_rlast : (|hit) && !(m_axi_arvalid && m_axi_arready);
	reg axi_rvalid_enable;
	always @(posedge clk) begin
		if(axi_rvalid) axi_rvalid_enable <= 1'b1;
		else axi_rvalid_enable <= 1'b0;
	end 

	localparam IDLE  = 1'b0;
  localparam TRANS = 1'b1;
  reg state;

	always @(posedge clk or posedge rst) begin
		if(rst) state <= IDLE;
		else begin
			case(state)
				IDLE:    state <= (m_axi_arvalid && m_axi_arready) && (hit == 0) ? TRANS : state;
				TRANS:   state <= (m_axi_rready && m_axi_rvalid) ? IDLE : state;
        default: state <= state;
			endcase
		end
	end

	assign s_axi_arburst = 2'b01;
	assign s_axi_arsize = 3'b10;
	reg [m-3 : 0] burst_counter;

	always @(posedge clk) begin
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
					s_axi_araddr  <= m_axi_araddr;
					if(m_axi_arvalid && m_axi_arready) begin
						if(hit == 0) begin
							m_axi_arready <= 1'b0;
							s_axi_arvalid <= 1'b1;
							if(m_axi_araddr - 32'ha0000000 < 32'h20000000) begin
								s_axi_arlen <= CACHE_WIDTH - {6'b0,offset} - 1;
							end
							else begin
								s_axi_arlen <= 8'h0;
							end
							burst_counter <= offset;
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
							cache_reg[b][index * CACHE_WAY] <= 0;
							tag_reg  [b][index * CACHE_WAY] <= 0;
							valid_reg[b][index * CACHE_WAY] <= 0;
							for (a = 1; a < CACHE_WAY; a = a + 1) begin
                cache_reg[b][index * CACHE_WAY + a] <= cache_reg[b][index * CACHE_WAY + a - 1];
                tag_reg  [b][index * CACHE_WAY + a] <= tag_reg  [b][index * CACHE_WAY + a - 1];
                valid_reg[b][index * CACHE_WAY + a] <= valid_reg[b][index * CACHE_WAY + a - 1];
              end
            end
						s_axi_arvalid <= 1'b0;
						s_axi_rready  <= 1'b1;
					end
					if(s_axi_rready && s_axi_rvalid) begin
						cache_reg[burst_counter][index * CACHE_WAY] <= s_axi_rdata;
						tag_reg  [burst_counter][index * CACHE_WAY] <= s_axi_araddr[TAG_WIDTH-1 : m+n-w];
						valid_reg[burst_counter][index * CACHE_WAY] <= 1'b1;
						burst_counter <= burst_counter + 1;
					end
					if(s_axi_rlast) begin
						s_axi_arvalid <= 1'b0;
						s_axi_rready  <= 1'b0;
						s_axi_arlen   <= 8'b0;
						burst_counter <= 2'b0;
					end
				end
			endcase
		end
	end

/***DPIC-AMAT***/
`ifndef YOSYS_STA
	export "DPI-C" function amat_counter;
	function int amat_counter(int i);
	  begin
			assign amat_counter = (i == 0) ? {31'b0,(hit != 0)} : 32'b0;
		end
	endfunction
`endif

endmodule
