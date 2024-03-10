#ifndef Ludoflow_h
#define Ludoflow_h


//Four Houses Red,Yellow, Green Blue
//Each House has 4 members

//Game is Played by eother 2 0r four Players


enum Colour{RED, YELLOW, GREEN, BLUE};

//Game is Played by either 2 or four Players

//Players can be assigned to either 2  to Houses if 2 palyers are playing
// or one Players for 4 Houses 

//Players can be assigned  

//Let us Define Structure 
struct House{
	//Colour has  a DataType
	Colour colour;
	//int member
	int member;
	//bool Status
	bool status;
	House(Colour colour = RED, int m = 4, bool status = false);

};

struct Players{
	//string nameOfPlayer;
	char name[50];
	House house1;
	House house2;
};

void ConfigureGame(Players players[], int numPlayers);
void PrintResult(Players players[], int numPlayers);
#endif
