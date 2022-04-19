#include <iostream>

using namespace std;

int main() {

	// initialize the array with arr with 3 rows and 2 columns
	int arr[3][2] = {
		{4, 6},
		{2, 12},
		{8, 26}
	};

	// using 2 for loops to access the arrays elements
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			// print the elements [0][0] and add a space after printing
			cout << arr[i][j] << " ";
		}
		// once finished printing creating a new line to simulate a multimension array.
		cout << endl;
	}

	return 0;
}