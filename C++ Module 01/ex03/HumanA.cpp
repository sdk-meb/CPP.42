# include<HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& wpn){

        this->Name = name;
        this->Wpn = &wpn;
    }

void    HumanA::attack(){

        std::cout << Name << " attacks with their "
        << Wpn->getType() << std::endl;
    }