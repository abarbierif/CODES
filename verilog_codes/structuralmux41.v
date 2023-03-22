module structuralmux41(input d0, d1, d2, d3,
                       input [1:0] s,
                       output y);

    wire low, high;

    ternarymux21 lowmux(.d0(d0), .d1(d1), .s(s[0]), .y(low));
    ternarymux21 highmux(.d0(d2), .d1(d3), .s(s[0]), .y(high));
    ternarymux21 finalmux(.d0(low), .d1(high), .s(s[1]), .y(y));

endmodule