/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:39:23 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 12:25:35 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::string defaultname = "a ScavTrap";
    name = defaultname;
    HitPoints       =   100;
    EnergyPoints    =   50;
    AttackDamage    =   20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    HitPoints       =   100;
    EnergyPoints    =   50;
    AttackDamage    =   20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(!EnergyPoints || !HitPoints)
        return ;
    std::cout << "ScavTrap " << name <<" attacks "<< target <<", causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
    HitPoints--;
}
ScavTrap::ScavTrap(ScavTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout <<  name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << name <<" takes "<< amount << " points of damage!"<< std::endl;
    if(AttackDamage < amount)
        AttackDamage = 0;
    else
        AttackDamage -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if(!EnergyPoints)
        return ;
    std::cout << "ScavTrap " << name <<" get repaired" << std::endl;
    EnergyPoints--;
    HitPoints = amount;    
}