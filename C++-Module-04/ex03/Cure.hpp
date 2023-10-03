#pragma once 

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const &Cure src);
        Cure &operator=(const &Cure src);
        AMateria* clone() const;
}