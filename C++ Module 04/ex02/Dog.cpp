/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 10:14:22 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog():Animal("Dog"){

    std::cout  <<" Dog are here!" << std::endl;
    brain = new Brain;
}
Dog::Dog(const Dog& dog):Animal("Dog"){
    std::cout << "Copy constructor called(🐶)" << std::endl;
	
    brain = new Brain(*dog.brain);

    Type = dog.getType();
}
const Dog& Dog::operator=(const Dog& dog){

    std::cout << "Copy assignment operator called(🐶)" << std::endl;

    delete brain;

    brain = new Brain(*dog.brain);
    Type = dog.getType();
    return *this;
}

void    Dog::setBrain(Brain* const _brain){
    
    this->brain =  _brain;
}
Brain*  Dog::getBrain() const{

    return brain;
}

void Dog::makeSound() const{

        std::cout << "🐶🐶🐶 hwhw..." << std::endl;
};
Dog::~Dog(void){

    delete brain;
    std::cout << "The Dog killed!" << std::endl;
}
