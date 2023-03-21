#include "Harl.hpp"

int main(void)
{
 Harl harl;
 std::cout << "\nHarl complains debug: ";
 harl.complain("DEBUG");
 std::cout << "\nHarl complains info: ";
 harl.complain("INFO");
 std::cout << "\nHarl complains warning: ";
 harl.complain("WARNING");
 std::cout << "\nHarl complains error: ";
 harl.complain("ERROR");
 std::cout << "\n";
 return (0);
}