#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <iostream>


class Zombie {

private:
    std::string name;

public:
    void    announce(void);
    void    Zombieset(std::string name){this->name = name;};
};

Zombie* newZombie( std::string name);
void    randomChump( std::string name );

#endif