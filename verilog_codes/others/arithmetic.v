//arithmetic

module arithmetic();

  reg [7:0] a, b;

  initial begin 

    a = 5; // 0000 0101
    b = 3; // 0000 0011 

    $display("add(+): %b = %d", a + b, a + b); // 0000 1000
    $display("sub(-): %b = %d", a - b, a - b); // 0000 0010
    $display("mult(*): %b = %d", a*b, a*b); // 0000 1111
    $display("div(/): %b = %d", a/b, a/b); // 0000 0001 (2.62)
    $display("mod(%%): %b = %d", a%b, a%b); // 0000 0010
    $display("pow(**): %b = %d", a**b, a**b); // 0111 1101

  end

endmodule