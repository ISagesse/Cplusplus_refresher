#include <iostream>

using namespace std;

// Multidimensional dynamic arrays (two-dimensional dynamic array)

int main() {

	int rows, cols;
	cout << "How many rows? cols:" << endl;
	cin >> rows >> cols;

	// creating a pointer to pointer table and assign it to a new pointer of arrays.
	int** table = new int*[rows];
	for (int i = 0; i < rows; i++) {
		table[i] = new int[cols];
	}

	// in the first row at the 2nd index the value is 88;
	table[1][2] = 88;

	for (int i = 0; i < rows; i++) {
		delete[] table[i];
	}
	delete[] table;

	return 0;
}