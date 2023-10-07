/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:07 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:08 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public  Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        Dog & operator=(Dog const & src);
        void makeSound(void) const;
};