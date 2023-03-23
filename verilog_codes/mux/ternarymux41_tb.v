module ternarymux41_tb();

  reg [3:0] i;
  reg [1:0] s;
  wire o;
  integer n;

  ternarymux41 dut(.a(i), .s(s), .y(o));

  initial begin
    $dumpfile("ternarymux41.vcd");
    $dumpvars();

    $display("s1 s0 a3 a2 a1 a0 | y");
    $monitor("%b  %b  %b  %b  %b  %b  | %b", s[1], s[0], i[3], i[2], i[1], i[0], o);

    for(n=0;n<64;n=n+1) begin
      {s[1], s[0], i[3], i[2], i[1], i[0]} = n;
      #1;
    end
  
  end

endmodule