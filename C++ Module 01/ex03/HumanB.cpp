# include<HumanB.hpp>

void    HumanB::setWeapon(Weapon wpn){
    this->wpn.setType(wpn.getType());
}

void    HumanB::attack(){
    // if (this->wpn)
    //     return ;
    std::cout << this->name << " attacks with their "
    << this->wpn.getType() << std::endl;
}