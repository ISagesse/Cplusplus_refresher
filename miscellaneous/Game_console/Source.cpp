#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessing_game() {
	cout << "Welcome to guessing game Player" << endl << endl;

	int random = rand() % 251;
	int user_input;
	cout << "I am a number where 5 is remove from me I am " << random - 5 << " and 3 added to me I am" << random + 3 << endl;
	while (true)
	{
		cout << "What am I: ";
		cin >> user_input;

		if (user_input == random) {
			cout << "Yes, corect" << endl << endl;
		}
		else {
			cout << "You missed by this much: " << random - user_input << endl;
		}
	}
}

void rock_paper() {
	cout << "Welcome to Rock, Paper, Scissors" << endl << endl;

	int ai = rand() % 3 + 1;
	int player;

	cout << "Please pick one" << endl;
	cout << "1. Rock" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissor" << endl;
	cout << "I pick: ";
	cin >> player;

	if (ai == player) {
		cout << "Tie Game" << endl;
		cout << "TRY AGAIN!" << endl << endl;
		rock_paper();
	}
	else if (ai == 1 && player == 3) {
		cout << "The AI Win" << endl;
	}
	else if (ai == 2 && player == 1) {
		cout << "The AI Win" << endl;
	}
	else if (ai == 3 && player == 2) {
		cout << "The AI Win" << endl;
	}
	else if (ai == 3 && player == 1) {
		cout << "The PLAYER Win" << endl;
	}
	else if (ai == 1 && player == 2) {
		cout << "The PLAYER Win" << endl;
	}
	else if (ai == 2 && player == 3) {
		cout << "The PLAYER Win" << endl;
	}
	else {
		cout << "The AI WIN because, invalid input" << endl;
	}
	cout << endl;

}

int main() {

	srand(time(NULL));

	int choice;

	do {
		cout << "Welcome to PC Console" << endl;
		cout << "0. Close Console" << endl;
		cout << "1. Guessing Game" << endl;
		cout << "2. Rock, Paper, Scissor" << endl;

		cout << "I would like to play: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 0:
			cout << "Good bye Player" << endl;
			break;
		case 1:
			guessing_game();
			break;
		case 2:
			rock_paper();
			break;
		default:
			cout << "Not available " << endl;
			break;
		}
	} while (choice != 0);

	return 0;
	
}