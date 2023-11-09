#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cerr << "Error" << std::endl;
        return(1);
    }
    std::string input = argv[1];
    checkInput(input);
    std::stack<int> stack;
    rpn(input,stack);
    if(stack.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return(1);
    }
    std::cout << stack.top() << std::endl;
    return(0);
}