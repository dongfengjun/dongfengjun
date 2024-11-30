module EXU(
	input [31:0] a,b,
	input [3:0] sel,
  output reg [31:0] res
);
  reg [31:0] tmp;
  always_latch@(a or b or sel) begin
    case(sel)
      3'b000:
        begin
          res=a+b;
        end
      3'b001:
        begin
          tmp=((32'b1111)^b)+1;
          res=a+tmp;
        end
      3'b010:
        begin
          res=~a;
        end
      3'b011:
        begin
          res=a&b;
        end
      3'b100:
        begin
          res=a|b;
        end
      3'b101:
        begin
          res=a^b;
        end
      3'b110:
        begin
          if(a[3]==0&&b[3]==1)
            res=0;
          else if(a[3]==1&&b[3]==0)
            res=1;
          else
            res=(a<b)?1:0;
        end
      3'b111:
        begin
          res=(a==b)?1:0;
        end
    endcase
  end
endmodule
