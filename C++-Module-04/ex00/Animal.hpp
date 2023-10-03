#pragma once

#include <iostream>


class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &src);
        Animal & operator=(Animal const &src);
        std::string  getType(void) const;
        virtual ~Animal();
        virtual void makeSound(void) const;
};