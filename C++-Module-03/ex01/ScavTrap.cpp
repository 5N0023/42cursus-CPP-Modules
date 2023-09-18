/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:39:23 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 21:10:52 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::string DefaultName = "a ScavTrap";
    Name = DefaultName;
    HitPoints       =   100;
    EnergyPoints    =   50;
    AttackDamage    =   20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string Name)
{
    this->Name      =   Name;
    HitPoints       =   100;
    EnergyPoints    =   50;
    AttackDamage    =   20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(!EnergyPoints || !HitPoints)
        return ;
    std::cout << "ScavTrap " << Name <<" attacks "<< target <<", causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
    HitPoints--;
}
ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
    this->Name      =   src.Name;
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout <<  Name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << Name <<" takes "<< amount << " points of damage!"<< std::endl;
    if(HitPoints < amount)
        HitPoints = 0;
    else
        HitPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if(!EnergyPoints)
        return ;
    std::cout << "ScavTrap " << Name <<" get repaired" << std::endl;
    EnergyPoints--;
    HitPoints += amount;    
}