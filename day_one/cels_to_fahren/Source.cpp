#include <iostream>

using namespace std;

int main() {
	//Using this formula f = ((9 * c) / 5) + 32 change a celsius temperature to fahrenheit
	float fa, ce;

	// asking to enter a temperature in celsius
	cout << "Enter a value of temperature in celsius: ";
	cin >> ce;

	// use the formula to convert ce to fa
	fa = ((9 * ce) / 5) + 32;

	//print the conversion to the user
	cout << ce << " degree celsius is convert to " << fa << " degree farenheit." << endl;
}