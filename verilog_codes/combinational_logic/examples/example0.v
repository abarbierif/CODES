module example0(input a, b, c,
                output y);

  assign y = (~b&~c)|(a&~b);

endmodule