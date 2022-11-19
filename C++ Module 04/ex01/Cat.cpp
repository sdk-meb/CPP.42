/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:22 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 20:37:28 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat():Animal("Cat"){

    brain = new Brain;
    std::cout << "Cat are here!" << std::endl; 
}

Cat::Cat(const Cat& cat){
    std::cout << "Copy constructor called(🐈)" << std::endl;
	
    Type = cat.getType();
}
const Cat& Cat::operator=(const Cat& cat){

    std::cout << "Copy assignment operator called(🐈)" << std::endl;

    delete brain;
    brain = cat.getBrain();
    Type = cat.getType();
    return *this;
}

void    Cat::setBrain(Brain* const _brain){
    
    this->brain =  _brain;
}
Brain*  Cat::getBrain() const{

    return brain;
}

void Cat::makeSound() const{

        std::cout << "🐈🐈🐈 mio...."<< std::endl;
}

Cat::~Cat(void){

    delete brain;
    std::cout << "The Cat killed!" << std::endl;
}
