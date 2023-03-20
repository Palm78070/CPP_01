#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
 this->_weapon = NULL;
 std::cout << "HumanB constructor is called" << std::endl;
}

HumanB::~HumanB(void)
{
 std::cout << "HumanB destructor is called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
 this->_weapon = &weapon;
}

void HumanB::attack(void)
{
 std::string weapon = "";
 if (this->_weapon == NULL)
  weapon = "unarmed hand";
 else
  weapon = (*this->_weapon).getType();
 std::cout << this->_name << " attacks with their " << weapon << std::endl;
}