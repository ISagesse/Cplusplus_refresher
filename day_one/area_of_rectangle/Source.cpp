#include <iostream>

using namespace std;

int main() {
	// Calculating the area of a rectangle based on input given

	//our variables le for lenght, wi for width and ar for area 
	float le, wi, ar;

	//asking for length
	cout << "What is the length of the given rectangle? ";
	cin >> le;
	cout << "What is the width of the given rectangle? ";
	cin >> wi;

	//the area (ar) of rectagle is equal to the lenght (le) multiply by the width (wi)
	ar = le * wi;

	//Solution
	cout << "The area of the given rectangle is " << ar << endl;

	return 0;
}