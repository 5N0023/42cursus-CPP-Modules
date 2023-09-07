#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        std::string const  &gettype();
        void settype(std::string type);
        ~Weapon();
};

#endif