# include<HumanB.hpp>

void    HumanB::setWeapon(Weapon& wpn){

        this->wpn = &wpn;
    }

HumanB::HumanB(std::string name){
        this->name = name;
        wpn = NULL;
    }

void    HumanB::attack(){
    
        if (!this->wpn)
            return ;
        std::cout << name << " attacks with their "
        << wpn->getType() << std::endl;
    }