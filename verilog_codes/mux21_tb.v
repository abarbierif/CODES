module mux21_tb();

    reg d0, d1, s;
    wire y;
    integer i;

    mux21 dut(d0, d1, s, y);

    initial begin
      $dumpfile("mux21.vcd");
      $dumpvars();


      for(i=0;i<8;i=i+1) begin
        {s,d1,d0} = i; 
        #10;
        $display("s = %b d1 = %b d0 = %b | y = %b", s, d1, d0, y);
      end
    
    end

endmodule
