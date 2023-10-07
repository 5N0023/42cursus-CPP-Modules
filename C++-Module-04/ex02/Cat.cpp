/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:13 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:14 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat Constructors called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    this->type = src.type;
}

Cat & Cat::operator=(Cat const &src)
{
    this->type = src.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}