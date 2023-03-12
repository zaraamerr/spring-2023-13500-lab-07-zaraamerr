//Name: Zara Amer
//CSCI 135
//Prof Zamansky
//3/11/23
//Lab 7: small utility program that can fix indentation in C or C++ source code files 
//Task A: A program that unindents lines of code

#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"

//@param: line(s) of code
//@return: same line(s) of code w/o leading spaces + tabs
//@function: iterate over the input str, skip all the spaces/tabs, 
//and when it comes across first non-space char, start accumulating
//the chars into a new str that'll be returned.

std::string removeLeadingSpaces(std::string line){
    //initialize an empty string that will later on store the unindented code
    std::string unindentedLine = ""; 
    //create a bool that will indicate whether a non-space char has been found or not
    bool found = false; 
    for (char c : line){ //iterate thru every char in the input str 
        if (found || !std::isspace(c)){ //checks whether if found is true or if the current char is nonspace
            found = true; //set bool to true
            unindentedLine += c; //concatenate the char to the unindented line str var.
        }
    }
    return unindentedLine; //return the unindented str
}

