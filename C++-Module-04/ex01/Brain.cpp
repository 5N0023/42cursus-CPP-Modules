#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructors called" << std::endl;
}
Brain::Brain(Brain const &src)
{
    *this = src;
}
Brain & Brain::operator=(Brain const &src)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}
std::string Brain::getIdea(int index)
{
    return(ideas[index]);
}
void Brain::setIdea(std::string idea, int index)
{
    ideas[index] = idea;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}