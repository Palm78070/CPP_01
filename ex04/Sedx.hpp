#ifndef SED_X_H
#define SED_X_H

#include <iostream>
#include <fstream>

class Sedx
{
public:
 Sedx();
 ~Sedx();
 void ft_replace(std::string &str, std::string s_find, std::string s_replace);
};

#endif