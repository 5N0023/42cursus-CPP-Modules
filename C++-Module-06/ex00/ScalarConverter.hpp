#pragma once
#include <iostream>
#include <limits>

class ScalarConverter
{
        private :
                ScalarConverter();
                ScalarConverter(const ScalarConverter &other);
                ScalarConverter &operator=(const ScalarConverter &other);
                ~ScalarConverter();
        public:
                static void convert(std::string input);
                static void convertFromChar(char input);
                static void convertFromInt(int input);
                static void convertFromFloat(float input);
                static void convertFromDouble(double input);
                static void convertFromScience(std::string input);
                static void convertIsImpossible(std::string input);
                static std::string checkType(std::string input);
                static bool isANumber(std::string input);
                static bool isAFloat(std::string input);
                static bool isADouble(std::string input);
};