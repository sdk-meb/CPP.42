/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:26 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:27:04 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Ice.hpp"

Ice::Ice():AMateria("ice"){}
Ice::Ice(const Ice& ice):AMateria("ice"){
    
    std::cout << "copy constructor call( ICE )" << std::endl;
    Type = ice.Type;
}
Ice& Ice::operator=(const Ice& ice){
    
    std::cout << "copy assignment operator call( ICE )" << std::endl;
    Type = ice.Type;
    return *this;
}

AMateria* Ice::clone() const{
    
    return new Ice;
}
void Ice::use(ICharacter& target){

    std::cout   << "* shoots an ice bolt at <"
                << target.getName() << " *" << std::endl;
}

Ice::~Ice(){
    
    std::cout << "destroy " << Type << " ( ICE )" << std::endl;
}
