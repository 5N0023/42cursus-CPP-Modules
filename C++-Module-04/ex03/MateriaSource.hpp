/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:20 by mlektaib          #+#    #+#             */
/*   Updated: 2023/10/07 13:51:21 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMateriaSource.hpp"
class AMateria;
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
        int count;
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & src);
        virtual ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};