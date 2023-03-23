module nor_gate_tb();

  reg [3:0] i;
  wire o;
  integer n;

  nor_gate dut(.a(i), .y(o));

  initial begin
    $dumpfile("nor_gate.vcd");
    $dumpvars();

    $monitor("%b %b %b %b | %b", i[3], i[2], i[1], i[0], o);

    for(n=0;n<16;n=n+1) begin
      {i}=n;
      #10;
    end
  
  end

endmodule