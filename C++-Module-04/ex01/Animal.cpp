/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:26 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:27 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("a Animal")
{
    std::cout << "Animal Constructors called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    this->type = src.type;
}

Animal & Animal::operator=(Animal const &src)
{
    this->type = src.type;
    return(*this);
}

Animal::~Animal()
{
     std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
}

std::string  Animal::getType(void) const
{
    return(type);
}