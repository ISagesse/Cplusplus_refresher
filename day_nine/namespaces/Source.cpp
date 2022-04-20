#include <iostream>

// A look at creating two namespaces Player and Vehicle

namespace Player {
	void print_player_name() {
		std::cout << "Hello my name is Mike" << std::endl;
	}
}

namespace Vehicle {
	void bmw() {
		std::cout << "2023 BMW m5 competion" << std::endl;
	}
}

// using namespace Player tells the compiler that any type and function within that namespace can be used.
using namespace Player;

int main() {
	print_player_name();

	// now we are calling the Vehicle namespace and explicitly said what we want.
	Vehicle::bmw();
}