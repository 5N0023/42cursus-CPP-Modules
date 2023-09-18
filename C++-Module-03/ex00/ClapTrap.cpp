/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:50 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 11:56:30 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::string defaultname = "ClapTrap";
    name = defaultname;
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name):name(name),HitPoints(10),EnergyPoints(10),AttackDamage(0)
{
    std::cout << "parameterized constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(!EnergyPoints || !HitPoints)
        return ;
    std::cout << "ClapTrap " << name <<" attacks "<< target <<", causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
    HitPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name <<" takes "<< amount << " points of damage!"<< std::endl;
    if(HitPoints < amount)
        HitPoints = 0;
    else
        HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!EnergyPoints)
        return ;
    std::cout << "ClapTrap " << name <<" get repaired" << std::endl;
    EnergyPoints--;
    HitPoints += amount;    
}