module mux21(d0, d1, s, y);

    input d0, d1;
    input s;
    output y;

    assign y = (~s & d0)|(s & d1);

endmodule