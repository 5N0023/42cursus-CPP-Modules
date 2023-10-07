/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:22 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:23 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource Default constructor called" << std::endl;
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->materia[i])
            delete this->materia[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "MateriaSource Copy constructor called" << std::endl;
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    if (this != &src)
    {
        this->count = src.count;
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
                delete this->materia[i];
            this->materia[i] = src.materia[i]->clone();
        }
    }
    return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (this->count < 4)
    {
        this->materia[this->count] = m;
        this->count++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] && this->materia[i]->getType() == type)
            return(this->materia[i]->clone());
    }
    return(NULL);
}
