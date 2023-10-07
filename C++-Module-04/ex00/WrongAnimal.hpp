/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:53:15 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:53:16 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal & operator=(WrongAnimal const &src);
        std::string  getType(void) const;
        virtual  ~WrongAnimal();
        void makeSound(void) const;
};