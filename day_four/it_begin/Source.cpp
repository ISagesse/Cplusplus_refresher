#include <iostream>

using namespace std;

// this program will read 5 integer from the user and print the sum.

int main() {
	// initializing the array that will contain 5 integer
	int n[5], sum = 0;

	for (int i = 0; i < 5; ++i) {
		cout << "Integer number " << i + 1 << " : ";
		cin >> n[i];
		sum += n[i];
	}

	cout << sum;
	
	return 0;

}