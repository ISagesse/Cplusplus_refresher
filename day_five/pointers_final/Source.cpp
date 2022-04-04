#include <iostream>

using namespace std;

int main() {
	int variable = 5;
	int* variablePointer = &variable;
	// the variable pointer is pointing (*) to the memory location of variable (&)

	cout << "Value of variable: " << variable << endl;
	cout << "Adress of variable: " << &variable << endl;
	cout << "Value of variablePointer: " << variablePointer << endl;
	cout << "Value of variablePointer + 1: " << variablePointer + 1 << endl;
	cout << "Value of memory at deferenced variablePointer: " << *variablePointer << endl;
	cout << "Value of memory at deferenced variablePointer + 1: " << *variablePointer + 1 << endl;

	return 0;
}