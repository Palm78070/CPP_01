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
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif