/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:01:32 by mlektaib          #+#    #+#             */
/*   Updated: 2023/11/05 23:01:33 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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