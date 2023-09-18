/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:52 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 11:55:18 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    
    ScavTrap    scav("scav");
    ScavTrap    scav2(scav);
    ScavTrap    scav3;
    scav3 = scav2;
    scav.takeDamage(5);
    scav.beRepaired(1);
    scav.attack("target");
    scav.attack("target");
    scav.guardGate();
    return (0);
}