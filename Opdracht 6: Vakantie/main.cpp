#include "Caravan.h"
#include <iostream>

int main() {

	SockPair* sp1 = new SockPair("green");
	Suitcase* sc1 = new Suitcase("red");
	Caravan* car1 = new Caravan("blue");
	Caravan* car2;

	sc1->loadSocks(*sp1);

	car1->loadSuitcase(*sc1);

	car1->displayContents();

	car2 = new Caravan(*car1);
	
	std::cout << "Your caravan has been stolen, fool. This is the evidence the police found:" << std::endl;

	car2->displayContents();

	delete car1;
	delete car2;

	return 0;
}