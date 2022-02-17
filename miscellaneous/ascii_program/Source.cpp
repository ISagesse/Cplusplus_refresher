#include <iostream>

using namespace std;

// This program will convert five letter words to ASCII character and ASCII to english characters;

void to_ascii() {
	// asking for (lt) 5 letters
	char lt1, lt2, lt3, lt4, lt5;
	string space = " ";

	cout << "Enter 5 letter words, you would like to convert to ASCII" << endl;

	cout << "Five leter words: ";
	cin >> lt1 >> lt2 >> lt3 >> lt4 >> lt5;
	cout << "ASCII: " << int(lt1) << space << int(lt2) << space << int(lt3) << space << int(lt4) << space << int(lt5) << endl;
}

void to_english() {
	int num;

	cout << "Enter a 2 digit number for lower case letter, 3 digit number for upper case " << endl;

	cout << "Enter number: ";
	cin >> num;

	if (char(num)) {
		cout << num << " english character is " << char(num) << endl;
	}
	else {
		cout << num << "Not valid!!!" << endl;
	}

}

int main() {
	int choise;

	cout << "Welcome to ASCII dictionary. \n";
	cout << "Enter 1 to convert any five letter words to ASCII \n";
	cout << "Enter 2 to convert any directed number to english characters \n";
	cout << "The player choise is: ";
	cin >> choise;

	if (choise == 1) {
		to_ascii();
	}
	else {
		to_english();
	}
	

	return 0;
}