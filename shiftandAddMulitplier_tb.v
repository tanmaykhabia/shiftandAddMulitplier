`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:20:56 10/05/2019
// Design Name:   shiftandAddMultiplier
// Module Name:   /home/tanmay/tanmay/verilog/shiftandAddMulitplier/shiftandAddMulitplier_tb.v
// Project Name:  shiftandAddMulitplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shiftandAddMultiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shiftandAddMulitplier_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [7:0] p;

	// Instantiate the Unit Under Test (UUT)
	shiftandAddMultiplier uut (
		.a(a), 
		.b(b), 
		.p(p)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	initial #256 $finish ; 
	always #2 a = a +1 ; 
	always #16 b= b+ 1 ; 

      
endmodule

