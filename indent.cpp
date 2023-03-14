//Name: Zara Amer
//CSCI 135
//Prof Zamansky
//3/11/23
//Lab 7: small utility program that can fix indentation in C or C++ source code files 
//Task B: A program that indents code properly.

#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"

//@param: line(s) of code, char c
//@return: num of {}
//@function: iterate over the input str, count the num of {}

int countChar(std::string line, char c) {
    int count = 0; //initialize a count var to 0 that will be modified as we detect more {}
    for (char ch : line) { //iterate thru every char in the line and temporarily store into char ch
        if (ch == c) { //if a char in the line matches with the formal parameter char c (in our case { })
            count++; //increment count if found { }
        }
    }
    return count; //return count
}

//@param: line(s) of code, blockCount number (num of open blocks) as pass by reference
//@return: same lines of code that are properly indented based on open blocks
//@function: iterate over the input str, keep track of how many blocks are currently open
//at the beginning of each line (based on {}) and indent accordingly.


std::string indent(std::string line, int& blockCount) {
    line = removeLeadingSpaces(line); // remove leading spaces from line
    int openBraces = countChar(line, '{'); // count the instances of '{'
    int closeBraces = countChar(line, '}'); // count the instances of '}'
    blockCount -= closeBraces; //decrement the block count by the number of close braces on the current line
    std::string indentedLine = ""; // initialize an empty string for the indented line
    for (int i = 0; i < blockCount; i++) { // for every open block in the code
        indentedLine += '\t'; // add that many tabs at the beginning of each line
    }
    indentedLine += line;
    blockCount += openBraces; // increment the block count by the number of open braces on the current line
    blockCount -= closeBraces; // decrement the block count by the number of close braces on the current line
    return indentedLine; // return the indented code
}




