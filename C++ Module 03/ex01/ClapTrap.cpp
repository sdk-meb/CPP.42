# include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):Name(name){

	Hit = 10;	Energy = 10;	AttackDamage = 0;

	std::cout << "I'm " << Name << ", i'm ready to attack" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& claptrap2){

	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap2;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap2){
    std::cout << "Copy assignment operator called" << std::endl;

	Hit = claptrap2.getHit();
	Energy = claptrap2.getEnergy();
	this->AttackDamage = claptrap2.getattack();
	
	return *this;
}

unsigned int ClapTrap::getHit() const{
	return Hit;
};
unsigned int ClapTrap::getattack() const{
	return AttackDamage;
};
unsigned int ClapTrap::getEnergy() const{
	return Energy;
};

void ClapTrap::attack(const std::string& target){

	if (Energy <= 0 || Hit <= 0){
		std::cout	<< Name
					<< " is out of energy!" << std::endl;
		return ;
	}
	Hit-=1;	Energy -= 1;

	std::cout	<< Name << " attacks " << target
				<< ", causing Hit & Energy points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
	amount = 0;
};

void ClapTrap::beRepaired(unsigned int amount){
	if (Energy <= 0)
		return ;

	Hit += amount;	Energy -= 1;
	std::cout	<< Name << " was repaired by " << amount << " point!"
				<< " have now " << Hit << " point of Hit." << std::endl;
};

ClapTrap::~ClapTrap(){

	std::cout << "goodbye forever "<< Name << std::endl;
};