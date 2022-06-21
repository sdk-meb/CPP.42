#include <Zombie.hpp>

void randomChump( std::string name ){
    Zombie zmb;

    zmb.Zombieset(name);
    zmb.announce();
}