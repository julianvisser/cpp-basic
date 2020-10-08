#include "Book.h"
#include <string>
#include <iostream>

Book::Book(std::string n) : name(n) {
	
}

Book::~Book() {
	std::cout << "Book has been deleted." << std::endl;
}