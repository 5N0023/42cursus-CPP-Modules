/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:54 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 20:52:43 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string    Name;
        unsigned int   HitPoints;
        unsigned int   EnergyPoints;
        unsigned int   AttackDamage;
    public :
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap const &src);
        ClapTrap & operator=(ClapTrap const &src);
        virtual void attack(const std::string& target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        ~ClapTrap();

};
