#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int n;
        unsigned int added;
        std::vector<int> numbers;
        Span();
    public:
        Span(unsigned int n);
        void addNumber(int number);
        int     shortestSpan(void) const;
        int     longestSpan(void)   const;
        ~Span();
        Span(Span const &src);
        Span &operator=(Span const &src);
    class fullSpan: public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    class noSpan: public std::exception
    {
        public:
            const char *what(void) const throw();
    };
};