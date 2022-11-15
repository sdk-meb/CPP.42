/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:17 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 12:25:35 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"FragTrap.hpp"


FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30){

    std::cout << "FragTrap HERE" << std::endl;
}

void FragTrap::highFivesGuys(){

    std::cout << "High five guys" << std::endl;
};

FragTrap::~FragTrap(){

    std::cout << "say to FcavTrap:";
}