#include <iostream>

using namespace std;

//understanding array 

int main() {
	int intArray[5] = { 0, 1, 2, 3, 4};
	// the array size
	cout << sizeof(intArray) / sizeof(intArray[0]);
}