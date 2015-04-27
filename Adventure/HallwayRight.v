`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:58 04/26/2015 
// Design Name: 
// Module Name:    HallwayRight 
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
module HallwayRight(clk_vga, CurrentX, CurrentY, mapData, wall);

	input clk_vga;
	input [9:0]CurrentX;
	input [8:0]CurrentY;
	input [7:0]wall;
	
	output [7:0]mapData;
	
	reg [7:0]mColor;
	
	always @(posedge clk_vga) begin
		//Top walls
		if((CurrentY < 40) && ~(CurrentX < 0)) begin
			mColor[7:0] <= wall;
		end 
		//Right side wall
		else if(~(CurrentX < 600)) begin
			mColor[7:0] <= wall;
		end
		//Bottom wall
		else if((~(CurrentY < 440) && (CurrentX < 260)) || (~(CurrentY < 440) && ~(CurrentX < 380))) begin
			mColor[7:0] <= wall;
		//floor area - grey
		end else
			mColor[7:0] <= 8'b10110110;
			
	end
	
	
	assign mapData = mColor;


endmodule

