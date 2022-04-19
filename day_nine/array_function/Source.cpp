#include <iostream>

using namespace std;

// using templates to create a function in an given array to return the max value of that array.

template <typename T>
T max_in_array(T arr[], int n) {
	T max = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	// using an int array
	int arr[] = { 2, 1, 5, 9, -22 };
	// using a float array.
	float f_arr[]= { 2.5, -3.5, 99.2, -234.6, 12.9 };
	//using a char array
	char c_arr[] = { 'A', 'B', 'c', 'C', 'Z' };
	int n = 5;

	cout << max_in_array(arr, n) << endl;
	cout << max_in_array(f_arr, n) << endl;
	cout << max_in_array(c_arr, n) << endl;

	return 0;
}