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