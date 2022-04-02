#include <iostream>

using namespace std;

// modify our array while traversing it

int main() {
	int arr[] = { 12, 24, 16, 2 };

	// the array length
	int n = sizeof(arr) / sizeof(arr[0]);

	// looping and modify by the adding 2.
	for (int i = 0; i < n; i++) {
		arr[i] += 2;
		cout << arr[i] << endl;
	}

	return 0;
}