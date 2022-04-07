#include <iostream>
using namespace std;

// creating a struct to hold student imformation.

struct Student {
	int id;
	string name;
	char letter_grade;
};

int main() {
	Student j = { 1, "John", 'B' };
	Student s = { 3, "Sagesse", 'D' };

	cout << "Name: " << s.name << " Id: " << s.id << " Grade: " << s.letter_grade << endl;
	cout << "Name: " << j.name << " Id: " << j.id << " Grade: " << j.letter_grade << endl;

	return 0;
}