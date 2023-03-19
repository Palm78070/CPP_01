#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;

    i = -1;
    Zombie::getNum(N);
    Zombie* Zom_horde = new Zombie[N];
    while (++i < N)
        Zom_horde[i].getName(name);
    return (Zom_horde);
}