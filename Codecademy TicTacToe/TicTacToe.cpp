#include <iostream>
#include <vector>

#include "TicTacToeFunctions.cpp"
#include "TicTacToeFunctions.h"

int main() {

	intro();

	while (turns < 9 && gameWon == false) {
		
		currentBoard();

		if (currentPlayer == 'o') {
			currentPlayer = 'x';
		}
		else {
			currentPlayer = 'o';
		}

		attemptPlace();

		gameWon = checkForWin();
		
		turns += 1;

	}

	currentBoard();
	if (gameWon == true) {
		std::cout << "Congratulations, " << currentPlayer << "! Good job on the win!\n";
	}
	else {
		std::cout << "Tie! Nobody wins this round!\n";
	}
	

}