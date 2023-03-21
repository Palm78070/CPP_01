#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
  std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!\n\n";
}

void Harl::_info(void)
{
  std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::_warning(void)
{
  std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::_error(void)
{
  std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
  int i = -1;
  std::string f_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  while (++i < 4 && level != f_name[i])
    continue;
  switch (i)
  {
  case 0:
    this->_debug();
  case 1:
    this->_info();
  case 2:
    this->_warning();
  case 3:
    this->_error();
    break;
  default:
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
  }
}