#include <iostream>

using namespace std;
// a look at creating c style string in c++.

int main() {
	char cStyleString[] = "CStyleString";
	char cStyleString2[] = { 'c', 'p', 'p', '\0' };

	cout << cStyleString << endl;
	cout << cStyleString2 << endl;

	return 0;
}