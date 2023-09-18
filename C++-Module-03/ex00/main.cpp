/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:56:52 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/18 11:32:55 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clap("clap");
    ClapTrap    clap2(clap);
    ClapTrap    clap3;
    clap3 = clap2;
    for (int i = 0; i < 11; i++)
        clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(1);
    clap.attack("target");
    clap.attack("target");
    return (0);
}