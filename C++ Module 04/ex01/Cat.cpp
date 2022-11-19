/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:22 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 17:34:44 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat():Animal("Cat"){
 
  brain = new Brain;
  std::cout << "Cat are here!" << std::endl; 
}

Cat::~Cat(void){

  delete  brain;
  std::cout << "The Cat killed!" << std::endl;
}