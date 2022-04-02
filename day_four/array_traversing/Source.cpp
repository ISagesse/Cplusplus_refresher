#include <iostream>

using namespace std;

// traversing trough an array using a for loops

int main() {
	// initialize the array with arr
	int arr[] = { 2, 4, 6 };

	//the size of the array
	int n = sizeof(arr) / sizeof(arr[0]);

	// looping through the array
	for (int i = 0; i < n; i++) {
		cout << "The element of index " << i << " in the array is " << arr[i] << endl;
	}

}