//Name: Zara Amer
//CSCI135
//Prof Zamansky
//Tests for Lab 7 Tasks

#include <iostream>
#include <fstream>
#include <string>
#include "funcs.h"

int main() {
    std::ifstream input("bad-code.cpp"); // open the input file
    std::string line;
    while (std::getline(input, line)) { // read each line from the file
        std::string fixedLine = removeLeadingSpaces(line); //unindent/remove tabs & leading spaces
        std::cout << fixedLine << '\n'; //output unindented line
    }
    return 0;
}
