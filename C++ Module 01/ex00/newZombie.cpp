#include <Zombie.hpp>

Zombie* newZombie( std::string name){
    Zombie* zmb;

    zmb = new Zombie;
    zmb->Zombieset(name);
    return zmb;
}