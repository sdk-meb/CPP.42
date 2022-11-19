/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 19:29:27 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"


Dog::Dog():Animal("Dog"){

    std::cout  <<" Dog are here!" << std::endl; 
}
void Dog::makeSound() const{

        std::cout << "🐶🐶🐶 hwhw..." << std::endl;
};
Dog::~Dog(void){

  std::cout << "The Dog killed!" << std::endl;
}
