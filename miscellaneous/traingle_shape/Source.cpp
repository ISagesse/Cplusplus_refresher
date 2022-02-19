#include <iostream>

using namespace std;

// based on the user input it will draw a shape, hopefully some kind a traingle.
// this program will ask for the symbol.
// ask for a heigth which will be the end goal
// in each loop ask the user for input, that's the traingle shape.

int main() {
	int heigth, width;
	char symbol;

	cout << "Enter the traingle height: ";
	cin >> heigth;
	cout << "Enter the symbol you would like to use: ";
	cin >> symbol;

	//outer loop
	for (int i = 0; i < heigth; i++) {
		//inner loop
		for (int j = 0; j <= i; j++) {
			// let's define the shape based on the user symbol.
			cout << " " << symbol;
		}
		// to create a newline
		cout << endl;
	}
}