#include "Zombie.hpp"

void   Zombie::announce(){

    std::cout << Zombie::Name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string name){

    Zombieset(name);
}

void    Zombie::Zombieset(std::string name){

    this->Name = name;
}

Zombie::~Zombie(){

    std::cout << "destroy -> " << this->Name << std::endl;
}
