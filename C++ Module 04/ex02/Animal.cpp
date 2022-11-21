/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 02:28:55 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"


Animal::Animal(std::string type){

    Type = type;
    std::cout << "One Animal was here!" << std::endl;
}

Animal::Animal(const Animal& animal){
    std::cout << "Copy constructor called" << std::endl;
	
    Type = animal.getType();
}


void    Animal::setType(std::string type){
    
    Type = type;
}
std::string Animal::getType() const{
    
    return Type;
}
    
Animal::~Animal(void){

    std::cout << "destroy " << Type << " animal!" << std::endl;
}

