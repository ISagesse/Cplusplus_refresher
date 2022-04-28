#include <iostream>

using namespace std;

class Employee {
public:
	string first_name;
	string last_name;
	string position;
	string company_name;
	int years_of_experience;

	void introduction() {
		cout << "Hi! my name is " << first_name << " " << last_name << endl;
		cout << "I am a " << position << " at " << company_name << endl;
		cout << "I have " << years_of_experience << " years of experience." << endl;
	}

	Employee(string f_name, string l_name, string e_position, string e_company_name, int years_working) {
		first_name = f_name;
		last_name = l_name;
		position = e_position;
		company_name = e_company_name;
		years_of_experience = years_working;
	}


};

int main() {

	Employee first = Employee("Israel", "Sagesse", "Sofware Engirneering", "FANG", 5);

	first.introduction();

	Employee second = Employee("Employee", "Second", "Waiter", "Eat Good", 3);
	second.introduction();


	return 0;
}