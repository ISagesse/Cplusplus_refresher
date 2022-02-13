#include <iostream>

using namespace std;

int main() {
	//This program will read measurement in inches and output to meters, foot, centimeter, yard

	//our variables
	float in, ft, ct, me, yd;

	// asking for the input measurement in inches
	cout << "Enter the desired value, you would like to measure: ";
	cin >> in;

	//use a formula to convert the desire value
	ft = in / 12;
	ct = in * 2.54;
	me = in / 39.37;
	yd = in / 36;

	// output the result of the desired value
	cout << in << " inches is equal " << ft << " foot" << endl;
	cout << in << " inches is equal " << ct << " centimeter" << endl;
	cout << in << " inches is equal " << me << " meter" << endl;
	cout << in << " inches is equal " << yd << " yards" << endl;

	return 0;
}