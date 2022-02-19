#include <iostream>

using namespace std;

// nested for loops to create a program for drawing rectangle shape.
// user can enter the height, width and the symbol they would like the program to draw with.

int main() {
	int heigth, width;
	char symbol;

	cout << "Please enter the height of the rectangle: ";
	cin >> heigth;
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	cout << "Please enter the symbol to the rectangle: ";
	cin >> symbol;

	// the first for loop is the outer loop or the height of the rectangle.
	for (int i = 0; i < heigth; i++) {
		for (int j = 0; j < width; j++) {
			cout << "  " << symbol << "  ";
		}
		// create a new line because the inner loop complete, it goes back until the first loop complete
		cout << endl;
	}

	return 0;
}