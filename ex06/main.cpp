#include "Harl.hpp"

int main(int argc, char **argv)
{
 if (argc != 2)
 {
  std::cout << "argument is not 2: ./harlFilter \"complaining level\"" << std::endl;
  exit(0);
 }
 Harl harl;
 harl.complain(argv[1]);
 return (0);
}