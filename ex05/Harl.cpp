#include "Harl.hpp"

Harl::Harl()
{

 std::cout << "Class Harl constructor is called" << std::endl;
}

Harl::~Harl()
{
 std::cout << "Class Harl destructor is called" << std::endl;
}

void Harl::_debug(void)
{
 std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
 std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
 std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
 std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
 int i = -1;
 void (Harl::*f[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
 std::string f_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
 while (++i < 4 && level != f_name[i])
  continue;
 if (i < 4)
  (this->*f[i])();
}