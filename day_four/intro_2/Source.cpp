#include <iostream>

using namespace std;

// writing data with a loop

int main() {
	int scores[10];

	for (int i = 0; i < 10; i++) {
		scores[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << scores[i] << endl;
	}

}