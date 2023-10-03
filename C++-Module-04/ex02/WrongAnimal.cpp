#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("a WrongAnimal")
{
    std::cout << "WrongAnimal Constructors called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    this->type = src.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src)
{
    this->type = src.type;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
}

std::string  WrongAnimal::getType(void) const
{
    return(type);
}