#include <Zombie.hpp>

void Zombie::randomChump( std::string name ){
    Zombie zmb;

    zmb.Zombieset(name);
    zmb.announce();
}