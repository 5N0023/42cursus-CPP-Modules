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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap    frag("Frag");
    ScavTrap    scav("Scav");
    ClapTrap    clap("Clap");

    std::cout << std::endl;

    frag.attack("target");
    frag.takeDamage(5);
    frag.beRepaired(5);
    frag.highFivesGuys();

    std::cout << std::endl;

    scav.attack("target");
    scav.takeDamage(5);
    scav.beRepaired(5);
    scav.guardGate();

    std::cout << std::endl;

    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(5);

    std::cout << std::endl;
    
    return (0);
}