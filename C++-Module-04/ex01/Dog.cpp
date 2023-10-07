/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:37 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:38 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog Constructors called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
}

Dog & Dog::operator=(Dog const &src)
{
    this->type = src.type;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}