#include "Zombie.hpp"

int main(void)
{
    int i = -1;
    int num = 0;
    Zombie  *Zom_horde = zombieHorde(5, "Bob");
    num = Zombie::zom_num;
    while (++i < num)
    {
        std::cout << i + 1 << ". ";
        Zom_horde[i].announce();
    }
    delete[] (Zom_horde);
    return (0);
}