#include <iostream>
using namespace std;

// a struct to hold smartphones.

struct Smartphone {
	string name;
	int storage;
	string color;
	float price;
};

// a closer look at passing struct as reference in a function
void smartphone_details(Smartphone &phone) {
	cout << "Name: " << phone.name << endl;
	cout << "Storage Space: " << phone.storage << "GB" << endl;
	cout << "Color: " << phone.color << endl;
	cout << "Price: $" << phone.price << endl;
	cout << endl;
}

int main() {
	Smartphone iphone = { "Iphone 14 Pro Max", 100, "Black", 1999.99 };
	Smartphone samsung = { "Samsung Ultra 22", 500, "Gray", 1999.99 };

	smartphone_details(iphone);
	smartphone_details(samsung);

	return 0;
}