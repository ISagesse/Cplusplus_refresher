#include <iostream>

using namespace std;

// an introduction to c++ pointers.

int main() {
	// pointers are like variable in way that they hold the memory address of the variable.
	int n = 5;
	cout << &n << endl;
	// creating a pointer ptr and assign it to the reference value of our n variable.
	int* ptr = &n;
	cout << ptr << endl;
	cout << *ptr << endl;
	// now change the pointer to point to the memory of value 10.
	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;

	int v;
	int* ptr2 = &v;
	*ptr2 = 7;
	cout << "V = " << v << endl;


	return 0;
}