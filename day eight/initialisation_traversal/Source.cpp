#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v{ 10, 2, 4, 22 };

	// will go and print all the element.
	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;

	// modify the vector elements with a reference of it.
	for (int& x : v) {
		x += 2;
	}

	// print the new vector.
	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}