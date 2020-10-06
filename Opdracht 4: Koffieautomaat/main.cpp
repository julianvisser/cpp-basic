#include "FiftyCent.h"
#include "OneEuro.h"
#include "CoffeeToken.h"
#include "CoffeeMachine.h"

#include "Windows.h"

// Making the 'coins': Instances of the coin classes
FiftyCent fcc = FiftyCent();
OneEuro oec = OneEuro();
CoffeeToken ct = CoffeeToken();

CoffeeMachine machine = CoffeeMachine();

int main() {
	// Running the program you should see the fifty cent coin inserted, then one euro, then the coffee token
	machine.coinIn(fcc);
	Sleep(2000);
	machine.coinIn(oec);
	Sleep(2000);
	machine.coinIn(ct);
}