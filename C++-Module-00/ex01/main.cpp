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

int main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "EXIT" || std::cin.eof())
            break;
        else if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else
            std::cout << "Invalid command\n";
    }
    return (0);
}