module example0_tb();

  reg ia, ib, ic;
  wire o;
  integer n;

  example0 dut(.a(ia), .b(ib), .c(ic), .y(o));

  initial begin
    $dumpfile("example0.vcd");
    $dumpvars();

    $display("a b c | y");
    $monitor("%b %b %b | %b", ia, ib, ic, o);

    for(n=0;n<8;n=n+1) begin
      {ia, ib, ic} = n;
      #10;
    end

  end

endmodule