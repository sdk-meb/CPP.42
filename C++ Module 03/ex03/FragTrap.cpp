/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:17 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/16 12:10:01 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"FragTrap.hpp"


FragTrap::FragTrap(std::string name):ClapTrap(name){

    setHit(100);
    setEnergy(100);
	setAttackDamage(30);
    std::cout << "FragTrap HERE" << std::endl;
}

void FragTrap::highFivesGuys(){

    std::cout << "High five guys" << std::endl;
};

FragTrap::~FragTrap(){

    std::cout << " FcagTrap say, ";
}