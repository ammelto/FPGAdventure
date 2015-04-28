module Castle(clk_vga, CurrentX, CurrentY, mapData, wall);

	input clk_vga;
	input [9:0]CurrentX;
	input [8:0]CurrentY;
	input [7:0]wall;
	
	output [7:0]mapData;
	
	reg [7:0]mColor;


	//Screen is divided into 40 intervals of 16 pixels each in the x direction	
	always @(posedge clk_vga) begin
		
		//Left wall
		if(CurrentX >= 0 && CurrentX <= 31)
			mColor[7:0] <= wall;
		
		//Right wall
		else if(CurrentX >= 608)
			mColor[7:0] <= wall;
		
		//Bottom wall with door
		else if(CurrentY >=441 && ( (CurrentX <= 256) || (CurrentX >= 384) ) )
			mColor[7:0] <= wall;
		
		//Top wall less castle battlements and door
		else if(CurrentY <= 39 && ( (CurrentX <= 159) || (CurrentX >= 480) ) )
			mColor[7:0] <= wall;
		
		//From x == 160 to 175, inclusive
		else if( (CurrentX >= 160 && CurrentX <= 175) && (
			(CurrentY <= 199) ) )
			mColor[7:0] <= wall;
		
		//From x == 176 to 191, inclusive
		else if( (CurrentX >= 176 && CurrentX <= 191) && (
			(CurrentY >= 40 && CurrentY <= 199) ) )
			mColor[7:0] <= wall;
		
		//From x == 192 to 207, inclusive
		else if( (CurrentX >= 192 && CurrentX <= 207) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 208 to 223, inclusive
		else if( (CurrentX >= 208 && CurrentX <= 223) && (
			(CurrentY >= 40 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 224 to 239, inclusive
		else if( (CurrentX >= 224 && CurrentX <= 239) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 240 to 255, inclusive
		else if( (CurrentX >= 240 && CurrentX <= 255) && (
			(CurrentY >= 40 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 256 to 271, inclusive
		else if( (CurrentX >= 256 && CurrentX <= 271) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 272 to 287, inclusive
		else if( (CurrentX >= 272 && CurrentX <= 287) && (
			(CurrentY >= 120 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 288 to 351, inclusive
		else if( (CurrentX >= 288 && CurrentX <= 351) && (
			(CurrentY >= 120 && CurrentY <= 279) ) )
			mColor[7:0] <= wall;
		
		//From x == 352 to 367, inclusive
		else if( (CurrentX >= 352 && CurrentX <= 367) && (
			(CurrentY >= 120 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 368 to 383, inclusive
		else if( (CurrentX >= 368 && CurrentX <= 383) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 384 to 399, inclusive
		else if( (CurrentX >= 384 && CurrentX <= 399) && (
			(CurrentY >= 40 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 400 to 415, inclusive
		else if( (CurrentX >= 400 && CurrentX <= 415) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 416 to 431, inclusive
		else if( (CurrentX >= 416 && CurrentX <= 431) && (
			(CurrentY >= 40 && CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 432 to 447, inclusive
		else if( (CurrentX >= 432 && CurrentX <= 447) && (
			(CurrentY <= 359) ) )
			mColor[7:0] <= wall;
		
		//From x == 448 to 463, inclusive
		else if( (CurrentX >= 448 && CurrentX <= 463) && (
			(CurrentY >= 40 && CurrentY <= 199) ) )
			mColor[7:0] <= wall;
		
		//From x == 464 to 479, inclusive
		else if( (CurrentX >= 464 && CurrentX <= 479) && (
			(CurrentY <= 199) ) )
			mColor[7:0] <= wall;
		
		//floor area - grey
		else
			mColor[7:0] <= 8'b10110110;
			
	end
		
	assign mapData = mColor;

endmodule
 
 
