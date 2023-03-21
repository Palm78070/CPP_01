#include "Sedx.hpp"

int main(int argc, char **argv)
{
 if (argc != 4)
 {
  std::cout << "argument is not 3: ./sedx <filename> s1 s2" << std::endl;
  exit(0);
 }
 std::ifstream ifs(argv[1]);
 std::ofstream ofs("newfile.txt");
 if (!ifs.is_open() || !ofs.is_open())
 {
  std::cerr << "Failed to open file " << argv[1];
  std::cerr << "\n";
  exit(1);
 }
 std::string str = "";
 Sedx sedx;
 while (std::getline(ifs, str))
 {
  sedx.ft_replace(str, argv[2], argv[3]);
  ofs << str << std::endl;
 }
 ifs.close();
 ofs.close();
 return (0);
}