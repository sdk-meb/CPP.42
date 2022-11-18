/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:19:35 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/18 17:36:04 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name) {

	setName(name);
    setHit(100);
    setEnergy(50);
	setAttackDamage(20);

    std::cout << "ScavTrap HERE" << std::endl;
}

void ScavTrap::attack(const std::string& target){

	if (Energy <= 0){
		std::cout	<< getName()
					<< " is out of energy!, ScavTrap HERE" << std::endl;
		return ;
	}
	Energy -= 1;

	std::cout	<< getName() << " attacks " << target
				<< ", causing Energy points of damage!, ScavTrap HERE" << std::endl;
}
void ScavTrap::guardGate(){
    std::cout << getName() << " is now in Gate keeper mode\n";
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap say, ";
}
