#include <iostream>

using namespace std;

// nested for loops to create a multiplication table

int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	return 0;
}