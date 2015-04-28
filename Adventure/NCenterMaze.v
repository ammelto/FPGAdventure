module NCenterMaze(clk_vga, CurrentX, CurrentY, mapData, wall);

	input clk_vga;
	input [9:0] CurrentX;
	input [8:0] CurrentY;
	input [7:0] wall;
	
	output [7:0] mapData;
	
	reg [7:0] mColor;


	//Screen is divided into 20 intervals of 32 pixels each in the x direction	
	always @(posedge clk_vga) begin
		
		//From x == 0 to 63, inclusive
		if((CurrentX >= 0 && CurrentX <=63) && (
			(CurrentY <= 39) ||
			(CurrentY >= 120 && CurrentY <= 359) || 
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
		
		//From x == 64 to 95, inclusive
		else if( (CurrentX >= 64 && CurrentX <= 95) && ( 
			(CurrentY <= 39) || 
			(CurrentY >= 280 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 96 to 127, inclusive
		else if( (CurrentX >= 96 && CurrentX <= 127) && ( 
			(CurrentY <= 39) || 
			(CurrentY >= 280) ) )
			mColor[7:0] <= wall;
		
		//From x == 128 to 159, inclusive
		else if( (CurrentX >= 128 && CurrentX <= 159) && ( 
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;

		//From x == 160 to 224, inclusive
		else if( (CurrentX >= 160 && CurrentX <= 224) && (
			(CurrentY <= 39) ||
			(CurrentY >= 280 && CurrentY <= 359) ||
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
			
		//From x == 224 to 255, inclusive
		else if( (CurrentX >= 224 && CurrentX <= 255) && (
			(CurrentY <= 199) || 
			(CurrentY >= 280 && CurrentY <= 359) ||
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
		
		//From X == 256 to 287, inclusive
		else if( (CurrentX >= 256 && CurrentX <= 287) && (
			(CurrentY >= 120 && CurrentY <= 199) ||
			(CurrentY >= 280) ) )
			mColor[7:0] <= wall;

		//From x == 352 to 383, inclusive
		else if( (CurrentX >= 352 && CurrentX <= 383) && (
			(CurrentY >= 120 && CurrentY <= 199) ||
			(CurrentY >= 280) ) )
			mColor[7:0] <= wall;
		
		//From x == 384 to 415, inclusive
		else if( (CurrentX >= 384 && CurrentX <= 415) && (
			(CurrentY <= 199) || 
			(CurrentY >= 280 && CurrentY <= 359) ||
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
		
		//From x == 416 to 479, inclusive
		else if( (CurrentX >= 416 && CurrentX <= 479) && (
			(CurrentY <= 39) ||
			(CurrentY >= 280 && CurrentY <= 359) ||
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
		
		//From x == 480 to 511, inclusive
		else if( (CurrentX >= 480 && CurrentX <= 511) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 512 to 543, inclusive
		else if( (CurrentX >= 512 && CurrentX <= 543) && (
			(CurrentY <= 39) || 
			(CurrentY >= 280) ) )
			mColor[7:0] <= wall;
		
		//From x == 544 to 575, inclusive
		else if( (CurrentX >= 544 && CurrentX <= 575) && ( 
			(CurrentY <= 39) || 
			(CurrentY >= 280 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 576 to 640, inclusive
		else if((CurrentX >= 576 && CurrentX <= 640) && ( 
			(CurrentY <= 39) ||
			(CurrentY >= 120 && CurrentY <= 359) || 
			(CurrentY >= 441) ) )
			mColor[7:0] <= wall;
		
		//floor area - grey
		else
			mColor[7:0] <= 8'b10110110;
			
	end
	
	
	assign mapData = mColor;


endmodule
 
 
