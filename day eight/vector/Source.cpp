#include <iostream>
#include <vector>

using namespace std;

// Learning all bout vector.

int main() {

	// push_back() function push the new item at the end.
	// size() get the size of the vector.
	// vector element can be access using index.
	// v.at(i) will trow an exception error if trying to get an element out bound of the vector.

	vector<int> v;
	v.push_back(5);
	v.push_back(10);
	v.push_back(15);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
		// another way to access: v.at(i)
	}
	
	return 0;
}