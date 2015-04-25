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
module map_generator(clk_vga, reset, CurrentX, CurrentY, HBlank, VBlank, playerColor, mapData,
							mapX, mapY
    );

	input [9:0]CurrentX;
	input [8:0]CurrentY;
	input [7:0]playerColor;
	input [2:0]mapX;
	input [2:0]mapY;
	input clk_vga;
	input reset;
	input HBlank;
	input VBlank;
	
	output [7:0]mapData;
	
	reg [7:0]mColor;
	
	wire [7:0]startCastle;
	wire [7:0]hallwayTop;
	
	//Each map layout is split into its own module for readability
	StartCastle StartCastle(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(startCastle),
		.wall(playerColor)
	);
	
	HallwayTop HallwayTopLeft(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(hallwayTop),
		.wall(playerColor)
	);
	
	//Draws the map based on the current mapX and mapY
	//The idea is to have only one output from the map generator module
	//And do all the heavy lifting in the top module
	//The map generator acts as a datapath for the static objects in the game
	always @(posedge clk_vga) begin
		if(HBlank || VBlank) begin
			mColor <= 0;
		end
		else begin
			
			//VGA test pattern for debugging purposes
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
				
			if(mapX == 0 && mapY == 0) begin
				mColor[7:0] <= startCastle[7:0];
			end 
			else if(mapX == 0 && mapY == 1) begin
				mColor[7:0] <= hallwayTop[7:0];
			end 
			else begin
				mColor[7:0] <= 8'b00000000;
			end
			
		end
	end
	
	assign mapData[7:0] = mColor[7:0];
	
endmodule
