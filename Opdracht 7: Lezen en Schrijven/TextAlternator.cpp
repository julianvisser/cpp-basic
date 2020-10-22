#include "TextAlternator.h"

void TextAlternator::alternateText(std::string inAddress1, std::string inAddress2, std::string outAddress) {

	#define FILE1 inAddress1
	#define FILE2 inAddress2
	#define OUTFILE outAddress

	std::string line;

	// Open the in files (and don't skip whitespace)
	std::ifstream inStream1;
	inStream1.open(FILE1);
	inStream1 >> std::noskipws;

	std::ifstream inStream2;
	inStream2.open(FILE2);
	inStream2 >> std::noskipws;

	// Test if files are opened
	if (!inStream1 || !inStream2) {
		std::cout << "Could not open input file" << std::endl;
		exit(1);
	}

	// Open the out file
	std::ofstream outStream;
	outStream.open(OUTFILE);
	if (!outStream) {
		std::cout << "Could not open output file" << std::endl;
		exit(1);
	}
	
	// Writing loop
	while (!inStream1.eof() || !inStream2.eof()) {
		
		if (!inStream1.eof()) {
			std::getline(inStream1, line);
			outStream << line << "\n";
		}

		if (!inStream2.eof()) {
			std::getline(inStream2, line);
			outStream << line << "\n";
		}
		
	}

	// Cleanup
	inStream1.close();
	inStream2.close();
}