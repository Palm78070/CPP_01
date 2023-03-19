#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  Zom;

    Zom.getName(name);
    Zom.announce();
}