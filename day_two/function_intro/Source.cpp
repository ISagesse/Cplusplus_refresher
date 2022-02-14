#include <iostream>

using namespace std;

int add(int, int);

int main() {

	cout << add(12, 5);

	return 0;
}

int add(int num1, int num2) {
	int add;
	add = num1 + num2;
	return add;
}
