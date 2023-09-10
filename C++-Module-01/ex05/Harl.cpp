/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:40:13 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 19:22:54 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}


void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levelsArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrToFunc[4])(void) ={&Harl::debug , &Harl::info, &Harl::warning, &Harl::error};
    int  l = -1;
    for (int i = 0; i < 4;i++)
        if (level == levelsArray[i])
            l = i; 
    switch (l)
    {
        case 0:
            (this->*ptrToFunc[0])();  
            break;
        case 1:
            (this->*ptrToFunc[1])(); 
            break;
        case 2:
            (this->*ptrToFunc[2])(); 
            break;
        case 3:
            (this->*ptrToFunc[3])(); 
            break;
        default:
            break;
    }
}
