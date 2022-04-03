#include <iostream>

using namespace std;

// understanding c++ reference

int main() {
	int x = 5;
	int& y = x;

	cout << y << endl;
	x += 5;
	cout << y << endl;
	y += 10;
	cout << x << endl;
}