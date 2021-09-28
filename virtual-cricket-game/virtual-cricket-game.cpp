/*
	Name		-->	Saurabh Patel
	Project		-->	Virtual Cricket Game
*/

#include "game.h"
using namespace std;


int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	getchar();

	game.showAllPlayers();

	cout << "\nPress Enter to continue";
	getchar();

	game.selectPlayers();
	game.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nPress enter to toss";
	cin.ignore();

	game.toss();

	game.startFirstInnings();
	game.startSecondInnings();

	game.displayMatchSummary();

	return 0;
}