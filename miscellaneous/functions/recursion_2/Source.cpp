// A C++ program to demonstrate working of
// recursion

#include <iostream>
using namespace std;

void printFun(int test)
{
	if (test < 1) // stop when test value is less than 1
		return;
	else {
		cout << test << " ";// (1st line) printing the whatever test is equal to
		printFun(test - 1); // (2nd line) calling with the value of test - 1, see example bellow
		cout << test << " "; // (3rd line)
		return;
		//answer 3 2 1 1 2 3
		// 1st line: print the value test which is 3, 2nd line calls the function again with 2 because 3 - 1;
		// 1st line: print the value test which is 2, 2nd line calls the function again with 1 because 2 - 1;
		// 1st line: print the value test which is 1, 2nd line calls the function again with 0 because 1 - 1 but the function breaks
		// because of the if condition
		// now we are calling all the 3rd line of code but backwards or the last function that was call.
		// which is 1 because that's where the code stop
		// 2 because that's when the function call with 2 that we were able to get to 1
		// 3 because that's when the function call with 3 that we were able to get to 2
		// finally the code stop because every things checks out.
	}
}

// Driver Code
int main()
{
	int test = 3;
	printFun(test);
}
