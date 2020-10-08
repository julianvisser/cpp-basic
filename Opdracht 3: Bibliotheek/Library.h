#pragma once
#include "Book.h"

class Library {
public:
	Library();
	~Library();
	void borrowBook(Book* b);
	void returnBook(Book* b);
};
