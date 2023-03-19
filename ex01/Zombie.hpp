#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        void    getName(std::string name);
        static void    getNum(int num);
        static int zom_num;
};

Zombie* zombieHorde(int N, std::string name);

#endif