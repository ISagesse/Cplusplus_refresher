#include <iostream>

using namespace std;

// A look at creating a template function with a return type.
// this function will compare two values and return the maximum between the two value.

template<typename T>
T find_max(T x, T y) {
	return (x >  y) ? x : y;
}

int main() {

	// int
	cout << find_max(4, 6) << endl;

	// double
	cout << find_max(2.22, 4.33) << endl;

	//char
	cout << find_max('A', 'a') << endl;

	return 0;
}