`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:13 04/25/2015 
// Design Name: 
// Module Name:    HallwayTop 
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
module HallwayTop(clk_vga, CurrentX, CurrentY, mapData, wall);

	input clk_vga;
	input [9:0]CurrentX;
	input [8:0]CurrentY;
	input [7:0]wall;
	
	output [7:0]mapData;
	
	reg [7:0]mColor;
	
	always @(posedge clk_vga) begin

		if(~(CurrentY < 440)) begin
			mColor[7:0] <= wall;
		end
		else if(CurrentX > 600)begin
			mColor[7:0] <= wall;
		end
		else if(((CurrentY < 40) && (CurrentX < 260)) || ((CurrentY < 40) && ~(CurrentX < 380))) begin
			mColor[7:0] <= wall;
		end else
			mColor[7:0] <= 8'b10110110;
			
	end
	
	
	assign mapData = mColor;


endmodule

