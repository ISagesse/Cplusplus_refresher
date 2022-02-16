#include <iostream>

using namespace std;

// this program will read three integer from a user and print the highest integer

int main() {
	// our three variable
	int num1, num2, num3;
	// ask for the three integer from the user
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the first number: ";
	cin >> num2;
	cout << "Please enter the first number: ";
	cin >> num3;

	// evaluate to see which one is highest and print that number
	if (num1 > num2 && num1 > num3) {
		cout << num1 << " Is greater" << endl;
	}

	if (num2 > num1 && num2 > num3) {
		cout << num2 << " Is greater" << endl;
	}

	if (num3 > num2 && num3 > num1) {
		cout << num3 << " Is greater" << endl;
	}

}