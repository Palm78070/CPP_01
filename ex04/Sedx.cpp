#include "Sedx.hpp"

Sedx::Sedx()
{
 std::cout << "Sedx constructor is called" << std::endl;
}

Sedx::~Sedx()
{
 std::cout << "Sedx destructor is called" << std::endl;
}

void Sedx::ft_replace(std::string &str, std::string s_find, std::string s_replace)
{
 int pos = 0;
 pos = str.find(s_find);
 while (pos >= 0)
 {
  str.erase(pos, s_find.length());
  str.insert(pos, s_replace);
  pos = str.find(s_find);
 }
}