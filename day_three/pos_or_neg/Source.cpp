#include <iostream>

using namespace std;

// this program will read an integer and prints wether the interger is positive or negative.

int main() {
	//ask for a number
	int num;
	cout << "Please enter a number: ";
	cin >> num;

	// using if to check if positive or a negative number

	if (num > 0) {
		cout << num << " Is a positive number" << endl;
	}
	else {
		cout << num << " Is a negative number" << endl;
	}

	return 0;
}