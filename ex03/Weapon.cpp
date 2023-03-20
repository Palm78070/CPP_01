#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon " << this->_type << " constructor is called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon " << this->_type << " destructor is called" << std::endl;
}

std::string const &Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;

}