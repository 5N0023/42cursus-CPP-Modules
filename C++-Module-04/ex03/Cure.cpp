/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:37 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:38 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    this->type = "cure";
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
     std::cout << "Cure destructor called" << std::endl;
}
Cure::Cure(Cure const &  src)
{
    type = src.type;
}
Cure &Cure::operator=(Cure const & src)
{
    type = src.type;
    return(*this);
}
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}