module nor_gate(input [3:0] a,
                output y);

    assign y = ~|a;

endmodule;