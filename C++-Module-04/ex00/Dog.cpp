#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Constructors called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
}

Dog & Dog::operator=(Dog const &src)
{
    this->type = src.type;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}