#include <iostream>

using namespace std;

class Employee {
private:

	string first_name;
	string last_name;
	string position;
	string company_name;
	int years_of_experience;

public:
	void set_first_name(string f_name) {
		first_name = f_name;
	}

	string get_first_name() {
		return first_name;
	}

	void set_last_name(string l_name) {
		first_name = l_name;
	}

	string get_last_name() {
		return last_name;
	}

	void set_position(string new_position) {
		position = new_position;
	}

	string get_position() {
		return position;
	}

	void set_company_name(string new_name) {
		company_name = new_name;
	}

	string get_company_name() {
		return company_name;
	}

	void set_years_of_experience(int new_year) {
		if (new_year > years_of_experience) {
			years_of_experience = new_year;
			// it will only change the year when it is greater than years_of_experience.
		}
	}

	int get_years_of_experience() {
		return years_of_experience;
	}
	
	// introduce to the user
	void introduction() {
		cout << "Hi! my name is " << first_name << " " << last_name << endl;
		cout << "I am a " << position << " at " << company_name << endl;
		cout << "I have " << years_of_experience << " years of experience." << endl;
	}

	// this is the constructor of the class or in python the __init__ method.
	Employee(string f_name, string l_name, string e_position, string e_company_name, int years_working) {
		first_name = f_name;
		last_name = l_name;
		position = e_position;
		company_name = e_company_name;
		years_of_experience = years_working;
	}


};

int main() {

	// creating a class of first, calling the constructor and passed the disired values
	Employee first = Employee("Israel", "Sagesse", "Sofware Engirneering", "FANG", 5);

	//first.introduction();

	// change our position to be a Senior Sofware Engirneering
	first.set_position("Senior Sofware Engirneering");
	cout << "My new position is " << first.get_position() << endl;

	//let's try changing the year of experience to 2.
	first.set_years_of_experience(2);
	cout << "Years of experiece: " << first.get_years_of_experience() << endl;

	Employee second = Employee("Employee", "Second", "Waiter", "Eat Good", 3);
	//second.introduction();


	return 0;
}