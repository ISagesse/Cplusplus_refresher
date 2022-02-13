#include <iostream>

using namespace std;

int main() {
	// must read four interger, calculate they sum, and avegare.
	int num1, num2, num3, num4, sum;
	float average;

	//Asking for input
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	cout << "Please enter the third number: ";
	cin >> num3;
	cout << "Please enter the fourth number: ";
	cin >> num4;

	//calculating the sum
	sum = num1 + num2 + num3 + num4;
	//printing the sum
	cout << "The sum of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << sum << endl;

	//Calculating the average
	average = sum / 4;
	//printing the average
	cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << average << endl;

	return 0;
}