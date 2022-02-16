#include <iostream>

using namespace std;

//user can enter 5 numbers, and picks one of the options to find the sum, average, and the smalest

int find_sum(int num1, int num2, int num3, int num4, int num5) {
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

float find_average(int num1, int num2, int num3, int num4, int num5) {
	int sum = num1 + num2 + num3 + num4 + num5;
	float average = sum / 5;
	return average;
}

int find_smalest(int num1, int num2, int num3, int num4, int num5) {
	int min = num1;
	if (num2 < min) {
		min = num2;
	} 
	else if (num3 < min) {
		min = num3;
	}
	else if (num4 < min) {
		min = num4;
	}
	else {
		min = num5;
	}
	return min;
}

int main() {
	int num1, num2, num3, num4, num5, option;
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the first number: ";
	cin >> num2;
	cout << "Please enter the first number: ";
	cin >> num3;
	cout << "Please enter the first number: ";
	cin >> num4;
	cout << "Please enter the first number: ";
	cin >> num5;

	cout << "\n Please enter 1 to print the sum, 2 to print the average, and 3 to print the smalest number: ";
	cin >> option;

	switch (option)
	{
	case 1:
		cout << "The sum is: " << find_sum(num1, num2, num3, num4, num5) << endl;
		break;
	case 2:
		cout << "The average is: " << find_average(num1, num2, num3, num4, num5) << endl;
		break;
	case 3:
		cout << "The smallest number is: " << find_smalest(num1, num2, num3, num4, num5) << endl;
		break;
	default:
		break;
	}

	return 0;
}