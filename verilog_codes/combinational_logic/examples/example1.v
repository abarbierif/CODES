module example1(input a, b, c, d,
                output y);

    assign y = (a & ~b & ~c & ~d) | (d & (~a | b | c));

endmodule