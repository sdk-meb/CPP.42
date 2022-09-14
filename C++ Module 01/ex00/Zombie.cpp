#include <Zombie.hpp>

void   Zombie::announce(){

    std::cout << Zombie::name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){

    std::cout << "destroy -> " << this->name << std::endl;
}
