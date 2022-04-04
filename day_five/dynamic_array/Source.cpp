#include <iostream>
using namespace std;

//Dynamic array with pointer.

int main() {
	int size;
	cout << "Array size: ";
	cin >> size;
	//int myArray[size];
	int* myArray = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Array [" << i << "]: ";
		cin >> myArray[i];
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << myArray[i] << " ";
		//cout << *(myArray + i) << " "; another way to get the array value without indexing.
	}

	delete[]myArray;
	myArray = NULL;

	return 0;
}