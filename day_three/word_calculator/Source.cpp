#include <iostream>

using namespace std;

// using char for the operator to create a calculator based on user input

int main() {
	char ope;
	float num1, num2;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Please pick an operator sign (+ for addition, - for subtraction, * for multiplication, / for division): ";
	cin >> ope;
	cout << "Enter the second number: ";
	cin >> num2;

	switch (ope)
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default:
		cout << "ERROR!!! The operator is not correct" << endl;
		break;
	}

	return 0;
}