#include "Span.hpp"

int main()
{
        {
            Span sp = Span(5);
            try{
            sp.addNumber(6);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
            try{
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        {
            Span sp = Span(10);
            try {
            for (int i = 0; i < 15; i++)
                sp.addNumber(i);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
            try{
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
    return 0;
}