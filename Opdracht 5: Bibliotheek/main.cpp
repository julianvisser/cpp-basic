#include "Library.h"
#include "Book.h"
#include <iostream>

Book* book = new Book("C++ For Dummies");
Library* lib = new Library();

int main() {
	// Correctly borrow book:
	lib->borrowBook(book);

	// Borrow book that's not there:
	lib->borrowBook(book);

	// Correctly return book:
	lib->returnBook(book);

	// Return book that's already there:
	lib->returnBook(book);

	delete book;
	delete lib;
}