#include "Zombie.hpp"

int main(void)
{
    Zombie* Zom = newZombie("Foo");
    Zombie* Zom2 = newZombie("Bob");
    Zom->announce();
    Zom2->announce();
    delete Zom;
    delete Zom2;
    std::cout << "\nUsing randomChump" << std::endl;
    randomChump("Jim");
    randomChump("Foo");
    return (0);
}