#pragma once


#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public  Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        Dog & operator=(Dog const & src);
        void makeSound(void) const;
};