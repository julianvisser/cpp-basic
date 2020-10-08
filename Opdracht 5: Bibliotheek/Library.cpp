#include "Library.h"
#include "Book.h"
#include <iostream>

Library::Library() {

}

Library::~Library() {
	std::cout << "Library has been deleted." << std::endl;
}

void Library::borrowBook(Book* b) {
	if (b->atLibrary) {
		b->atLibrary = false;
		std::cout << "You've successfully borrowed " + b->name + "!" << std::endl;
	} else {
		std::cout << "Sorry, " + b->name + "is not available to borrow!" << std::endl;
	}
}

void Library::returnBook(Book* b) {
	if (b->atLibrary) {
		std::cout << "We already have " + b->name + " at the libary!"<< std::endl;
	}
	else {
		b->atLibrary = true;
		std::cout << "Thank you for returning " + b->name + "!" << std::endl;
	}
}