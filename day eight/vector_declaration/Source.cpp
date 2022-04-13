#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n = 3, x = 10;

	vector<int> v(n, x);
	// inicialize a new vector with a size of n which is 3 and x as the value which is 10.

	for (auto i = v.begin(); i != v.end(); i++) {
		// use auto to avoid initialize a vector with vector<int>::iterator
		cout << (*i) << " ";
		// to access those array element we have to use a pointer in front of i to return the value.
	}

	return 0;
}