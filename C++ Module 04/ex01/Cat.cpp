/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:22 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 23:33:32 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat():Animal("Cat"){

    std::cout << "Cat are here!" << std::endl;
    brain = new Brain;
}

Cat::Cat(const Cat& cat):Animal("Cat"){
    std::cout << "Copy constructor called(🐈)" << std::endl;
	
    brain = new Brain(*(cat.brain));

    Type = cat.getType();
}
const Cat& Cat::operator=(const Cat& cat){

    std::cout << "Copy assignment operator called(🐈)" << std::endl;

    delete brain;
    brain = new Brain(*(cat.brain));

    Type = cat.getType();
    return *this;
}

void    Cat::setBrain(Brain* const _brain){
    
    this->brain = _brain;
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
