#include "SockPair.h"

SockPair::SockPair(std::string col) {
	std::cout << "SockPair ctor called" << std::endl;
	this->colour = col;
}

SockPair::SockPair(const SockPair& sp) {
	if (this == &sp) return;
	this->colour = sp.colour;
}

SockPair& SockPair::operator=(const SockPair& sp) {
	if (this == &sp) return *this;
	this->colour = sp.colour;
	return *this;
}

SockPair::~SockPair() {
	std::cout << "SockPair dtor called" << std::endl;
}

