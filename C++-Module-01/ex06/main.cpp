/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:02:39 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 19:38:14 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int c , char **arg)
{
    if (c != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }
    std::string level(arg[1]);
    std::string levelsArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Harl Harl2;
    int  l = -1;
    for (int i = 0; i < 4;i++)
        if (level == levelsArray[i])
            l = i;
    switch (l)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            Harl2.complain(levelsArray[0]);
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            Harl2.complain(levelsArray[1]);
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            Harl2.complain(levelsArray[2]);
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            Harl2.complain(levelsArray[3]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}