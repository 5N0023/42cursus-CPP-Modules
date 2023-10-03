#pragma once


#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &src);
        Brain & operator=(Brain const &src);
        std::string getIdea(int index);
        void setIdea(std::string idea, int index);
        ~Brain();
};