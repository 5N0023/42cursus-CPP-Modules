/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:19:07 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/17 18:13:10 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fixedPointValue(0)
{
}

Fixed::Fixed(Fixed const &src)
{
    this->fixedPointValue = src.getRawBits();
}

Fixed::Fixed(const int num)
{
    this->setRawBits(num << this->fractionalBits);
}


Fixed::Fixed(const float num)
{
    this->setRawBits(roundf(num * (1 << this->fractionalBits)));
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(Fixed const &src)
{
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

bool    Fixed::operator>(Fixed const &src)
{
    if(this->toFloat() > src.toFloat())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const &src)
{
    if(this->toFloat() >= src.toFloat())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const &src)
{
    if(this->toFloat() <= src.toFloat())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const &src)
{
    if(this->toFloat() != src.toFloat())
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const &src)
{
    if(this->toFloat() < src.toFloat())
        return true;
    return false;
}

Fixed   Fixed::operator+(Fixed const &src)
{
    Fixed result((float)(this->toFloat() + src.toFloat()));
    return result;
}

Fixed   Fixed::operator*(Fixed const &src)
{
    Fixed result((float)(this->toFloat() * src.toFloat()));
    return result;
}

Fixed   Fixed::operator-(Fixed const &src)
{
    Fixed result((float)(this->toFloat() - src.toFloat()));
    return result;
}

Fixed   Fixed::operator/(Fixed const &src)
{
    Fixed result((float)(this->toFloat() / src.toFloat()));
    return result;
}

Fixed & Fixed::operator++(void)
{
    this->fixedPointValue++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed & Fixed::operator--(void)
{
    this->fixedPointValue--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if(a.toFloat() > b.toFloat())
        return a;
    return b;
}

Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a.toFloat() > b.toFloat())
        return (Fixed &)a;
    return (Fixed &)b;
}
