#include <Zombie.hpp>

Zombie::Zombie(){

}

void   Zombie::announce(){
    std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){

   std::cout << "destroy -> " << this->name << std::endl;
}

void    Zombie::Zombieset(std::string name){

    this->name = name;
}