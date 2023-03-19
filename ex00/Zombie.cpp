#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "";
    std::cout << "Class Zombie is constructed" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Class Zombie is destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    if (this->_name == "Foo")
        std::cout << this->_name;
    else
        std::cout << "<" << this->_name << ">";
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::getName(std::string name)
{
    this->_name = name;
}