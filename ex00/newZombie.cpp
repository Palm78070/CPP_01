#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *Zom;

    Zom = new Zombie;
    (*Zom).getName(name);
    return (Zom);
}