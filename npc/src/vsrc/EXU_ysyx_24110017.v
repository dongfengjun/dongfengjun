module EXU_ysyx_24110017(a,b,sel,res);
input [31:0] a,b;
input [2:0] sel;
output [31:0] res;

assign res = ({32{sel == 3'b000}} & (a + b)) |
             ({32{sel == 3'b001}} & (a + (((32'b1111) ^ b) + 1))) |
             ({32{sel == 3'b010}} & (~a)) |
             ({32{sel == 3'b011}} & (a & b)) |
             ({32{sel == 3'b100}} & (a | b)) |
             ({32{sel == 3'b101}} & (a ^ b)) |
             (({32{sel == 3'b110}} & 
               ((a[3] == 0 && b[3] == 1) ? 0 : 
                (a[3] == 1 && b[3] == 0) ? 1 : 
                (a < b) ? 1 : 0))) |
             ({32{sel == 3'b111}} & ((a == b) ? 1 : 0));

endmodule
