/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:14 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:15 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("a WrongAnimal")
{
    std::cout << "WrongAnimal Constructors called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    this->type = src.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src)
{
    this->type = src.type;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
}

std::string  WrongAnimal::getType(void) const
{
    return(type);
}