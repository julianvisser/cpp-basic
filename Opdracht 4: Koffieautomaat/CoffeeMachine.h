#pragma once
#include "OneEuro.h"
#include "FiftyCent.h"
#include "CoffeeToken.h"

class CoffeeMachine {
public:
	void coinIn(Coin c);
	void coinIn(CoffeeToken c);
	CoffeeMachine();
};