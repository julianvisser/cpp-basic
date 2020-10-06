#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine() {

}

// In this function I've 'hardcoded' all coffee names and prices.
// Ideally, if I had more time, I would make classes for each variety of coffee, and compare c.value to a price defined in each of those classes.

void CoffeeMachine::coinIn(Coin c) {
	std::cout << "You've inserted a " + c.name + " coin." << std::endl;
	std::cout << "You could purchase: ";
	std::cout << "Black Coffee";
	if (c.value > 70) {
		std::cout << ", Cappuccino";
	}
	std::cout << "." << std::endl;
}

void CoffeeMachine::coinIn(CoffeeToken c) {
	std::cout << "You've inserted a special " + c.name + "." << std::endl;
	std::cout << "You could choose: Black Coffee, Cappuccino, Mega-Ultra Secret Coffee." << std::endl;
}