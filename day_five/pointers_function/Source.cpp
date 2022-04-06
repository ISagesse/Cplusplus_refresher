#include <iostream>

using namespace std;

// getting value from a function using a pointer variable.

void return_sum(int num1, int num2, int* result) {
	// tells the compiler that we want to change the value stored at the pointer and not the pointer itself.
	// that's why we use *result = instead of result = 
	*result = num1 + num2;
}

//getting value from a function using a reference variable.
void return_sum2(int num1, int num2, int& result) {
	result = num1 + num2;
}

int main() {
	int sum = 0;
	int sum2 = 0;

	// passing the sum value by reference &.
	return_sum(2, 4, &sum);
	cout << sum << endl;

	// calling the return_sum2 function
	return_sum2(2, 4, sum2);
	cout << sum2 << endl;
}