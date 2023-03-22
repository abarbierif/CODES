module priority(input [3:0] d,
                output [3:0] y);

    assign y[3] = d[3];
    assign y[2] = (~d[3] & d[2]);
    assign y[1] = (~d[3] & ~d[2] & d[1]);
    assign y[0] = (~d[3] & ~d[2] & ~d[1] & d[0]);


endmodule