/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:49:43 by mlektaib          #+#    #+#             */
/*   Updated: 2023/08/12 15:49:44 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include<iostream>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
int main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (!std::cin.eof())
    {
        input.clear();
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (!input.empty())
            std::cout << "Invalid command\n";
    }
    return (0);
}