#include <iostream>

using namespace std;

// using functions and a while loop to create an ATM machine
// check balances
// money deposit
// money withdraw
// show menu

void show_menu() {
	cout << "\n********** Menu **********" << endl;
	cout << "1. Check checking_balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Transfer" << endl;
	cout << "5. EXIT" << endl;
	cout << "************************ \n" << endl;
}

double deposit(double checking_balance) {
	double amount;
	double new_checking_balance;

	cout << "********** Deposit **********" << endl;
	cout << "Enter the amount: ";
	cin >> amount;
	if (amount <= 0) {
		cout << "Invalid amount" << endl;
		new_checking_balance = checking_balance;
	}
	else {
		cout << "Money has been successfully added." << endl;
		new_checking_balance = checking_balance + amount;
	}
	cout << "************************" << endl;

	return new_checking_balance;
}

double withdraw(double checking_balance) {
	double amount;
	double new_checking_balance;

	cout << "********** Withdraw **********" << endl;
	cout << "Enter the amount: ";
	cin >> amount;
	if (amount - checking_balance <= 0) {
		cout << "Insufficient funds or Invalid amount" << endl;
		new_checking_balance = checking_balance;
	}
	else {
		cout << "Money has been successfully withdraw." << endl;
		new_checking_balance = checking_balance - amount;
	}
	cout << "************************" << endl;

	return new_checking_balance;
}

int main() {

	bool end = false;
	int option;
	double checking_balance = 500;
	double saving_balance = 500;

	while (end != true) {

		show_menu();
		cout << "How can I help you today: ";
		cin >> option;
		system("cls");

		switch (option) {
		case 1:
			cout << "********** Balance available **********" << endl;
			cout << "Checking balance: $" << checking_balance << endl;
			cout << "Saving balance: $" << saving_balance << endl;
			cout << "************************" << endl;
			break;
		case 2:
			checking_balance = deposit(checking_balance);
			break;
		case 3:
			checking_balance = withdraw(checking_balance);
			break;
		case 4:
			cout << "********** Transfer **********" << endl;
			int opt;
			double amount;
			cout << "1. Transfer funds form saving to checking." << endl;
			cout << "2. Transfer funds form checking to saving." << endl;
			cout << "How can I help you: ";
			cin >> opt;
			if (opt == 1) {
				cout << "Enter amount: ";
				cin >> amount;
				if (amount > 0) {
					checking_balance += amount;
					saving_balance -= amount;
					cout << "Successfuly transfer to checking" << endl;
				}
			}
			else if (opt == 2) {
				cout << "Enter amount: ";
				cin >> amount;
				if (amount > 0) {
					checking_balance -= amount;
					saving_balance += amount;
					cout << "Successfuly transfer to saving" << endl;
				}
			}
			else {
				cout << "Invalid!!" << endl;
			}
			cout << "************************" << endl;
			break;
		case 5:
			cout << "********** Exit **********" << endl;
			cout << "Thank you! and Good bye." << endl;
			cout << "************************" << endl;
			end = true;
			break;
		}
	}

	return 0;
}