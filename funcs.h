#pragma once
#include <string>

//add prototypes here

std::string removeLeadingSpaces(std::string line); 
int countChar(std::string line, char c);
std::string indent(std::string line, int& blockCount);