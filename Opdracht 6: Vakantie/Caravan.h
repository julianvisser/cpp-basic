#include <string>
#include <iostream>
#include "Suitcase.h"

class Caravan {
public:
	std::string colour = "grey";
	Suitcase* suitcase = nullptr;
	void displayContents();
	void loadSuitcase(Suitcase& s);
	Caravan(std::string col);
	Caravan(const Caravan& c);
	Caravan& operator=(const Caravan& c);
	virtual ~Caravan();
};
