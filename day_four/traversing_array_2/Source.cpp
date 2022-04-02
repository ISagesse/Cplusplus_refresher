#include <iostream>

using namespace std;

// an easy way to traverse trough an array

int main() {
	int arr[] = { 2, 4, 6, 12 };

	//Looping trough the array and assign the array element to the x varaible.
	for (int x : arr)
		cout << x << " ";
	cout << endl;

	// modify the array at runtime by multipling by 2 using (&) reference variable.
	for (int &x : arr)
		x *= 2;
	for (int x : arr)
		cout << x << " ";

	return 0;
}