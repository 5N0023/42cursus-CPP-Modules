#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("TEST");
    z1->announce();
    randomChump("rand");
    delete z1;
    return 0;
}