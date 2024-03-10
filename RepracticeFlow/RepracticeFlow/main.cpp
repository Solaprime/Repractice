#include <iostream>
#include <string>
#include "ludoflow.h"

using namespace std;

int main()
{
 //Players playersName[4];
 //  int numberofPlayers;
   
  // char color;
	char colorType[10];

	int numberofPlayers;
	Players player[4];

	cout <<"Let us Play a game"<<endl;
	cout<<"Enter Number of Players (2 or 4):  ";

	cin>>numberofPlayers;

	//Comfirm Condtione
	if( numberofPlayers != 2 && numberofPlayers != 4){
	
	  cout<<"Invalid Number Existing thr Progam"<<endl;
	}

	//Configure game
	 ConfigureGame(player, numberofPlayers);

	 cout<<"The initail result"<<endl;

	 cout<<"Name\tHouse\tMember\n";

	 PrintResult(player, numberofPlayers);

	 //Perform the Deduction 
	 for(int i = 0; i < numberofPlayers; i++)
	 {
	     if(i == 0) player[i].house1.member -= 1;
		 else if(i == 1) player[i].house2.member -= 2;
		 else  if(i == 2) player[i].house1.member -= 3;
		 else    player[i].house2.member -= 4;
	 }

	   
	 cout<<"The final result"<<endl;

	 cout<<"Name\tHouse\tMember\n";

	 PrintResult(player, numberofPlayers);

	 system("pause");
    return 0;


}


