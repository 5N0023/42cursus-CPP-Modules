#pragma once
#include <iostream>
#include <limits>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        
        void convert(std::string input);
void convertFromChar(char input);
        void convertFromInt(int input);
        void convertFromFloat(float input);
        void convertFromDouble(double input);
        void convertFromScience(std::string input);
        void convertIsImpossible(std::string input);
        std::string checkType(std::string input);
        ScalarConverter &operator=(const ScalarConverter &other);
};