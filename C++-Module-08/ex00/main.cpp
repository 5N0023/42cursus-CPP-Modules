/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:01:21 by mlektaib          #+#    #+#             */
/*   Updated: 2023/11/05 23:01:22 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(void)
{
    {
        std::vector<int> v;

        srand(time(NULL));
        for (int i = 0; i < 10; i++)
        {
            v.push_back(rand() % 10);
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
        try
        {
            std::cout << easyfind(v, 5) << std::endl;
            std::cout << easyfind(v, 3) << std::endl;
            std::cout << easyfind(v, 10) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::list<int> l;
        for (int i = 0; i < 10; i++)
        {
            l.push_back(rand() % 10);
            std::cout << l.back() << " ";
        }
        std::cout << std::endl;
        try
        {
            std::cout << easyfind(l, 5) << std::endl;
            std::cout << easyfind(l, 3) << std::endl;
            std::cout << easyfind(l, 10) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

    }
    {
        // std::vector<std::string> v;
        // v.push_back("Hello");
        // v.push_back("World");
        // v.push_back("!");

        // try
        // {
        //     std::cout << easyfind(v, 5) << std::endl;
        //     std::cout << easyfind(v, 6) << std::endl;
        //     std::cout << easyfind(v, 1) << std::endl;
        // }
        // catch(const std::exception& e)
        // {
        //     std::cerr << e.what() << std::endl;
        // }

    }
    return 0;
}