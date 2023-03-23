module inverter_tb();

    reg a;
    wire y;

    inverter dut(a, y);

    initial begin
        $dumpfile("inverter.vcd");
        $dumpvars();

        a = 1; #10;
        a = 0; #10;
        a = 1; #10;

        $display("\ntest complete!\n");

    end
endmodule