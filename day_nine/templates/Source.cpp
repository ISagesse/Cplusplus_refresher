#include <iostream>

using namespace std;

// a look at using template functions

// declared the template T
template <typename T>
void swap_value(T& a, T& b) {
	// T can be any data type
	// in the main function we will call swap with an int and a string.
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	// swaping interger
	int a = 4;
	int b = 6;
	swap_value(a, b);

	cout << "A value: " << a << endl;
	cout << "B value: " << b << endl;

	cout << endl;

	// swaping string
	string s = "Hello";
	string f = "World";
	swap_value(s, f);

	cout << "S value: " << s << endl;
	cout << "F value: " << f << endl;

	cout << endl;

	// swaping char
	char c = 'A';
	char d = 'B';
	swap_value(c, d);

	cout << "C value: " << c << endl;
	cout << "D value: " << d << endl;

	return 0;
}