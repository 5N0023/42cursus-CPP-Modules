#include "Animal.hpp"

Animal::Animal():type("a Animal")
{
    std::cout << "Animal Constructors called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    this->type = src.type;
}

Animal & Animal::operator=(Animal const &src)
{
    this->type = src.type;
    return(*this);
}

Animal::~Animal()
{
     std::cout << "Animal destructor called" << std::endl;
}

std::string  Animal::getType(void) const
{
    return(type);
}