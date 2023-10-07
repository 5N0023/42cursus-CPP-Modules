/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:50 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:51 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "WrongAnimal.hpp"


class WrongCat : public  WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        ~WrongCat();
        WrongCat & operator=(WrongCat const & src);
        void makeSound(void) const;
};