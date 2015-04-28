`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:04:29 04/14/2015 
// Design Name: 
// Module Name:    main 
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
module main(clk_50MHz, vs_vga, hs_vga, RED, GREEN, BLUE, SWITCH, BUTTON);
	input [3:0] SWITCH;
	input [3:0] BUTTON;
	input clk_50MHz;

	output [2:0] RED;
	output [2:0] GREEN;
	output [1:0] BLUE;
	output vs_vga;
	output hs_vga;
	
	wire [9:0] CurrentX;
	wire [8:0] CurrentY;
	wire [7:0] mapData;
	wire HBlank, VBlank;
	wire clk_vga;

	reg [15:0] counter = 0;
	reg turn = 0;
	//
	reg [9:0] playerPosX = 320;
	reg [8:0] playerPosY = 380;
	reg [7:0] playerColor;
	reg [3:0] mapX = 3;
	reg [3:0] mapY = 5;
	//
	reg dragStep = 0;
	reg [1:0]dragState = 0;
	reg [9:0] grundleX = 160;
	reg [8:0] grundleY = 240;
	reg [9:0] rhindleX = 320;
	reg [8:0] rhindleY = 240;
	reg [9:0] yorgleX = 320;
	reg [8:0] yorgleY = 240;
	//Starting Map Locations
	reg [3:0] grundleMapX = 4;
	reg [3:0] grundleMapY = 7;
	reg [3:0] rhindleMapX = 2;
	reg [3:0] rhindleMapY = 6;
	reg [3:0] yorgleMapX = 1;
	reg [3:0] yorgleMapY = 1;
	//
	reg yellowUsed = 0;
	reg blackUsed = 0;
	reg [3:0] itemGet = 0000;
	reg [9:0] yellowKeyX = 128;
	reg [8:0] yellowKeyY = 220;
	reg [9:0] blackKeyX = 128;
	reg [8:0] blackKeyY = 220;
	reg [9:0] swordX = 128;
	reg [8:0] swordY = 340;
	reg [9:0] challiceX = 128;
	reg [8:0] challiceY = 340;
	reg [3:0] yellowKeyMapX = 3;
	reg [3:0] yellowKeyMapY = 5;
	reg [3:0] blackKeyMapY = 7;
	reg [3:0] blackKeyMapX = 4;
	reg [3:0] swordMapX = 3;
	reg [3:0] swordMapY = 4;
	reg [3:0] challiceMapX = 1;
	reg [3:0] challiceMapY = 1;
	
	//
	parameter gateX = 304;
	parameter gateY = 280;
	reg [7:0] color = 0;
	reg collision = 0;
	
	
	vga_driver vga(.clk_50MHz(clk_50MHz),
	               .vs_vga(vs_vga),
						.hs_vga(hs_vga),
						.RED(RED),
						.GREEN(GREEN),
						.BLUE(BLUE),
						.VBLANK(VBlank),
						.HBLANK(HBlank),
						.CURX(CurrentX), 
						.CURY(CurrentY), 
						.CLK_DATA(clk_vga), 
						.COLOR(color),
						.RESET(SWITCH[3])
	);
						
	map_generator map(.clk_vga(clk_vga),
						.CurrentX(CurrentX),
						.CurrentY(CurrentY),
						.reset(SWITCH[3]),
						.HBlank(HBlank),
						.VBlank(VBlank),
						.mapData(mapData),
						.playerColor(playerColor),
						.mapX(mapX),
						.mapY(mapY)
	);
	
	always @(negedge clk_vga)begin
	//Slows the clock down by 16 ticks.
	//This is the game progression speed
		if(counter < 16'HFFFF)
			counter <= counter +1;
		else begin
			counter <= 0;
			turn = ~turn;
		end
	end
	
	//Player
	//The player, along with all dynamic objects, have their
	//datapath in the top module because they are drawn with respect to a point
	//that's being manipulated and it's better to reference the register bank in the same module
	//it's being controlled in to prevent data corruption
	always @(posedge turn) begin
		//Movement
		//Progress forward until a wall is hit
		//Pushes back once collision is detected
		if(BUTTON[0] && (playerPosX < 624)) begin
			if(collision)begin
				playerPosX <= playerPosX - 7;
			end
			else begin
				playerPosX <= playerPosX + 1;
			end
		end
		if (BUTTON[1] && (playerPosY < 470)) begin
			if(collision) begin
				playerPosY <= playerPosY - 7;
				end
			else begin
				playerPosY <= playerPosY + 1;
			end
		end
		if(BUTTON[2] && ~(playerPosY <= 10)) begin
			if(collision) begin
				playerPosY <= playerPosY + 7;
				end
			else begin
				playerPosY <= playerPosY - 1;
			end
		end
		if(BUTTON[3] && ~(playerPosX <= 16)) begin
			if(collision) begin
				playerPosX <= playerPosX + 7;
				end
			else begin
				playerPosX <= playerPosX - 1;
			end
		end
		
		//Map Transition
		//mapX and mapY are stored as seperate values to create a 'grid'
		if(~(playerPosX < 624) && ~(mapX == 8)) begin
			//From SCenter -> NCenter
			if(mapX == 1 && mapY == 6) begin
				mapX <= 1;
				mapY <= 4;
			end
			//ECenter -> Center
			else if(mapX == 2 && mapY == 5) begin
				mapX <= 1;
				mapY <= 5;
			end
			//SW -> SCenter
			else if(mapX == 2 && mapY == 4) begin
				mapX <= 1;
				mapY <= 6;
			end
			//Normal Progression
			else begin
				mapX <= mapX + 1;
			end
			playerPosX <= 20;
		end
		else if(~(playerPosY < 470) && ~(mapY == 8)) begin
			playerPosY <= 14;
			mapY <= mapY + 1;
		end
		else if(playerPosY <= 10 && ~(mapY == 0)) begin
			playerPosY <= 466;
			mapY <= mapY - 1;
		end
		else if(playerPosX <= 16 && ~(mapX == 0)) begin
			//SCenter -> SW
			if(mapX == 1 && mapY == 6) begin
				mapX <= 2;
				mapY <= 4;
			end
			//Center -> ECenter
			else if(mapX == 1 && mapY == 5) begin
				mapX <= 2;
				mapY <= 5;
			end
			//NCenter -> SCenter
			else if(mapX == 1 && mapY == 4) begin
				mapX <= 1;
				mapY <= 6;
			end
			//normal transition
			else begin
				mapX <= mapX - 1;
			end
			playerPosX <= 619;
		end
		
		//Color for specific maps
		if(mapX == 3 && mapY <= 5)
			playerColor[7:0] <= 8'b11111100;
		//black key room
		else if(mapX == 4 && mapY == 7) 
			playerColor[7:0] <= 8'b11110000;
		else if(mapX == 1) begin
			//Challice Room
			if(mapY == 1)
				playerColor[7:0] <= 8'b10000111;
			//Black castle inner
			else if(mapY == 2)
				playerColor[7:0] <= 8'b11001100;
			//Black Castle
			else if(mapY == 3)
				playerColor[7:0] <= 8'b00000000;
			//Maze
			else
				playerColor[7:0] <= 8'b00100111;
		end
		//Maze
		else if(mapX == 2	&& mapY < 6)
			playerColor[7:0] <= 8'b00100111;
		//Left hallway
		else if(mapX == 2 && mapY == 6)
			playerColor[7:0] <= 8'b01111000;
		//Middle hallway
		else if(mapX == 3 && mapY == 6)
			playerColor[7:0] <= 8'b00011100;
		//Right hallway
		else if(mapX == 4 && mapY == 6)
			playerColor[7:0] <= 8'b10010000;
		//Color not found
		else
			playerColor[7:0] <= 8'b11111111;
			
		//Reset
		if(SWITCH[3]) begin
			playerPosX <= 320;
			playerPosY <= 380;
			mapX <= 3;
			mapY <= 5;
		end
		
		dragStep <= ~dragStep;
	end
	
	//Dragon
	always @(posedge dragStep) begin
		if(mapX == grundleMapX && mapY == grundleMapY) begin
			if(playerPosX > grundleX)
				grundleX <= grundleX + 1;
			if(playerPosY > grundleY)
				grundleY <= grundleY + 1;
			if(playerPosX < grundleX)
				grundleX <= grundleX - 1;
			if(playerPosY < grundleY)
				grundleY <= grundleY - 1;	
			if(playerPosX == grundleX && playerPosY == grundleY)
				dragState <= 1;
			else 
				dragState <= 0;
		end
		else begin
			grundleX <= 160;
			grundleY <= 240;
		end
		//(playerPosX <= grundleX+2 && playerPosX >= grundleX-2) && (playerPosY <= grundleY+2 && playerPosY >= grundleY-2)
	end
	
	//Items
	always @(posedge turn)begin
	
		if(mapX == yellowKeyMapX && mapY == yellowKeyMapY && ~yellowUsed) begin
			if((playerPosX > yellowKeyX && playerPosX < yellowKeyX +32) &&  (playerPosY > yellowKeyY -4 && playerPosY < yellowKeyY +8))begin
				itemGet <= 4'b0001;
			end
		end
		if(mapX == blackKeyMapX && mapY == blackKeyMapY && ~blackUsed) begin
			if((playerPosX > blackKeyX && playerPosX < blackKeyX +32) &&  (playerPosY > blackKeyY -4 && playerPosY < blackKeyY +8))begin
				itemGet <= 4'b0010;
			end
		end
		if(itemGet[0]) begin
			yellowKeyX <= playerPosX + 15;
			yellowKeyY <= playerPosY;
			//yellowKeyMapX <= mapX;
			//yellowKeyMapY <= mapY;
		end
		if(itemGet[0] && mapX == 3 && mapY == 5) begin
			if(playerPosX < 352 && playerPosX > 288 && playerPosY < 360) begin
				yellowUsed = 1;
			end
		end
		if(itemGet[1]) begin
			blackKeyX <= playerPosX + 15;
			blackKeyY <= playerPosY;
			//blackKeyMapX <= mapX;
			//blackKeyMapY <= mapY; 
		end
		
		if(itemGet[1] && mapX == 1 && mapY == 3) begin
			if(playerPosX < 352 && playerPosX > 288 && playerPosY < 360) begin
				blackUsed = 1;
			end
		end
		
	
	end

	//Render loop
	//Draws the dynamic objects within the world
	//It overwrites the mapData with current dynamic object
	always @(posedge clk_vga) begin
		if(HBlank || VBlank) begin
			color <= 0;
		end else begin
			//Draws Grundle advancing
			
			if((mapX == grundleMapX && mapY == grundleMapY && dragState == 0) 
				&& (
						(((CurrentX >= grundleX -12) && (CurrentX < grundleX -8)) && (
								((CurrentY >= grundleY) && (CurrentY <= grundleY+8)) || 
								((CurrentY >= grundleY + 32) && (CurrentY <= grundleY + 52)) ||
								((CurrentY >= grundleY + 60) && (CurrentY <= grundleY + 68))
							))
						||	(((CurrentX >= grundleX -8) && (CurrentX < grundleX -4)) && (
								((CurrentY >= grundleY) && (CurrentY <= grundleY+8)) ||
								((CurrentY >= grundleY +28) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +64) && (CurrentY <= grundleY +68))
							))
						|| (((CurrentX >= grundleX -4) && (CurrentX < grundleX)) && (
								((CurrentY >= grundleY) && (CurrentY <= grundleY+8)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +36)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +56)) ||
								((CurrentY >= grundleY +64) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX) && (CurrentX < grundleX +4)) && (
								((CurrentY >= grundleY) && (CurrentY <= grundleY+8)) ||
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +32)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +56)) ||
								((CurrentY >= grundleY +68) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX +4) && (CurrentX < grundleX +8)) && (
								((CurrentY >= grundleY -4) && (CurrentY <= grundleY)) ||
								((CurrentY >= grundleY +4) && (CurrentY <= grundleY +12)) ||
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +32)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +64)) ||
								((CurrentY >= grundleY +68) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX +8) && (CurrentX < grundleX +12)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY)) ||
								((CurrentY >= grundleY +4) && (CurrentY <= grundleY +32)) ||
								((CurrentY >= grundleY +44) && (CurrentY <= grundleY +56)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +64)) ||
								((CurrentY >= grundleY +68) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX +12) && (CurrentX < grundleX +16)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY +12)) ||
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX +16) && (CurrentX < grundleX +20)) && (
								((CurrentY >= grundleY -4) && (CurrentY <= grundleY +4)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +52))
							))
						)
			) begin
						color[7:0] <= 8'b00011100;
			end
			//Draws grundle eating
			else if((mapX == grundleMapX && mapY == grundleMapY && dragState == 1) 
				&& (
						(((CurrentX >= grundleX -12) && (CurrentX < grundleX -8)) && (
								((CurrentY >= grundleY -16) && (CurrentY <= grundleY -12)) || 
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +24)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +72))
							))
						||	(((CurrentX >= grundleX -8) && (CurrentX < grundleX -4)) && (
								((CurrentY >= grundleY -12) && (CurrentY <= grundleY -8)) ||
								((CurrentY >= grundleY +16) && (CurrentY <= grundleY +20)) ||
								((CurrentY >= grundleY +32) && (CurrentY <= grundleY +48)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +64)) ||
								((CurrentY >= grundleY +68) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX -4) && (CurrentX < grundleX)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY -4)) ||
								((CurrentY >= grundleY +12) && (CurrentY <= grundleY +16)) ||
								((CurrentY >= grundleY +28) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +64)) ||
								((CurrentY >= grundleY +68) && (CurrentY <= grundleY +72))
							))
						|| (((CurrentX >= grundleX) && (CurrentX < grundleX +4)) && (
								((CurrentY >= grundleY -4) && (CurrentY <= grundleY)) ||
								((CurrentY >= grundleY +8) && (CurrentY <= grundleY +12)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +56)) ||
								((CurrentY >= grundleY +60) && (CurrentY <= grundleY +64))
							))
						|| (((CurrentX >= grundleX +4) && (CurrentX < grundleX +8)) && (
								((CurrentY >= grundleY -4) && (CurrentY <= grundleY +12)) ||
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +64))
							))
						|| (((CurrentX >= grundleX +8) && (CurrentX < grundleX +12)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY)) ||
								((CurrentY >= grundleY +4) && (CurrentY <= grundleY +56))
							))
						|| (((CurrentX >= grundleX +12) && (CurrentX < grundleX +16)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY +12)) ||
								((CurrentY >= grundleY +20) && (CurrentY <= grundleY +52))
							))
						|| (((CurrentX >= grundleX +16) && (CurrentX < grundleX +20)) && (
								((CurrentY >= grundleY -4) && (CurrentY <= grundleY +4)) ||
								((CurrentY >= grundleY +28) && (CurrentY <= grundleY +48))
						))
					)
			) begin
						color[7:0] <= 8'b00011100;
			end
			//Grundle Slain
			else if((mapX == grundleMapX && mapY == grundleMapY && dragState == 2) 
				&& (
						(((CurrentX >= grundleX -12) && (CurrentX < grundleX -8)) && (
								((CurrentY >= grundleY +16) && (CurrentY <= grundleY +36))
							))
						||	(((CurrentX >= grundleX -8) && (CurrentX < grundleX -4)) && (
								((CurrentY >= grundleY +12) && (CurrentY <= grundleY +20)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +44)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +60))
							))
						|| (((CurrentX >= grundleX -4) && (CurrentX < grundleX)) && (
								((CurrentY >= grundleY +12) && (CurrentY <= grundleY +16)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +56) && (CurrentY <= grundleY +60))
							))
						|| (((CurrentX >= grundleX) && (CurrentX < grundleX +4)) && (
								((CurrentY >= grundleY +8) && (CurrentY <= grundleY +16)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +44)) ||
								((CurrentY >= grundleY +56) && (CurrentY <= grundleY +60))
							))
						|| (((CurrentX >= grundleX +4) && (CurrentX < grundleX +8)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY +20)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +44)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +56) && (CurrentY <= grundleY +60))
							))
						|| (((CurrentX >= grundleX +8) && (CurrentX < grundleX +12)) && (
								((CurrentY >= grundleY -8) && (CurrentY <= grundleY +8)) ||
								((CurrentY >= grundleY +12) && (CurrentY <= grundleY +20)) ||
								((CurrentY >= grundleY +24) && (CurrentY <= grundleY +40)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +52)) ||
								((CurrentY >= grundleY +56) && (CurrentY <= grundleY +60)) 
							))
						|| (((CurrentX >= grundleX +12) && (CurrentX < grundleX +16)) && (
								((CurrentY >= grundleY +4) && (CurrentY <= grundleY +20)) ||
								((CurrentY >= grundleY +28) && (CurrentY <= grundleY +40)) ||
								((CurrentY >= grundleY +48) && (CurrentY <= grundleY +60)) 
							))
						|| (((CurrentX >= grundleX +16) && (CurrentX < grundleX +20)) && (
								((CurrentY >= grundleY +8) && (CurrentY <= grundleY +16))
						))
					)
			) begin
						color[7:0] <= 8'b00011100;
			end
			else if(((mapX == 3 && mapY == 5 && ~yellowUsed) || (mapX == 1 && mapY == 3 && ~blackUsed))
				&&(
					(((CurrentX >= gateX) && (CurrentX < gateX +5)) && (
								((CurrentY >= gateY) && (CurrentY <= gateY +80))
					))
				|| (((CurrentX >= gateX +10) && (CurrentX < gateX +15)) && (
								((CurrentY >= gateY) && (CurrentY <= gateY +80))
					))
				|| (((CurrentX >= gateX +20) && (CurrentX < gateX +25)) && (
								((CurrentY >= gateY) && (CurrentY <= gateY +80))
					))
				|| (((CurrentX >= gateX +30) && (CurrentX < gateX +35)) && (
								((CurrentY >= gateY) && (CurrentY <= gateY +80))
					))
				)
			) begin
				color[7:0] <= 8'b00000000;
			end
			//Draws the key
			else if((((mapX == yellowKeyMapX && mapY == yellowKeyMapY) || itemGet[0]) && yellowUsed == 0) && (
					(((CurrentY >= yellowKeyY -4) && (CurrentY < yellowKeyY)) && (
								((CurrentX >= yellowKeyX +22) && (CurrentX <= yellowKeyX +32))
							))
					|| (((CurrentY >= yellowKeyY) && (CurrentY < yellowKeyY +4)) && (
								((CurrentX >= yellowKeyX ) && (CurrentX <= yellowKeyX +24)) ||
								((CurrentX >= yellowKeyX +28) && (CurrentX <= yellowKeyX +32))
							))
					|| (((CurrentY >= yellowKeyY +4) && (CurrentY < yellowKeyY +8)) && (
								((CurrentX >= yellowKeyX ) && (CurrentX <= yellowKeyX +4)) ||
								((CurrentX >= yellowKeyX +8) && (CurrentX <= yellowKeyX +12)) ||
								((CurrentX >= yellowKeyX +22) && (CurrentX <= yellowKeyX +32))
						))
				)
			)
				color[7:0] <= 8'b11111100;
			else if((((mapX == blackKeyMapX && mapY == blackKeyMapY) || itemGet[1]) && blackUsed == 0) && (
					(((CurrentY >= blackKeyY -4) && (CurrentY < blackKeyY)) && (
								((CurrentX >= blackKeyX +22) && (CurrentX <= blackKeyX +32))
							))
					|| (((CurrentY >= blackKeyY) && (CurrentY < blackKeyY +4)) && (
								((CurrentX >= blackKeyX ) && (CurrentX <= blackKeyX +24)) ||
								((CurrentX >= blackKeyX +28) && (CurrentX <= blackKeyX +32))
							))
					|| (((CurrentY >= blackKeyY +4) && (CurrentY < blackKeyY +8)) && (
								((CurrentX >= blackKeyX ) && (CurrentX <= blackKeyX +4)) ||
								((CurrentX >= blackKeyX +8) && (CurrentX <= blackKeyX +12)) ||
								((CurrentX >= blackKeyX +22) && (CurrentX <= blackKeyX +32))
						))
				)
			)
				color[7:0] <= 8'b00000000;
			//Draws the player
			else if((CurrentY < playerPosY+9) && (CurrentX < playerPosX+9) && ~(CurrentY < playerPosY-9) && ~(CurrentX < playerPosX-9))begin
					color[7:0] <= playerColor[7:0];
					//Collision is determined by color rather than hitboxes for memory purposes
					if(mapData[7:0] == playerColor[7:0]) begin
						collision <= 1;
					end
					else
						collision <= 0;
						
					if(mapX == 3 && mapY == 5) begin
						if(playerPosX > 288 && playerPosY < 352)begin
							if(yellowUsed)
								collision <= 0;
							else
								collision <= 1;
						end
					end
					
					if(mapX == 1 && mapY == 3) begin
						if(playerPosX > 288 && playerPosY < 352)begin
							if(blackUsed)
								collision <= 0;
							else
								collision <= 1;
						end
					end
			end
			//Finally draws the map
			else
				color[7:0] <= mapData;
		end
	end
	
	
endmodule
