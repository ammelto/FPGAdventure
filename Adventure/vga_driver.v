`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:06:37 04/14/2015 
// Design Name: 
// Module Name:    vga_driver 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_driver(clk_50MHz, vs_vga, hs_vga, RED, GREEN, BLUE, HBLANK, VBLANK, CURX, CURY, COLOR, CLK_DATA, RESET);

	input clk_50MHz;
	output vs_vga;
	output hs_vga;
	output [2:0] RED;
	output [2:0] GREEN;
	output [1:0] BLUE;
	output HBLANK;
	output VBLANK;
	
	reg VS = 0;
	reg HS = 0;
	
	input RESET;
	
	//current client data
	input [7:0] COLOR;
	output CLK_DATA;
	output [9:0] CURX;
	output [8:0] CURY;
	
	//##### Module constants (http://tinyvga.com/vga-timing/640x480@60Hz)
	parameter HDisplayArea = 640;  // horizontal display area
	parameter HLimit = 800;        // maximum horizontal amount (limit)
	parameter HFrontPorch = 16; 	 // h. front porch
	parameter HBackPorch = 48;		 // h. back porch
	parameter HSyncWidth = 96;		 // h. pulse width
	
	parameter VDisplayArea = 480;  // vertical display area
	parameter VLimit = 525; 		 // maximum vertical amount (limit)
	parameter VFrontPorch = 10;	 // v. front porch
	parameter VBackPorch = 33;		 // v. back porch
	parameter VSyncWidth = 2;		 // v. pulse width 

	//##### Local variables
	wire clk_25MHz;
	
	reg [9:0] CurHPos = 0; //maximum of HLimit (2^10 - 1 = 1023)
	reg [9:0] CurVPos = 0; //maximum of VLimit
	reg HBlank_reg, VBlank_reg, Blank = 0;
	
	reg [9:0] CurrentX = 0;    //maximum of HDisplayArea
	reg [8:0] CurrentY = 0;    //maximum of VDisplayArea (2^9 - 1 = 511)
	
	//##### Submodule declaration
	clock_divider clk_div(.clk_in(clk_50MHz), .clk_out(clk_25MHz));
	
	//shifts the clock by half a period (negates it)
	//see timing diagrams for a better understanding of the reason for this
	clock_shift clk_shift(.clk_in(clk_25MHz), .clk_out(CLK_DATA));
	
	//simulate the vertical and horizontal positions
	always @(posedge clk_25MHz) begin
		if(CurHPos < HLimit-1) begin
			CurHPos <= CurHPos + 1;
		end
		else begin
			CurHPos <= 0;
			
			if(CurVPos < VLimit-1)
				CurVPos <= CurVPos + 1;
			else
				CurVPos <= 0;
		end
		if(RESET) begin
			CurHPos <= 0;
			CurVPos <= 0;
		end
	end
	
		//##### VGA Logic (http://tinyvga.com/vga-timing/640x480@60Hz)
	
	//HSync logic
	always @(posedge clk_25MHz)
		if((CurHPos < HSyncWidth) && ~RESET)
			HS <= 1;
		else
			HS <= 0;
			
	//VSync logic		
	always @(posedge clk_25MHz)
		if((CurVPos < VSyncWidth) && ~RESET)
			VS <= 1;
		else
			VS <= 0;
			
	//Horizontal logic		
	always @(posedge clk_25MHz) 
		if((CurHPos >= HSyncWidth + HFrontPorch) && (CurHPos < HSyncWidth + HFrontPorch + HDisplayArea) || RESET)
			HBlank_reg <= 0;
		else
			HBlank_reg <= 1;
			
	//Vertical logic
	always @(posedge clk_25MHz)
		if((CurVPos >= VSyncWidth + VFrontPorch) && (CurVPos < VSyncWidth + VFrontPorch + VDisplayArea) || RESET)
			VBlank_reg <= 0;
		else
			VBlank_reg <= 1;
			
	//Do not output any color information when we are in the vertical
	//or horizontal blanking areas. Set a boolean to keep track of this.
	always @(posedge clk_25MHz)
		if((HBlank_reg || VBlank_reg) && ~RESET)
			Blank <= 1;
		else
			Blank <= 0;
	
	//Keep track of the current "real" X position. This is the actual current X
	//pixel location abstracted away from all the timing details
	always @(posedge clk_25MHz)
		if(HBlank_reg && ~RESET)
			CurrentX <= 0;
		else
			CurrentX <= CurHPos - HSyncWidth - HFrontPorch;
			
	//Keep track of the current "real" Y position. This is the actual current Y
	//pixel location abstracted away from all the timing details
	always @(posedge clk_25MHz) 
		if(VBlank_reg && ~RESET)
			CurrentY <= 0;
		else
			CurrentY <= CurVPos - VSyncWidth - VFrontPorch;
			
	
			
	assign CURX = CurrentX;
	assign CURY = CurrentY;
	assign VBLANK = VBlank_reg;
	assign HBLANK = HBlank_reg;
	assign hs_vga = HS;
	assign vs_vga = VS;
	
	//Respects VGA Blanking areas
	assign RED = (Blank) ? 3'b000 : COLOR[7:5];
	assign GREEN = (Blank) ? 3'b000 : COLOR[4:2];
	assign BLUE = (Blank) ? 2'b00 : COLOR[1:0];

endmodule
