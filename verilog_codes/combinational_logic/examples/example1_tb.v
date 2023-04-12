module example1_tb();

reg ia, ib, ic, id;
wire o;
integer n;

example1 dut(.a(ia), .b(ib), .c(ic), .d(id), .y(o));

initial begin
  $dumpfile("example1.vcd");
  $dumpvars();

  $display("\nA B C D | Y");  
  $monitor("%b %b %b %b | %b", ia, ib, ic, id, o);

  for(n=0;n<16;n=n+1) begin
    {ia,ib,ic,id} = n;
    #10;
  end

end

endmodule