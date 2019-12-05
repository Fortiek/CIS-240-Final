//
//  main.cpp
//  CIS 240 Final
//
//  Created by Joseph DeCrisanti on 10/24/19.
//  Copyright © 2019 Joseph DeCrisanti. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//function prototypes
//Game should be void? Not sure, depends on display
//Questions seems like it could be several functions. Setting as bool return with empty parameters
void Help();
void Score();
void Game();
bool Questions();

int numOfUsers; 	         //Global counter for number of users
const float DEFAULT_MONEY = 0.0; //For reseting scores of users

int main() {
	// skeleton function to call other functions

	char selection;  //For menu seletion

	cout << "******************************\n"
		<< "  Welcome to the Final game!  \n"
		<< "******************************\n";

	cout << endl << endl;

	//Menu choices
	cout << "Start by selecting an option\n"
		<< "from the following:\n"
		<< endl
		<< "'G': Jump right in to the game\n"
		<< "'H': Explanation to the game\n"
		<< "'S': Access score menu\n";

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
	case 's':
	case 'S': Score();
		break;
	default: cout << "Please enter 'G' for the game, 'H' for help\n"
		<< "or 'S' to access the score menus.\n";
		cin >> selection;
		break;
	}

	return 0;
}
