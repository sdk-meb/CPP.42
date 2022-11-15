/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:19:35 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 11:52:26 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name):ClapTrap(name + "(ScavTrap)") {

    Hit *= 10; Energy *= 50; AttackDamage += 20;
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
    std::cout << "say to ScavTrap:";
}
