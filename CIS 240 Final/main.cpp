//
//  main.cpp
//  CIS 240 Final
//
//  Created by Joseph DeCrisanti on 10/24/19.
//  Copyright © 2019 Joseph DeCrisanti. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Define struct for playerName (string) and score (int)
struct PlayerData
{
	string playerName = 0;
	int score = 0;
};

//function prototypes
//Game should be void? Not sure, depends on display
//Questions seems like it could be several functions. Setting as bool return with empty parameters
void Help();
void InputScore(PlayerType, string, string);
void Game();
bool Questions();
void showScore();

int main() {
	// skeleton function to call other functions

	char selection;  //For menu seletion
	PlayerData playerOne; //To initialize player struct

	cout << "******************************\n"
		<< "  Welcome to the Final game!  \n"
		<< "******************************\n";

	cout << endl << endl;
	
	//Get player name
	cout << "Enter player name:\n";
	cin >> playerOne.playerName;
	cout << "Welcome " << playerOne.playerName << "!";

	//Menu choices
	cout << "Start by selecting an option\n"
		<< "from the following:\n"
		<< endl
		<< "'G': Jump right in to the game\n"
		<< "'H': Explanation to the game\n"
		<< "'S': Access score menu(disabled)\n"
		<< "'T': Check current leaderboard\n";

	cin >> selection;

	//switch to handle function call
	switch (selection)
	{
	case 'g':
	case 'G': Game();
		break;
	case 'h':
	case 'H': Help();
		break;
		/*case 's':
		case 'S': InputScore(playerTable, string for playerName, string for score *FROM PLAYGAME()* );
			break;*/
	case 't':
	case 'T': showScore();
		break;
	default: cout << "Please enter 'G' for the game, 'H' for help\n"
		<< "or 'S' to access the score menus.\n";
		cin >> selection;
		break;
	}

	system("PAUSE");

	return 0;
}
