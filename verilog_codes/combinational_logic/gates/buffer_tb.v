`include "buffer.v"

module buffer_tb();

  reg a;
  wire y;

  buffer dut(a, y);

  initial begin
    $dumpfile("buffer.vcd");
    $dumpvars;

    a = 1; #10;
    a = 0; #10;
    a = 1; #10;

    $display("\ntest complete!!!\n");

  end

endmodule