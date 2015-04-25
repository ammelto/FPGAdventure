`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:58:36 04/14/2015
// Design Name:   main
// Module Name:   E:/Adventure/Adventure/MainTest.v
// Project Name:  Adventure
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MainTest;

	// Inputs
	reg clk_50MHz;
	reg [3:0] SWITCH;
	reg [3:0] BUTTON;
	reg xin;
	reg yin;

	// Outputs
	wire vs_vga;
	wire hs_vga;
	wire [2:0] RED;
	wire [2:0] GREEN;
	wire [1:0] BLUE;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk_50MHz(clk_50MHz), 
		.vs_vga(xin), 
		.hs_vga(yin), 
		.RED(RED), 
		.GREEN(GREEN), 
		.BLUE(BLUE), 
		.SWITCH(SWITCH), 
		.BUTTON(BUTTON)
	);
	
	initial begin
		clk_50MHz = 0;
		forever
			#5 clk_50MHz = ~clk_50MHz;
				xin = ~xin;
				yin = ~yin;
	end

	initial begin
		// Initialize Inputs
		

		// Wait 100 ns for global reset to finish
		#100;
		//640x480
	end
      
endmodule

