`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:38:31 04/14/2015 
// Design Name: 
// Module Name:    map 
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
module map_generator(clk_vga, CurrentX, CurrentY, HBlank, VBlank, playerPosX, playerPosY, mapData
    );

	input clk_vga;
	input [9:0] CurrentX;
	input [8:0] CurrentY;
	input HBlank;
	input VBlank;
	input [9:0] playerPosX;
	input [8:0] playerPosY;
	
	output [7:0] mapData;
	
	reg [7:0]mColor;

	always @(posedge clk_vga) begin
		if(HBlank || VBlank) begin
			mColor <= 0;
		end
		else begin
			
			//VGA test pattern
			/*
			if(CurrentY < 160) begin
				mColor[7:5] <= 3'b111;
			end
			else if(CurrentY < 320) begin
				mColor[4:2] <= 3'b111;
			end
			else begin
				mColor[1:0] <= 2'b11;
			end
			*/
			if(CurrentY <= 160 && CurrentX<=260) begin
				mColor[7:0] <= 8'b11100000;
			end
			else if(~(CurrentY <= 320) && ~(CurrentX <=600))begin
				mColor[7:0] <= 8'b11100000;
			end
			if(~(CurrentX <=500) && CurrentY <=260 ) begin
				mColor[7:0] <= 8'b11100000;
			end
			else if(~(CurrentY <= 320) && CurrentX < 260)begin
				mColor[7:0] <= 8'b11100000;
			end else
				mColor[7:0] <= 8'b00011100;
		end
	end
	
	assign mapData = mColor;
	
endmodule
