/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:30:57 by mlektaib          #+#    #+#             */
/*   Updated: 2023/09/10 15:30:58 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type){}


std::string const  &Weapon::gettype()
 {
    return(this->type);
 }

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(){}

