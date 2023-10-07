/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:05 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:06 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &src);
        Animal & operator=(Animal const &src);
        std::string  getType(void) const;
        virtual ~Animal();
        virtual void makeSound(void) const;
};