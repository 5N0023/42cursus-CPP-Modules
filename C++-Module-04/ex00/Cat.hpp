/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:08 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:09 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"


class Cat : public  Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        Cat & operator=(Cat const & src);
        void makeSound(void) const;
};