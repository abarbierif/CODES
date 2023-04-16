/*
relational operator have lower precedence than arithmetic operators 
and all relational have the same precedence
*/

module relational();

  reg [7:0] a;
  reg [7:0] b;

  initial begin

    a = 5;
    b = 9;

    $display("a > b: ", a > b);
    $display("a < b: ", a < b);
  
    a = 9; 
  
    $display("a >= b: ", a >= b);

  end 

endmodule