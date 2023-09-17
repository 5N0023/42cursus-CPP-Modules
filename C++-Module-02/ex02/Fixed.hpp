/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:19:14 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/17 18:07:51 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
    private:
        int                 fixedPointValue;
        static const int    fractionalBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(Fixed const &src);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed & operator=(Fixed const &src);
        Fixed   operator+(Fixed const &src);
        Fixed   operator-(Fixed const &src);
        Fixed   operator*(Fixed const &src);
        Fixed   operator/(Fixed const &src);
        bool    operator>(Fixed const &src);
        bool    operator<(Fixed const &src);
        bool    operator>=(Fixed const &src);
        bool    operator<=(Fixed const &src);
        bool    operator==(Fixed const &src);
        bool    operator!=(Fixed const &src);
        Fixed & operator++(void);
        Fixed   operator++(int);
        Fixed & operator--(void);
        Fixed   operator--(int);
        static Fixed & max(Fixed &a, Fixed &b);
        static Fixed & max(Fixed const &a, Fixed const &b);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);