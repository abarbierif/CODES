module priority_tb();

  reg [3:0] i;
  wire [3:0] o;
  integer n;

  priority dut(i, o);

  initial begin
    $dumpfile("priority.vcd");
    $dumpvars();

    $display("d3 d2 d1 d0 | y3 y2 y1 y0");
    $monitor("%b  %b  %b  %b  | %b  %b  %b  %b", i[3] , i[2], i[1], i[0], o[3], o[2], o[1], o[0]);

    for(n=0;n<16;n=n+1) begin
        {i[3], i[2], i[1], i[0]} = n;
        #10;
    end
  
  end

endmodule