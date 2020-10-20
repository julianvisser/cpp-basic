#pragma once
#include <string>
#include <iostream>

class SockPair {
public:
	std::string colour = "grey";
	SockPair(std::string col);
	SockPair(const SockPair& sp);
	SockPair& operator=(const SockPair& sp);
	virtual ~SockPair();
};