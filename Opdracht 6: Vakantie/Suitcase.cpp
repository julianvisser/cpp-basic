#include "Suitcase.h"

Suitcase::Suitcase(std::string col) {
	std::cout << "Suitcase ctor called" << std::endl;
	this->colour = col;
}

Suitcase::Suitcase(const Suitcase& s) {
	if (this == &s) return;
	this->colour = s.colour;
	socks = new SockPair(*s.socks);
}

Suitcase& Suitcase::operator=(const Suitcase& s) {
	if (this == &s) return *this;
	delete socks;
	this->colour = s.colour;
	socks = new SockPair(*s.socks);
	return *this;
}

Suitcase::~Suitcase() {
	std::cout << "Suitcase dtor called" << std::endl;
	delete socks;
}


void Suitcase::loadSocks(SockPair& sp) {
	this->socks = &sp;
}