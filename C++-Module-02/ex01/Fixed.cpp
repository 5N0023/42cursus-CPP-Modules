/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:19:07 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/15 19:59:06 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int num)
{
    this->setRawBits(num << this->fractionalBits);
    std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float num)
{
    this->setRawBits(roundf(num * (1 << this->fractionalBits)));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPointValue = src.getRawBits();
    return (*this);
}

int   Fixed::toInt(void) const
{
    return(this->fixedPointValue >> this->fractionalBits);
}

float   Fixed::toFloat(void) const
{
    float  result;
    
    result = this->fixedPointValue / (float)(1 << this->fractionalBits);
    return (result);
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

int     Fixed::getRawBits(void) const
{
    return (this->fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

