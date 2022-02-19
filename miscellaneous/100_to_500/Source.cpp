#include <iostream>

using namespace std;

int main() {
	// from 100 to 500, print all numbers that are divisible by 3 and 5;
	int counter = 100;

	while (counter != 501) {
		if (counter % 3 == 0 && counter % 5 == 0) {
			cout << counter << endl;
		}

		counter++;
	}

	return 0;
}