#include <iostream>

using namespace std;

// using a void function and references to add two numbers.

void add_two_number(int& num1, int& num2) {
	cout << num1 + num2;
}

void end_loop(int& value) {
	for (int i = value + 1; i > 0; i--) {
		cout << i << endl;
	}
}

int main() {
	// it has to be a already initialize variable for it to pass as a reference.
	int a = 12;
	int b = 4;
	//add_two_number(a, b);
	end_loop(a);
}