#include <iostream>
#include <fstream>
#include "TextReverser.h"
#include "TextAlternator.h"

int main() {
	
	TextReverser tr;
	TextAlternator ta; 

	tr.reverseText("napkin.txt", "napkinreversed.txt");
	ta.alternateText("napkin.txt", "yoshikage.txt", "napkinjumbled.txt");

}
