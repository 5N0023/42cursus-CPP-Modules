/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:46 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:47 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{  
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{  
    std::cout << "AMateria constructor called" << std::endl;
}


std::string const & AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << getType() << " used on " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}