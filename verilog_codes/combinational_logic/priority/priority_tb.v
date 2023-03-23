module priority_tb();

  reg i0, i1, i2, i3;
  wire o0, o1, o2, o3;
  integer n;

  priority dut(.d0(i0), .d1(i1), .d2(i2), .d3(i3), .y0(o0), .y1(o1), .y2(o2), .y3(o3));

  initial begin
    $dumpfile("priority.vcd");
    $dumpvars();

    $display("d3 d2 d1 d0 | y3 y2 y1 y0");
    $monitor("%b  %b  %b  %b  | %b  %b  %b  %b", i3 , i3, i1, i0, o3, o2, o1, o0);

    for(n=0;n<16;n=n+1) begin
        {i3, i2, i1, i0} = n;
        #10;
    end
  
  end

endmodule