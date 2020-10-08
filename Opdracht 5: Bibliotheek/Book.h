#pragma once
#include <string>

class Book {
public:
	Book(std::string n);
	~Book();
	std::string name;
	bool atLibrary = true;
};