/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:30:49 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 15:30:50 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name)
{
    this->weapon = nullptr;
}

void HumanB::attack(void)
{
    if(this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->gettype() << std::endl;
    else
        std::cout << this->name << " had no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB(){}