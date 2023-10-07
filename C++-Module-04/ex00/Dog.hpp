/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.HPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:11 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:12 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"


class Dog : public  Animal
{
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        Dog & operator=(Dog const & src);
        void makeSound(void) const;
};