#include "Zombie.hpp"

int main(void)
{
    int i = -1;
    int num = 0;
    Zombie  *Zom_horde = zombieHorde(5, "Bob");
    if (Zom_horde == NULL)
        std::cout << "Number of Zombie is less than or equal to 0" << std::endl;
    num = Zombie::zom_num;
    while (++i < num)
    {
        std::cout << i + 1 << ". ";
        Zom_horde[i].announce();
    }
    delete[] (Zom_horde);
    return (0);
}