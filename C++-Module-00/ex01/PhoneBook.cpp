/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:49:35 by mlektaib          #+#    #+#             */
/*   Updated: 2023/08/13 14:13:55 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool check_number(std::string number)
{
    int i;

    i = 0;
    while (number[i])
    {
        if (!isdigit(number[i]))
            return (false);
        i++;
    }
    return (true);
}

void PhoneBook::add()
{
    std::string input;
    static int i;
    input = "";
    while(input.length() == 0)
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    PhoneBook::contacts[i].set_first_name(input);
    input = "";
    while(input.length() == 0)
    {
        std::cout << "Enter last name: ";
        input = "";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    PhoneBook::contacts[i].set_last_name(input);
    input = "";
    while(input.length() == 0)
    {
        std::cout << "Enter nickname: ";
        input = "";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    PhoneBook::contacts[i].set_nickname(input);
    input = "";
    while(input.length() == 0 || !check_number(input))
    {
        std::cout << "Enter phone number: ";
        input = "";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    PhoneBook::contacts[i].set_phone_number(input);
    input = "";
    while (input.length() == 0)
    {
        std::cout << "Enter darkest secret: ";
        input = "";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    PhoneBook::contacts[i].set_darkest_secret(input);
    i++;
    if(i > 7)
        i = 0;
}

void PhoneBook::print(int index)
{
    std::cout << "First name: " << PhoneBook::contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << PhoneBook::contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << PhoneBook::contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << PhoneBook::contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << PhoneBook::contacts[index].get_darkest_secret() << std::endl;
}

void PhoneBook::search()
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i << "|";
        if (PhoneBook::contacts[i].get_first_name().length() > 10)
            std::cout << PhoneBook::contacts[i].get_first_name().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << PhoneBook::contacts[i].get_first_name() << "|";
        if (PhoneBook::contacts[i].get_last_name().length() > 10)
            std::cout << PhoneBook::contacts[i].get_last_name().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << PhoneBook::contacts[i].get_last_name() << "|";
        if (PhoneBook::contacts[i].get_nickname().length() > 10)
            std::cout << PhoneBook::contacts[i].get_nickname().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << PhoneBook::contacts[i].get_nickname() << "|";
        std::cout << std::endl;
    }
    std::string input;
    int index;
    input = "";
    while(input.length() == 0 || !check_number(input))
    {
        std::cout << "Enter index: ";
        input = "";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
    }
    index = atoi(input.c_str());
    if (index >= 0 && index < 8)
        PhoneBook::print(index);
    else
        std::cout << "Invalid index" << std::endl;
}