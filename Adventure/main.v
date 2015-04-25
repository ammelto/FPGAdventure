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
	reg [8:0] playerPosY = 240;
	reg [7:0] playerColor;
	reg [2:0] mapX = 0;
	reg [2:0] mapY = 0;
	//
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
		else if (BUTTON[1] && (playerPosY < 470)) begin
			if(collision) begin
				playerPosY <= playerPosY - 7;
				end
			else begin
				playerPosY <= playerPosY + 1;
			end
		end
		else if(BUTTON[2] && ~(playerPosY <= 10)) begin
			if(collision) begin
				playerPosY <= playerPosY + 7;
				end
			else begin
				playerPosY <= playerPosY - 1;
			end
		end
		else if(BUTTON[3] && ~(playerPosX <= 16)) begin
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
			playerPosX <= 20;
			mapX <= mapX + 1;
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
			playerPosX <= 619;
			mapX <= mapX - 1;
		end
		
		//Color for specific maps
		if(mapX == 0 && mapY == 0)
			playerColor[7:0] <= 8'b11111100;
		else if(mapX == 0 && mapY == 1)
			playerColor[7:0] <= 8'b00000011;
			
		//Reset
		if(SWITCH[3]) begin
			playerPosX <= 320;
			playerPosY <= 240;
			mapX <= 0;
			mapY <= 0;
		end
	end
	
	//Draws the dynamic objects within the world
	//It overwrites the mapData with current dynamic object
	always @(posedge clk_vga) begin
		if(HBlank || VBlank) begin
			color <= 0;
		end else begin
			//Draws the player
			if((CurrentY < playerPosY+9) && (CurrentX < playerPosX+9) && ~(CurrentY < playerPosY-9) && ~(CurrentX < playerPosX-9))begin
					color[7:0] <= playerColor[7:0];
					//Collision is determined by color rather than hitboxes for memory purposes
					if(mapData[7:0] == playerColor[7:0])
						collision <= 1;
					else 
						collision <= 0;
			end
			//Finally draws the map
			else
				color[7:0] <= mapData;
		end
	end
	
	
endmodule
