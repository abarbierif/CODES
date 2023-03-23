module priority(input d0, d1, d2, d3,
                output  y0, y1, y2, y3);

    assign y3 = d3;
    assign y2 = (~d3 & d2);
    assign y1 = (~d3 & ~d2 & d1);
    assign y0 = (~d3 & ~d2 & ~d1 & d0);


endmodule