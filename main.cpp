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
    int blockCount = 0;
    while (std::getline(input, line)) { // read each line from the file
        line = removeLeadingSpaces(line); //unindent/remove tabs & leading spaces
        std::string indentedLine = indent(line, blockCount); //indent the line based on open blocks
        std::cout << indentedLine << '\n'; //output indented line
    }
    return 0;
}

