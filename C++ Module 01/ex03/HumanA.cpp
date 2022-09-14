# include<HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& wpn){

        this->name = name;
        this->wpn = &wpn;
    }

void    HumanA::attack(){

        std::cout << name << " attacks with their "
        << wpn->getType() << std::endl;
    }