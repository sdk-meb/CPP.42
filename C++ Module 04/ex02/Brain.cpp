/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 18:28:46 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Brain.hpp"

Brain::Brain(/* args */){

    std::cout << "def_con/ Brain here!" << std::endl;
}

Brain::Brain(const Brain& brain){
    
    std::cout << "Copy constructor called(BRAIN)" << std::endl;
    
    for(uint i=0; i < 100; i++)
        Ideas[i] = brain.getIdea(i);
};
Brain& Brain::operator=(const Brain& brain){
    
    std::cout << "Copy assignment operator called(Brain)" << std::endl;
    
    for(uint i=0; i < 100; i++)
        Ideas[i] = brain.getIdea(i);
    return *this;
}

std::string Brain::getIdea(uint i) const{

    if (i >= 100)
        return "";
    return Ideas[i];
}

Brain::~Brain(){

    std::cout << "No brain ==> No mind" << std::endl;
}
