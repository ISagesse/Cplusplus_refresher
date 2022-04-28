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
		cout << "Hello my name is " << first_name << " " << last_name << endl;
		cout << "I am a " << position << " at " << company_name << endl;
		cout << "I have " << years_of_experience << " years of experience." << endl;
	}


};

int main() {

	Employee first;

	first.first_name = "Israel";
	first.last_name = "Sagesse";
	first.position = "Sofware Engirneering";
	first.company_name = "FANG";
	first.years_of_experience = 22;
	first.introduction();

	Employee second;
	second.first_name = "Second";
	second.last_name = "Employee";


	return 0;
}