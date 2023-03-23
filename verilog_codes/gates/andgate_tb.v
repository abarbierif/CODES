module andgate_tb();

  reg [2:0] i;
  wire o;
  integer n;

  andgate dut(i, o);

  initial begin
    $dumpfile("andgate.vcd");
    $dumpvars();

    $display("a2 a1 a0 | y");
    $monitor("%b  %b  %b  | %b", i[2], i[1], i[0], o);

    for(n=0;n<8;n=n+1) begin
        {i[2], i[1], i[0]} = n;
        #10;
    end

  end

endmodule