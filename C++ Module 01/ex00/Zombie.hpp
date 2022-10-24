#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <iostream>


class Zombie {

private:
    std::string Name;

public:
    Zombie( std::string name="UNAMED"):Name(name){};
    void    announce(void);
    void    Zombieset(std::string name){this->Name = name;};
    ~Zombie( );
};

Zombie* newZombie( std::string name);
void    randomChump( std::string name );

#endif