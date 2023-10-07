/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:05 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:06 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i] =  new Dog();
        else
            animals[i] =  new Cat();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }

}