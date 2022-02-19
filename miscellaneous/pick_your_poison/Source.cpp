#include <iostream>
//#include <stdlib.h> // contain the random number function

using namespace std;

// The guessing game this time against a computer, and you get to pick your dificulties.

int easy_mode(int user_guess, int user_life) {
	int secret_number = rand() % 10 + 1;
	if (user_guess == secret_number) {
		cout << "You guess corectly" << endl;
	}
	else {
		cout << "Incorrect!!! the number was " << secret_number << endl;
		user_life -= 1;
	}

	return user_life;
}


int normal_mode(int user_guess, int user_life) {
	int secret_number = rand() % 100 + 10;
	if (user_guess == secret_number) {
		cout << "You guess corectly" << endl;
	}
	else {
		cout << "Incorrect!!! the number was " << secret_number << endl;
		user_life -= 1;
	}

	return user_life;
}

void hard_mode() {

	int user_guess;
	int user_life = 1;

	int limit = rand() % 10 + 1;
	int range = rand() % 1000 + 100;

	int secret_number = rand() % range + limit;

	while (user_life != 0)
	{
		cout << "Please enter a number between " << limit << " to " << range << endl;
		cout << "Your guess is: ";
		cin >> user_guess;

		if (user_guess == secret_number) {
			cout << "You guess corectly" << endl;
		}
		else {
			cout << "Incorrect!!! the number was " << secret_number << endl;
			user_life = 0;
		}
	}


}

int main() {
	int user_guess, user_choice;
	int user_life = 3;

	while (user_life != 0) {
		cout << "Welcome to pick your poison" << endl;
		cout << "Please pick your dificulties" << endl;
		cout << "Please enter 1 for easy, 2 for normal, 3 for hard" << endl;
		cout << "The player choice is: ";
		cin >> user_choice;

		switch (user_choice)
		{
		case 1:
			cout << "Please enter a number between 1 to 10" << endl;
			cout << "Your guess is: ";
			cin >> user_guess;
			//normal_mode(user_guess, user_life);
			user_life = easy_mode(user_guess, user_life);
			break;
		case 2:
			cout << "Please enter a number between 10 to 100" << endl;
			cout << "Your guess is: ";
			cin >> user_guess;
			//normal_mode(user_guess, user_life);
			user_life = normal_mode(user_guess, user_life);
			break;
		case 3:
			//hard_mode(user_life);
			hard_mode();
			break;
		case 0:
			cout << "GAME OVER" << endl;
			user_life = 0;
			break;
		default:
			break;
		}
	}

	return 0;
}