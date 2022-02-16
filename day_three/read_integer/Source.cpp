#include <iostream>

using namespace std;

// this program will ask the user to enter a number between 1 to 99999, and print the digit amount

int main() {
	// user variable
	int num;

	// asking for input
	cout << "Please enter a number between 1 to 99999: ";
	cin >> num;

	// validating
	if (num > 1 && num <= 9) {
		cout << num << " Is a one digit number" << endl;
	}
	else if (num > 10 && num <= 99) {
		cout << num << " Is a two digit number" << endl;
	}
	else if (num > 100 && num <= 999) {
		cout << num << " Is a three digit number" << endl;
	}
	else if (num > 1000 && num <= 9999) {
		cout << num << " Is a four digit number" << endl;
	}
	else if (num > 10000 && num <= 99999) {
		cout << num << " Is a five digit number" << endl;
	}
	else {
		cout << num << "Is out of range" << endl;
	}

	return 0;
}