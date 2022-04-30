#include <iostream>
#include <string>

using namespace std;

int main() {

	// string modifier methods
	string greeting = "Hello from hell";
	greeting.insert(5, "!");
	cout << greeting.length() << endl;
	greeting.erase(5);
	cout << greeting << endl;
	greeting.replace(0, 5, "Good Morning");

	//Find the word hell in the sentence and replace it with ****
	greeting.replace(greeting.find("hell"), greeting.length(), "****");
	cout << greeting << endl;

	// using a for loop to print each character
	for (int i = 0; i < greeting.length(); i++) {
		cout << greeting[i] << endl;
	}

	// loop trough the string and check each character if it equal to l and change to z.
	for (int i = 0; i < greeting.length(); i++) {
		if (greeting[i] == 'l') {
			greeting[i] = 'z';
		}
	}
	cout << greeting << endl;


	return 0;
}