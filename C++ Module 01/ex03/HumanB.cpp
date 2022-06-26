# include<HumanB.hpp>

void    HumanB::setWeapon(Weapon& wpn){
    this->wpn = &wpn;
}

void    HumanB::attack(){
    if (!this->wpn)
        return ;
    std::cout << name << " attacks with their "
    << wpn->getType() << std::endl;
}