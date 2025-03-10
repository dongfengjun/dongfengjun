module lfsr_ysyx_24110017 (
    input wire clk,
    input wire rst,
    output reg [7:0] rand_out
);

    // 8位LFSR，反馈多项式: x^8 + x^6 + x^5 + x^4 + 1
    wire feedback = rand_out[7] ^ rand_out[5] ^ rand_out[4] ^ rand_out[3];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            rand_out <= 8'b00000001;
        end else begin
            rand_out <= {rand_out[6:0], feedback};
        end
    end

endmodule
