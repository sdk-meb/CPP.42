/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 17:34:38 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"


Dog::Dog():Animal("Dog"){

  brain = new Brain;
  std::cout  <<" Dog are here!" << std::endl; 
}

Dog::~Dog(void){

  delete  brain;
  std::cout << "The Dog killed!" << std::endl;
}