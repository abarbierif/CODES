module ternarymux21_tb();

  reg i0, i1;
  reg s;
  wire o;
  integer n;

  ternarymux21 dut(.d0(i0), .d1(i1), .s(s), .y(o));

  initial begin
    $dumpfile("ternarymux21.vcd");
    $dumpvars();

    $monitor("%b %b %b | %b", s, i1, i0, o);

    for(n=0;n<8;n=n+1) begin
      {s, i1, i0} = n;
      #10;
    end
  
  end

endmodule