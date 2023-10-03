#pragma once


#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public  Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        Cat & operator=(Cat const & src);
        void makeSound(void) const;
};