#include <iostream>

using namespace std;

// based on the user digit input (a, b, c)
// this program will determine what kind of triangle it is. ( equilateral, isosceles or scalene )
//
// Arcoding to google.
// equilateral all three sides are equal in length, and all three angles in the corners are 60º degree
// isosceles triangle is a triangle that has two sides of equal length both angles are 70° degree
// scalene triangle is a triangle in which all three sides have different lengths. Also the angles has different measurement.


int main() {

	cout << " this program will determine what kind of triangle it is. ( equilateral, isosceles or scalene ) " << endl;

	// ask for input
	int a, b, c;
	cout << " Please enter the first side of the triangle: ";
	cin >> a;
	cout << " Please enter the second side of the triangle: ";
	cin >> b;
	cout << " Please enter the third side of the triangle: ";
	cin >> c;

	//printing the results

	if (a == b && a == c) {
		cout << "\n This is a equilateral triangle" << endl;
	}
	else if (a != b && a == c) {
		cout << "\n This is a isosceles triangle" << endl;
	}
	else if (a != b && b != c) {
		cout << "\n This is a scalene triangle" << endl;
	}
	else {
		cout << "\n \n \n Im guessing you made an error!!! \n \n \n \n " << endl;
	}

}