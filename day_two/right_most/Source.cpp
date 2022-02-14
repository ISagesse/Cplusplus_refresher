#include <iostream>

using namespace std;

// Write a program that get an digit input from a user and return the rightmost digit using a function

int rightmost(int num) {
	return num % 10;
}

int main() {
	// asking for input
	int num;
	cout << "Please enter a number ";
	cin >> num;

	// printing the results
	cout << "The righmost number of " << num << " is " << rightmost(num) << endl;

	return 0;
	
}