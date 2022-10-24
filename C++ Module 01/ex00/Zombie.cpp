#include <Zombie.hpp>

void   Zombie::announce(){

    std::cout << Zombie::Name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){

    std::cout << "destroy -> " << this->Name << std::endl;
}
