#include <iostream>

using namespace std;

// building a guessing game simple format, to play with friends.

int main() {
	// create our varaible
	int secret_number, user_number;

	// asking for a secret number
	cout << "Please enter a secret number: ";
	cin >> secret_number;

	//clear the console
	system("cls");

	// asking the user to guess
	cout << " What is the secret number: ";
	cin >> user_number;

	//checking if guess corectly
	//if (secret_number == user_number) {
		//cout << "You guess correctly! " << endl;
	//}
	//else {
		//cout << "!!! Incorrect \nThe correct number is " << secret_number << " and you guess " << user_number << endl;
	//}


	// checking using ternary operator (condition)? what need to happen: what happen if failed
	(secret_number == user_number)? cout << "You guess correctly! ": cout << "!!! Incorrect \nThe correct number is " << secret_number << " and you guess " << user_number << endl;


	return 0;
}