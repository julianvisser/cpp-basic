#pragma once
#include <string>
#include "SockPair.h"

class Suitcase {
public:
	std::string colour = "grey";
	SockPair* socks = nullptr;
	void loadSocks(SockPair& sp);
	Suitcase(std::string col);
	Suitcase(const Suitcase& s);
	Suitcase& operator=(const Suitcase& s);
	virtual ~Suitcase();
};
