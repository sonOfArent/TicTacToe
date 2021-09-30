#pragma once

std::vector<char> boardVector = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int turns = 0;
bool gameWon = false;
char currentPlayer = 'o';
int placement;

void intro() {

	std::cout << " ___ ___ ___ \n";
	std::cout << "| T | I | C |\n";
	std::cout << "|___|___|___|\n";
	std::cout << "| O | A |   |\n";
	std::cout << "|___|___|___|\n";
	std::cout << "| E |   | C |\n";
	std::cout << "|___|___|___|\n";
	std::cout << "\n Welcome to Tic Tac Toe!\n";

}

void currentBoard() {

	std::cout << " ___ ___ ___ \n";
	std::cout << "| " << boardVector[0] << " | " << boardVector[1] << " | " << boardVector[2] << " |\n";
	std::cout << "|___|___|___|\n";
	std::cout << "| " << boardVector[3] << " | " << boardVector[4] << " | " << boardVector[5] << " |\n";
	std::cout << "|___|___|___|\n";
	std::cout << "| " << boardVector[6] << " | " << boardVector[7] << " | " << boardVector[8] << " |\n";
	std::cout << "|___|___|___|\n";
}

void attemptPlace() {

	std::cout << "Where would you like to place an " << currentPlayer << "?\n";
	std::cin >> placement;

	if (boardVector[placement - 1] != 'x' && boardVector[placement - 1] != 'o') {
		boardVector[placement - 1] = currentPlayer;
	}
	else {
		std::cout << "That spot is already taken! Try again.\n";
		attemptPlace();
	}

}

bool checkForWin() {

	if (boardVector[0] == boardVector[1] && boardVector[0] == boardVector[2]) {
		return true;
	}
	else if (boardVector[3] == boardVector[4] && boardVector[3] == boardVector[5]) {
		return true;
	}
	else if (boardVector[6] == boardVector[7] && boardVector[6] == boardVector[8]) {
		return true;
	}
	else if (boardVector[0] == boardVector[3] && boardVector[0] == boardVector[6]) {
		return true;
	}
	else if (boardVector[1] == boardVector[4] && boardVector[1] == boardVector[7]) {
		return true;
	}
	else if (boardVector[2] == boardVector[5] && boardVector[2] == boardVector[8]) {
		return true;
	}
	else if (boardVector[0] == boardVector[4] && boardVector[0] == boardVector[8]) {
		return true;
	}
	else if (boardVector[2] == boardVector[4] && boardVector[2] == boardVector[6]) {
		return true;
	}
	else {
		return false;
	}
}
