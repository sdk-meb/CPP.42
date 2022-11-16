/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 17:14:33 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"DiamondTrap.hpp"


DiamondTrap::DiamondTrap( std::string name){
   
    setHit(0);
    setEnergy(0);
	setAttackDamage(0);
    setName(name);
    std::cout << "DiamondTrap HERE" << std::endl;
}

void DiamondTrap::whoAmI(){

    std::cout   << "My name is: " << Name
                << ", and my ClapTrap name is: " << getName()
                << std::endl;
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap say, ";
}

