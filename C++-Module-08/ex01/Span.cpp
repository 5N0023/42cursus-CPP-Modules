/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:01:30 by mlektaib          #+#    #+#             */
/*   Updated: 2023/11/05 23:01:31 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n): n(n), added(0)
{
    numbers.reserve(n);
}
void Span::addNumber(int number)
{
    if (added == n)
        throw Span::fullSpan();
    numbers.push_back(number);
    added++;
}
int     Span::shortestSpan(void) const
{
    if (added <= 1)
        throw Span::noSpan();
    std::vector<int> copy = numbers;
    std::sort(copy.begin(), copy.end());
    int min = copy[1] - copy[0];
    for (unsigned int i = 2; i < copy.size(); i++)
    {
        if (copy[i] - copy[i - 1] < min)
            min = copy[i] - copy[i - 1];
    }
    return min;
}
int     Span::longestSpan(void) const
{
    if (added <= 1)
        throw Span::noSpan();
    int max = *std::max_element(numbers.begin(), numbers.end());
    int min = *std::min_element(numbers.begin(), numbers.end());
    return max - min;
}
Span::~Span()
{
    numbers.clear();
}
Span::Span(Span const &src)
{
    *this = src;
}
Span &Span::operator=(Span const &src)
{
    if (this != &src)
    {
        this->n = src.n;
        this->added = src.added;
        this->numbers = src.numbers;
    }
    return *this;
}
const char *Span::fullSpan::what(void) const throw()
{
    return "Span is full";
}

const char *Span::noSpan::what(void) const throw()
{
    return "only one element";
}