#pragma once


#include <iostream>
#include  <map>
#include <fstream>
#include <sstream>

std::map<int,float> readDATA();
std::string readInputFile(std::string &inputFileName);
void showResult(std::string &inputFile, std::map<int,float> &data);
bool checkValue(std::string value);
bool checkDate(std::string year, std::string month, std::string day);
