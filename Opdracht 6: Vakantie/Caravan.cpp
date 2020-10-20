#include "Caravan.h"

Caravan::Caravan(std::string col) {
	std::cout << "Caravan ctor called" << std::endl;
	this->colour = col;
}

void Caravan::displayContents() {
	std::cout << "This caravan is " << this->colour << "." << std::endl;
	std::cout << "It has a " << suitcase->colour << " suitcase in it." << std::endl;
	std::cout << "The suitcase has a pair of " << suitcase->socks->colour << " socks in it." << std::endl;
}

Caravan::Caravan(const Caravan& c) {
	if (this == &c) return;
	this->colour = c.colour;
	suitcase = new Suitcase(*c.suitcase);
}

Caravan& Caravan::operator=(const Caravan& c) {
	if (this == &c) return *this;
	delete suitcase;
	this->colour = c.colour;
	suitcase = new Suitcase(*c.suitcase);
	return *this;
}

Caravan::~Caravan() {
	std::cout << "Caravan dtor called"  << std::endl;
	delete suitcase;
}

void Caravan::loadSuitcase(Suitcase& suitcase) {
	this->suitcase = &suitcase;
}
