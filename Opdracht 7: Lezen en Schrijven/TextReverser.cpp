#include "TextReverser.h"

void TextReverser::reverseText(std::string inAddress, std::string outAddress) {
	
	#define FILE inAddress
	#define OUTFILE outAddress

	char ch;
	int index;

	// Open the in file (and don't skip whitespace)
	std::ifstream inStream;
	inStream.open(FILE);
	if (!inStream) {
		std::cout << "Could not open input file" << std::endl;
		exit(1);
	}
	inStream >> std::noskipws;

	// Open the out file
	std::ofstream outStream;
	outStream.open(OUTFILE);
	if (!outStream) {
		std::cout << "Could not open output file" << std::endl;
		exit(1);
	}
	
	// Set the index for which character to get
	inStream.seekg(0, std::ios::end);
	index = inStream.tellg();

	// Writing loop
	index--;
	while (index>=0) {
		inStream.clear();
		inStream.seekg(index);
		inStream.get(ch);
		outStream.put(ch);
		//std::cout << ch;
		index--;
	}

	//// Confirm that the while loop ended fine
	//std::cout << std::endl;
	//std::cout << "Loop ended" << std::endl;

	// Cleanup
	inStream.close();
	outStream.close();

}