/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:19:14 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/13 15:32:50 by mlektaib         ###   ########.fr       */
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
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);