#include <iostream>
#include "ludoflow.h"

//we need to call the House constructor 
// recall we use somtheing Like the for cout
// std::cout<<"enter name"

House::House(Colour c, int m, bool s): colour(c),  status(s) , member(m){}

void ConfigureGame(Players players[], int numPlayers){

	//Game cane be Playerd by either 2 or 4 peoplw
	//Make sure only assigned house can be used 

	char colortype;
	//TO cast Color to enum is difficiult we might need to store color is a 
	//datatype of array
	//Colour assignedColors[4] = {RED, YELLOW, GREEN, BLUE};
	Colour assignedColors[4];

	//wat is these doing assined color count
	int assignedColorCount =0;

	//Since gme can be Played by either 2 0r 4 Players
	//we iterate base on the NuM pALYERS WE pass

	//NumpLayers is either 2 or 4 
	//we will do thet confimation in the Main method
	for(int i = 0; i < numPlayers; i++)
	{
		//Enter a name for the Player
	    std::cout <<"Enter player"<< i+1<<"'s name";
		//Pass it to the Player
		//Pass in the First Name to these Players Name
		std::cin>>players[i].name;

		//Enter a color for the Player 
		std::cout <<"Enter Color"<< "For PLayer"<< i+1<<"'s color {R/Y/G/B}";
		std::cin>>colortype;

		 Colour chosenColor;
		// convert it to the color, 
		switch(colortype)
		{
		case 'R':
			 chosenColor = RED;
			 break;
		 

			 case 'Y':
			 chosenColor = YELLOW;
			 break;

			 case 'G':
			 chosenColor = GREEN;
			 break;

			 case 'B':
			 chosenColor = BLUE;
			 break;
			 default:
				 std::cerr <<"Invale Color"<<std::endl;
				 exit(1);
		}

		//CHEck if the chosen color has been assigned
		//But assigned ColorcOunt is always zero
		//RecheckUn are iterating through  a List 
		bool colorAlreadyAssigned = false;
		for(int j =0; j < assignedColorCount; ++j){
			if(assignedColors[j] == chosenColor){
			   colorAlreadyAssigned = true;
			   break;
			}	
		}
		// Assigne the Chosen color to the Player
		if(!colorAlreadyAssigned){
			//cHECK if the Color is empty den add it to the List to Populate the
			//List 
		  //Wat is these Line doing 
			assignedColors[assignedColorCount++] = chosenColor;
			players[i].house1.colour = chosenColor;
			players[i].house2.colour = chosenColor;
			players[i].house1.status = true;
			players[i].house2.status = true;
		}
		else{

			std::cout<<"You have chosen these color"<< chosenColor<<std::endl;
		   std::cerr<<"Color already assigneed exsiting the Program"<<std::endl;
			   exit(1);
		}		
		//Before u cast u need to check if the color has been assigned before
		// den cast it to the color
	
	}
}


void PrintResult(Players players[], int numPlayers){

	for(int i =0; i < numPlayers; i++)
	{
	 std::cout<<players[i].name<<"\t"
		 //To print House is a bit specail cause of the Color stuff
		 <<(players[i].house1.colour == RED ? "Red" :
		     players[i].house1.colour == YELLOW ? "Yellow" :
			 players[i].house1.colour == GREEN ? "Green" : "Blue")
			 <<"\t"
		 
		<<players[i].house1.member <<"\n";
     

	  std::cout<<players[i].name<<"\t"
		 //To print House is a bit specail cause of the Color stuff
		 <<(players[i].house2.colour == RED ? "Red" :
		     players[i].house2.colour == YELLOW ? "Yellow" :
			 players[i].house2.colour == GREEN ? "Green" : "Blue")
			 <<"\t"
		 
		<<players[i].house2.member <<"\n";
	
	}
}