#include <iostream>
#include <string>

int main()
{
	int play = 0;
	char difficulty;
	std::cout << "Einfach e oder Schwer s?:"; //get user input to set difficulty
	std::cin >> difficulty;
	if (difficulty == 's') //hard difficulty aka the program lets you lose 100% of the time
	{
		printf("Willkommen zum schweren Spiel. Stein 1, Schere 2 oder Papier 3?:");
		std::cin >> play;

		switch (play)
		{

		case 1:
			printf("Papier, du hast verloren.");
			break;
		case 2:
			printf("Stein, du hast verloren.");
			break;
		case 3:
			printf("Schere, du hast verloren.");
			break;
		}
	}
	if (difficulty == 'e') //easy difficulty aka the program makes a random play
	{

		printf("Willkommen zum einfachen Spiel. Stein 1, Schere 2 oder Papier 3?:");
		std::cin >> play;
		int pc_play = rand() % 3 + 1; //generates random int between 1 and 3

		if (pc_play == play) {
			std::cout << "Unentschieden";

		}
		else if (play == 1 && pc_play == 2) {
			std::cout << " Schere, du hast gewonnen!";
		}
		else if (play == 2 && pc_play == 3) {
			std::cout << " Papier, du hast gewonnen!";
		}
		else if (play == 3 && pc_play == 1) {
			std::cout << " Stein, du hast gewonnen!";
		}
		else {
			std::cout << "Du hast verloren:(";

		}
	}

	printf("\n");
	system("pause");
	return 0;
}
