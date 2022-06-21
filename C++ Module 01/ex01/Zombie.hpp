#ifndef _MOAR_BRAINZ_H_
# define _MOAR_BRAINZ_H_

#include <iostream>

class Zombie {

private:
    std::string name;

public:
    void    announce(void);
    void    Zombieset(std::string name){this->name = name;};
};

Zombie* zombieHorde( int N, std::string name );

# endif