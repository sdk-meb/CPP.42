/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 12:45:36 by mes-sadk         ###   ########.fr       */
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
const Animal& Animal::operator=(const Animal& animal){

    std::cout << "Copy assignment operator called" << std::endl;

    Type = animal.getType();
    return *this;
}

void    Animal::setType(std::string type){
    
    Type = type;
}
std::string Animal::getType() const{
    
    return Type;
}

void Animal::makeSound() const{

    if (Type == "Dog")
        std::cout << "🐈🐈🐈 mio...."<< std::endl;
    else if (Type == "Cat")
        std::cout << "🐶🐶🐶 hwhw..." << std::endl;
};
    
Animal::~Animal(void){

    std::cout << "destroy " << Type << " animal!" << std::endl;
}