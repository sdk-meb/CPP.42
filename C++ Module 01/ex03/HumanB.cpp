# include<HumanB.hpp>

void    HumanB::setWeapon(Weapon& wpn){

        this->Wpn = &wpn;
    }

HumanB::HumanB(std::string name){
        this->Name = name;
        Wpn = NULL;
    }

void    HumanB::attack(){
    
        if (!this->Wpn)
            return ;
        std::cout << Name << " attacks with their "
        << Wpn->getType() << std::endl;
    }