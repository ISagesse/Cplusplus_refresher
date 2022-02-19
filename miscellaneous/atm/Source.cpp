#include <iostream>

using namespace std;

// using functions and a while loop to create an ATM machine
// check balance
// money deposit
// money withdraw
// show menu

void show_menu() {
	cout << "\n********** Menu **********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. EXIT" << endl;
	cout << "************************ \n" << endl;
}

double check_balance(double balance) {
	return balance;
}

double deposit(double balance) {
	double amount;
	double new_balance;

	cout << "********** Deposit **********" << endl;
	cout << "Enter the amount: ";
	cin >> amount;
	if (amount <= 0) {
		cout << "Invalid amount" << endl;
		new_balance = balance;
	}
	else {
		cout << "Money has been successfully added." << endl;
		new_balance = balance + amount;
	}
	cout << "************************" << endl;

	return new_balance;
}

double withdraw(double balance) {
	double amount;
	double new_balance;

	cout << "********** Withdraw **********" << endl;
	cout << "Enter the amount: ";
	cin >> amount;
	if (amount - balance <= 0) {
		cout << "Insufficient funds or Invalid amount" << endl;
		new_balance = balance;
	}
	else {
		cout << "Money has been successfully withdraw." << endl;
		new_balance = balance - amount;
	}
	cout << "************************" << endl;

	return new_balance;
}

int main() {

	bool end = false;
	int option;
	double balance = 500;

	while (end != true) {

		show_menu();
		cout << "How can I help you today: ";
		cin >> option;
		system("cls");

		switch (option) {
		case 1:
			cout << "********** Balance **********" << endl;
			cout << "You have $" << check_balance(balance) << " available." << endl;
			cout << "************************" << endl;
			break;
		case 2:
			balance = deposit(balance);
			break;
		case 3:
			balance = withdraw(balance);
			break;
		case 4:
			cout << "********** Exit **********" << endl;
			cout << "Thank you! and Good bye." << endl;
			cout << "************************" << endl;
			end = true;
			break;
		}
	}

	return 0;
}