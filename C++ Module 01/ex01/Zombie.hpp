#ifndef _MOAR_BRAINZ_H_
# define _MOAR_BRAINZ_H_

#include <iostream>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void    announce(void);
    void    Zombieset(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

# endif