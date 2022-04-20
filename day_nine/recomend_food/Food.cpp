#include "Food.h"
#include <iostream>

const char* food_recomendation(char first_letter) {
	if (first_letter == 'A' || first_letter == 'a') {
		return "Apple";
	}
	else if (first_letter == 'B' || first_letter == 'b') {
		return "Banana";
	}
	else if (first_letter == 'M' || first_letter == 'm') {
		return "Mango";
	}
	else {
		return "Pizza";
	}
}

void pizza_recipe() {
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Buffalo Style Chicken Pizza Recipe " << std::endl;
	std::cout << std::endl;
	std::cout << "3 skinless, boneless chicken breast halves - cooked and cubed " << std::endl;
	std::cout << "2 tablespoons butter, melted " << std::endl;
	std::cout << "1 (2 ounce) bottle hot sauce " << std::endl;
	std::cout << "1 (8 ounce) bottle blue cheese salad dressing " << std::endl;
	std::cout << "1 (16 inch) prepared pizza crust " << std::endl;
	std::cout << "1 (8 ounce) package shredded mozzarella cheese " << std::endl;
}