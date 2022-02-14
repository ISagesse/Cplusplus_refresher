#include <iostream>

using namespace std;

// Write a program that determine if the digit input is even or odd using a function and a if and else statement

int even_odd(int num) {
	if (num % 2 == 0)
	{
		return 2;
	}
	else {
		return 1;
	}
}

int main() {
	// asking for input
	int num;
	cout << "Please enter a number ";
	cin >> num;

	// printing the results
	if (even_odd(num) == 2) {
		cout << "EVEN";
	}
	else {
		cout << "ODD";
	}

	return 0;

}