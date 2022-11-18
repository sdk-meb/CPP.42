/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:17 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/18 17:35:05 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"FragTrap.hpp"


FragTrap::FragTrap(std::string name){

    setName(name);
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