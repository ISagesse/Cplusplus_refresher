#include <iostream>

using namespace std;

class AbstractEmployee {
	virtual void ask_for_promotion()=0;
};

class Employee:AbstractEmployee {
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


	void ask_for_promotion(){
		if (years_of_experience > 5) {
			cout << "congradualation on your new position" << endl;
		}
		else
		{
			cout << "Need more year of experiences." << endl;
		}
	}
};

// this developer class will inherit from the Employee class.
class Developer :public Employee {
public:
	string favorite_programing_langueage;

	Developer(string f_name, string l_name, string e_position, string e_company_name, int years_working, string programing_language)
		:Employee(f_name, l_name, e_position, e_company_name, years_working)
	{
		favorite_programing_langueage = programing_language;
	}

	void hello_developer() {
		//using getters and setter to access and modified the parent class.
		// you can access and modified any protected argument or using getter
		cout << get_first_name() << " Is our new developer, his favorite programing languages is " << favorite_programing_langueage << endl;

	}
};

int main() {

	// creating a class of first, calling the constructor and passed the disired values
	Employee e1 = Employee("Israel", "Sagesse", "Sofware Engirneering", "FANG", 5);

	//first.introduction();

	// change our position to be a Senior Sofware Engirneering
	e1.set_position("Senior Sofware Engirneering");
	//cout << "My new position is " << e1.get_position() << endl;

	//let's try changing the year of experience to 2.
	e1.set_years_of_experience(2);
	//cout << "Years of experiece: " << e1.get_years_of_experience() << endl;

	Employee e2 = Employee("Employee", "Second", "Waiter", "Eat Good", 6);
	//e2.ask_for_promotion();
	//second.introduction();

	Developer d1 = Developer("James", "John", "Web Developer", "DoorDash", 1, "Javascript");
	d1.hello_developer();
	d1.ask_for_promotion();

	return 0;
}