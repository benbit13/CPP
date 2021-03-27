#include <iostream>
#include <string>
using namespace std;
char square[10] = { '0','1','2','3','4','5','6','7','8','9' };
void drawBoard();
int checkWin();

int main() {
	int player = 0;
	drawBoard();
	char symbol;
	int win = 0;
	int play;
	do {
		player++;
		if (player % 2 == 0) {
			symbol = 'O';
			player = 2;
		}
		else {
			symbol = 'X';
			player = 1;
		}
		cout << "Player " << player << " type in the number of the field where you want to to place your symbol: ";
		cin >> play;

		if (play == 1 && square[1] == '1') {
			square[1] = symbol;
		}
		else if (play == 2 && square[2] == '2') {
			square[2] = symbol;
		}
		else if (play == 3 && square[3] == '3') {
			square[3] = symbol;
		}
		else if (play == 4 && square[4] == '4') {
			square[4] = symbol;
		}
		else if (play == 5 && square[5] == '5') {
			square[5] = symbol;
		}
		else if (play == 6 && square[6] == '6') {
			square[6] = symbol;
		}
		else if (play == 7 && square[7] == '7') {
			square[7] = symbol;
		}
		else if (play == 8 && square[8] == '8') {
			square[8] = symbol;
		}
		else if (play == 9 && square[9] == '9') {
			square[9] = symbol;
		}
		else {
			cout << "Invalid Input";
			player--;



		}
		win = checkWin();
		drawBoard();


	} while (win == 0);
	if (win == 1) {

		cout << "Player " << player << " has won!!!";
	}
	else if (win == 2) {
		cout << "Draw, neither player have won";
	}




	return 0;
}

int checkWin() {

	if (square[1] == square[2] && square[2] == square[3]) {

		return 1;
	}
	else if (square[4] == square[5] && square[5] == square[6]) {

		return 1;
	}
	else if (square[7] == square[8] && square[8] == square[9]) {

		return 1;
	}
	else if (square[1] == square[4] && square[4] == square[7]) {

		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8]) {

		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9]) {

		return 1;
	}
	else if (square[1] == square[5] && square[5] == square[9]) {

		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7]) {

		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7]) {

		return 1;
	}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' &&
		square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {

		return 2;
	}
	else { return 0; }




}



void drawBoard() {

	system("cls");
	std::cout << "\n\n\tTic Tac Toe\n\n";

	std::cout << "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;

	std::cout << "     |     |     " << std::endl << std::endl;
}



