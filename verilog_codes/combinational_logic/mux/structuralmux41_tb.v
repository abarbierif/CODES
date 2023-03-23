`timescale 1ns/1ns

module structuralmux41_tb();

  reg i0, i1, i2, i3;
  reg [1:0] s;
  wire o;
  integer n;

  structuralmux41 dut(.d0(i0), .d1(i1), .d2(i2), .d3(i3), .s(s), .y(o));

  initial begin
    $dumpfile("structuralmux41.vcd");
    $dumpvars();

    $monitor("%b %b %b %b %b %b | %b", s[1], s[0], i3, i2, i1, i0, o);

    for(n=0;n<64;n=n+1) begin
      {s[1], s[0], i3, i2, i1, i0}=n;
      #10;
    end
  
  end

endmodule