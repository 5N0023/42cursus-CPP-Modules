/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:33 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:34 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
     std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(Ice const &  src)
{
    type = src.type;
}

Ice &Ice::operator=(Ice const & src)
{
    type = src.type;
    return(*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}