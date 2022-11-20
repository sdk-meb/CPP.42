/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:26 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:49:03 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Ice.hpp"

Ice::Ice():AMateria("ice"){
    
}

Ice::Ice(const Ice& ice):AMateria("ice"){
    
    Type = ice.Type;
}
Ice& Ice::operator=(const Ice& ice){
    
    Type = ice.Type;
    return *this;
}
AMateria* Ice::clone() const{
    
    return new Ice;
}
void Ice::use(ICharacter& target){

    std::cout   << "* shoots an ice bolt at <"
                << target.getName() << " *";
}

Ice::~Ice(){
    
}
