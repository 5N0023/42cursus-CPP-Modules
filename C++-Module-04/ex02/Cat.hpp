/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:52:11 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:12 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public  Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        Cat & operator=(Cat const & src);
        void makeSound(void) const;
};