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
	input [3:0]mapX;
	input [3:0]mapY;
	input clk_vga;
	input reset;
	input HBlank;
	input VBlank;
	
	output [7:0]mapData;
	
	reg [7:0]mColor;
	
	//Rooms
	wire [7:0]startCastle;
	wire [7:0]hallwayTop;
	wire [7:0] hallwayRight;
	wire [7:0] blackKeyRoom;
	wire [7:0] hallwayLeft;
	wire [7:0] castle;
	wire [7:0] centerMaze;
	wire [7:0] eCenterMaze;
	wire [7:0] nCenterMaze;
	wire [7:0] sCenterMaze;
	wire [7:0] swMaze;
	wire [7:0] blackInner;
	
	//Each map layout is split into its own module for readability
	StartCastle StartCastle(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(startCastle),
		.wall(playerColor)
	);
	
	HallwayTop HallwayTop(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(hallwayTop),
		.wall(playerColor)
	);
	
	HallwayRight HallwayRight(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(hallwayRight),
		.wall(playerColor)
	);
	
	BlackKeyRoom BlackKeyRoom(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(blackKeyRoom),
		.wall(playerColor)
	);
	
	HallwayLeft HallwayLeft(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(hallwayLeft),
		.wall(playerColor)
	);
	
	Castle Castle(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(castle),
		.wall(playerColor)
	);
	
	CenterMaze CenterMaze(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(centerMaze),
		.wall(playerColor)
	);
	
	ECenter ECenterMaze(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(eCenterMaze),
		.wall(playerColor)
	);
	
	NCenterMaze NCenterMaze(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(nCenterMaze),
		.wall(playerColor)
	);
	
	SCenterMaze SCenterMaze(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(sCenterMaze),
		.wall(playerColor)
	);
	
	SWMaze SWMaze(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(swMaze),
		.wall(playerColor)
	);
	
	BlackInner BlackInner(
		.clk_vga(clk_vga),
		.CurrentX(CurrentX),
		.CurrentY(CurrentY),
		.mapData(blackInner),
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
				
			//Starting castle
			if(mapX == 3 && mapY == 4)
				mColor[7:0] <= startCastle[7:0]; 
			//Central hallway
			else if(mapX == 3 && mapY == 6)
				mColor[7:0] <= hallwayTop[7:0]; 
			//Right hallway
			else if(mapX == 4 && mapY == 6)
				mColor[7:0] <= hallwayRight[7:0];
			//Black key room
			else if(mapX == 4 && mapY == 7)
				mColor[7:0] <= blackKeyRoom[7:0];
			//Left hallway
			else if(mapX == 2 && mapY == 6)
				mColor[7:0] <= hallwayLeft;
			//South Center Maze
			else if(mapX == 1 && mapY == 6) 
				mColor[7:0] <= sCenterMaze;
			//South West Maze
			else if(mapX == 2 && mapY == 4)
				mColor[7:0] <= swMaze;
			//East Center Maze
			else if(mapX == 2 && mapY == 5)
				mColor[7:0] <= eCenterMaze;
			//Center Maze
			else if(mapX == 1 && mapY == 5)
				mColor[7:0] <= centerMaze;
			//North Center Maze
			else if(mapX == 1 && mapY == 4)
				mColor[7:0] <= nCenterMaze;
			//Castle Yellow
			else if(mapX == 3 && mapY == 5)
				mColor[7:0] <= castle;
			//Black Castle
			else if(mapX == 1 && mapY == 3)
				mColor[7:0] <= castle;
			//Challice Room
			else if(mapX == 1 && mapY == 1)
				mColor[7:0] <= startCastle;
			//Black Castle Inner
			else if(mapX == 1 && mapY == 2)
				mColor[7:0] <= blackInner;
			//No map found
			else begin
				mColor[7:0] <= 8'b00000000;
			end
			
		end
	end
	
	assign mapData[7:0] = mColor[7:0];
	
endmodule
