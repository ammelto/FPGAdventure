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
	input clk_50MHz;
	input [3:0] SWITCH;
	input [3:0] BUTTON;
	output vs_vga;
	output hs_vga;
	output [2:0] RED;
	output [2:0] GREEN;
	output [1:0] BLUE;
	
	wire HBlank, VBlank;
	wire [9:0] CurrentX;
	wire [8:0] CurrentY;
	wire clk_vga;
	wire [7:0] mapData;
	reg collision;
	reg turn;
	reg [7:0] color = 0;
	reg [9:0] playerPosX = 320;
	reg [8:0] playerPosY = 240;
	reg [7:0] playerColor = 8'b01101111;
	reg [15:0] counter = 0;
	
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
						.HBlank(HBlank),
						.VBlank(VBlank),
						.mapData(mapData),
						.playerPosX(playerPosX),
						.playerPosY(playerPosY)
	);
	
	always @(negedge clk_vga)begin
		if(counter < 16'HFFFF)
			counter <= counter +1;
		else begin
			counter <= 0;
			turn = ~turn;
			if(collision)
				playerColor = ~playerColor;
		end
	end
	
	always @(posedge turn) begin
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
		else if(SWITCH[3]) begin
			playerPosX <= 320;
			playerPosY <= 240;
		end
	end
	
	always @(posedge clk_vga) begin
		if(HBlank || VBlank) begin
			color <= 0;
		end else begin
			if((CurrentY < playerPosY+9) && (CurrentX < playerPosX+9) && ~(CurrentY < playerPosY-9) && ~(CurrentX < playerPosX-9))begin
					color[7:0] <= playerColor[7:0];
					if(mapData[7:0] == 8'b11100000)
						collision <= 1;
					else 
						collision <= 0;
			end
			else
				color[7:0] <= mapData;
		end
	end
	
	
endmodule
