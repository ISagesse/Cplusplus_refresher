#include <iostream>

using namespace std;

// this program will use a function to swap two values

int swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "First number: " << num1 << " \nsecond number: " << num2 << endl;

	return 0;
}

int main() {
	int num1, num2;

	cout << "Please enter a number for the first value: ";
	cin >> num1;
	cout << "Please enter a number for the second value: ";
	cin >> num2;

	cout << swap(num1, num2);

	return 0;
}