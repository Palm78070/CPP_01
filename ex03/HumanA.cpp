#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{    
    std::cout << "HumanA constructor is called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor is called" << std::endl;
}

void    HumanA::attack(void)
{
    std::string weapon = this->_weapon.getType();
    std::cout << this->_name << " attack with their " << weapon << std::endl;
}