/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:50:20 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 20:52:43 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::string DefaultName = "a FragTrap";
    Name = DefaultName;
    HitPoints       =   100;
    EnergyPoints    =   100;
    AttackDamage    =   30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    this->Name = Name;
    HitPoints       =   100;
    EnergyPoints    =   100;
    AttackDamage    =   30;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(!EnergyPoints || !HitPoints)
        return ;
    std::cout << "FragTrap " << Name <<" attacks "<< target <<", causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
    HitPoints--;
}

FragTrap::FragTrap(FragTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
    HitPoints       =   src.HitPoints;
    EnergyPoints    =   src.EnergyPoints;
    AttackDamage    =   src.AttackDamage;
    return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout <<  Name << " wants to high five." << std::endl;
}

FragTrap::~FragTrap()
{
        std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << Name <<" takes "<< amount << " points of damage!"<< std::endl;
    if(HitPoints < amount)
        HitPoints = 0;
    else
        HitPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if(!EnergyPoints)
        return ;
    std::cout << "FragTrap " << Name <<" get repaired" << std::endl;
    EnergyPoints--;
    HitPoints += amount;    
}