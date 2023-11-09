#include "RPN.hpp"

void checkInput(std::string input)
{
    for (size_t i = 0 ; i < input.size(); i++)
    {
        if(input[i] != ' ' && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && std::isdigit(input[i]) == 0)
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
}

void rpn(std::string input, std::stack<int> &stack)
{
    int result = 0;
    for (size_t i = 0; i < input.size(); i++)
    {
        if(input[i] == ' ')
            continue;
        else if(input[i] == '+')
        {
            if(stack.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    exit(1);
                }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            result = b + a;
            stack.push(result);
        }
        else if(input[i] == '-')
        {
            if(stack.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    exit(1);
                }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            result = b - a;
            stack.push(result);
        }
        else if(input[i] == '*')
        {
            if(stack.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    exit(1);
                }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            result = a * b;
            stack.push(result);
        }
        else if(input[i] == '/')
        {
            if(stack.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    exit(1);
                }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if(b == 0)
            {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
            result = a / b;
            stack.push(result);
        }
        else
        {
            std::string number;
            while(input[i] != ' ' && i < input.size())
            {
                number += input[i];
                i++;
            }
            if(number.size() > 1)
            {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
            stack.push(std::atoi(number.c_str()));
        }
    }
}