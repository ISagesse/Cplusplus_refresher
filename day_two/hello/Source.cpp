#include <iostream>

using namespace std;

// in c++ function must declare before it is called

void hello() {
	cout << "Hello to c++" << endl;
	return;
}

int multi(int num1, int num2) {
	return num1 * num2;
}

int main() {
	// calling function inside the main
	hello();
	cout << multi(2, 4);

	return 0;
}

