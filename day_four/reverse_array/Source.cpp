#include <iostream>

using namespace std;

// given an array print the reverse output

int main() {
	int arr[] = { 2, 3, 5, 7, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}