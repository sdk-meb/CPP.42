/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:15:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 12:14:35 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, uint hit, uint energy, uint attdmg):Name(name){

	Hit = hit;	Energy = energy;	AttackDamage = attdmg;

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

std::string ClapTrap::getName() const{
	std::cout << "GET_NAME" << std::endl;
	return Name;
};
unsigned int ClapTrap::getHit() const{
	std::cout << "GET_HitPoint" << std::endl;
	return Hit;
};
unsigned int ClapTrap::getattack() const{
	std::cout << "GET_AttackDamage" << std::endl;
	return AttackDamage;
};
unsigned int ClapTrap::getEnergy() const{
	std::cout << "GET_EnergyPoint" << std::endl;
	return Energy;
};

void ClapTrap::attack(const std::string& target){

	if (Energy <= 0){
		std::cout	<< Name
					<< " is out of energy!" << std::endl;
		return ;
	}
	Energy -= 1;

	std::cout	<< Name << " attacks " << target
				<< ", causing Energy points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){

	if (amount > Hit)
		amount = Hit;
	Hit -= amount;

	std::cout	<< Name << " takes " << amount
				<< " points of damage!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){

	if (Energy <= 0){
		std::cout	<< Name
					<< " is out of energy!" << std::endl;
		return ;
	}

	Hit += amount;	Energy -= 1;
	std::cout	<< Name << " was repaired by " << amount << " point!"
				<< " have now " << Hit << " point of Hit." << std::endl;
};

ClapTrap::~ClapTrap(){

	std::cout << " goodbye forever " << std::endl;
};
