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
    private:
        std::string    Name;
        unsigned int   HitPoints;
        unsigned int   EnergyPoints;
        unsigned int   AttackDamage;
    public :
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap const &src);
        ClapTrap & operator=(ClapTrap const &src);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();

};
