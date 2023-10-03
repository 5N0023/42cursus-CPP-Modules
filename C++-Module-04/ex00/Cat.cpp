#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Constructors called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    this->type = src.type;
}

Cat & Cat::operator=(Cat const &src)
{
    this->type = src.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}