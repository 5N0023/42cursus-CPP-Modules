#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}


ScalarConverter::~ScalarConverter()
{
}

bool IsANumber(std::string input)
{
    int i = 0;
    if (input[i] == '+' || input[i] == '-')
        i++;
    while (input[i])
    {
        if (!isdigit(input[i]))
            return false;
        i++;
    }
    long long int number = atoi(input.c_str());
    if ((number == 0) && (input[0] != '0' && input != "+0" && input != "-0" && number == 0))
        return false;
    if(number == -1 && input[0] != '-')
        return false;
    if(number == 1 && input !=  "+1" && input != "1")
        return false;
    if(number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
        return false;
    return true;
}

bool IsFloat(std::string input)
{
    int i = 0;
    int dot = 0;
    int f = 0;
    if (input[i] == '+' || input[i] == '-')
        i++;
    while (input[i])
    {
        if (input[i] != '.' && !isdigit(input[i]) && input[i] != 'f')
            return false;
        if (input[i] == '.')
            dot++;
        if (input[i] == 'f')
            f++;
        if (dot > 1 || f > 1)
            return false;
        i++;
    }
    if(input[i - 1] != 'f' || dot == 0)
        return false;
    float number = atof(input.c_str());
    if(number > std::numeric_limits<float>::max() || number < std::numeric_limits<float>::min())
        return false;
    return true;
}

bool IsDouble(std::string input)
{
    int i = 0;
    int dot = 0;
    if (input[i] == '+' || input[i] == '-')
        i++;
    while (input[i])
    {
        if (input[i] != '.' && !isdigit(input[i]))
            return false;
        if (input[i] == '.')
            dot++;
        if (dot > 1)
            return false;
        i++;
    }
    if(dot == 0)
        return false;
    double number = strtod(input.c_str(), NULL);
    if(number > std::numeric_limits<double>::max() || number < std::numeric_limits<double>::min())
        return false;
    return true;
}

std::string ScalarConverter::checkType(std::string input)
{
    if ((input.length() == 5 && (input.find("+inff") != std::string::npos || input.find("-inff") != std::string::npos)) || (input.find("nanf") != std::string::npos && input.length() == 4))
        return "Science";
    else if ((input.length() == 4 && (input.find("+inf") != std::string::npos || input.find("-inf") != std::string::npos)) || (input.find("nan") != std::string::npos && input.length() == 3))
        return "Science";
    else if(input.length() == 1 && std::isprint(input[0]) && !isdigit(input[0]))
        return "Char";
    else if (IsANumber(input))
        return "Int";
    else if (IsFloat(input))
        return "Float";
    else if (IsDouble(input))
        return "Double";
    else
        return "Impossible";

}

void ScalarConverter::convert(std::string input)
{
    std::string type = ScalarConverter::checkType(input);
    
    std::cout << "Type: " << type << std::endl;

    if (type == "Char")
        ScalarConverter::convertFromChar(input[0]);
    else if (type == "Int")
        ScalarConverter::convertFromInt(std::atoi(input.c_str()));
    else if (type == "Float")
        ScalarConverter::convertFromFloat(strtod(input.c_str(), NULL));
    else if (type == "Double")
        ScalarConverter::convertFromDouble(strtod(input.c_str(), NULL));
    else if (type == "Science")
        ScalarConverter::convertFromScience(input);
    else
        ScalarConverter::convertIsImpossible(input);
    
}

void ScalarConverter::convertFromChar(char input)
{
    std::cout << "char: '" << input << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(input) << std::endl;
    std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
}


void ScalarConverter::convertFromInt(int input)
{
    if (input < 32 || input > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
    std::cout << "int: " << input << std::endl;
    std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
}

void ScalarConverter::convertFromFloat(float input)
{
    if (input < 32 || input > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
    if (input > std::numeric_limits<int>::max() || input < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(input) << std::endl;
    if(input - static_cast<int>(input) == 0)
    {
        std::cout << "float: " << input << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(input) << std::endl;
    }
}

void ScalarConverter::convertFromDouble(double input)
{
    if (input < 32 || input > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
    if (input > std::numeric_limits<int>::max() || input < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(input) << std::endl;
    if(input - static_cast<int>(input) == 0)
    {
        std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
        std::cout << "double: " << input << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }
}

void ScalarConverter::convertFromScience(std::string input)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (input.find("nan") != std::string::npos)
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }

    else if (input.find("+inf") != std::string::npos)
    {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (input.find("-inf") != std::string::npos)
    {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }

    }

void ScalarConverter::convertIsImpossible(std::string input)
{
    std::cout << "conversion impossible for :" << input << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}