/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 19:40:22 by mes-sadk         ###   ########.fr       */
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

        std::cout << "no specific animal so no sound" << std::endl;
};
    
Animal::~Animal(void){

    std::cout << "destroy " << Type << " animal!" << std::endl;
}

/* **********************  WRONG_ANIMAL ******************** */
WrongAnimal::WrongAnimal(std::string type){

    Type = type;
    std::cout << "One WrongAnimal was here!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Wronganimal){
    std::cout << "Copy constructor called" << std::endl;
	
    Type = Wronganimal.getType();
}
const WrongAnimal& WrongAnimal::operator=(const WrongAnimal& Wronganimal){

    std::cout << "Copy assignment operator called" << std::endl;

    Type = Wronganimal.getType();
    return *this;
}

void    WrongAnimal::setType(std::string type){
    
    Type = type;
}
std::string WrongAnimal::getType() const{
    
    return Type;
}

void WrongAnimal::makeSound() const{

     std::cout << "no specific animal so no sound(Wrong)" << std::endl;
};
    
WrongAnimal::~WrongAnimal(void){

    std::cout << "destroy " << Type << " Wronganimal!" << std::endl;
}