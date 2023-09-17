/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:19:14 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/11 22:36:26 by mlektaib         ###   ########.fr       */
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
        Fixed(Fixed const &src);
        ~Fixed();
        Fixed & operator=(Fixed const &src);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};