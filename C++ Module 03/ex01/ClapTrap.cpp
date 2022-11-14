# include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):Name(name){

	Hit = 10;	Energy = 10;	Attack = 0;

	std::cout << "I'm" << Name << ", i'm ready to attack" << std::endl;
};

void ClapTrap::attack(const std::string& target){
	if (Energy <= 0 || Hit <= 0)
		return ;
	Hit-=1;	Energy -= 1;

	std::cout << Name << " attacks " << target
	<< ", causing Hit & Energy points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){

};

void ClapTrap::beRepaired(unsigned int amount){
	if (Energy <= 0)
		return ;
	Hit += amount;	Energy -= 1;
};

ClapTrap::~ClapTrap(){

	std::cout << "goodbye forever "<< Name << std::endl;
};