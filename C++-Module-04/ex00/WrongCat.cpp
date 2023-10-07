/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:17 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:18 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat Constructors called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
    this->type = src.type;
}

WrongCat & WrongCat::operator=(WrongCat const &src)
{
    this->type = src.type;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;
}