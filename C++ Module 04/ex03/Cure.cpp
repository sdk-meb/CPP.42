/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:26:37 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Cure.hpp"

Cure::Cure():AMateria("cure") {}   
Cure::Cure(const Cure& cure):AMateria("cure"){

    std::cout << "copy constructor call( CURE )" << std::endl;
    Type = cure.Type;
}
Cure& Cure::operator=(const Cure& cure){
    
    std::cout << "copy assignment operator call( CURE )" << std::endl;
    Type = cure.Type;
    return *this;
}

AMateria* Cure::clone() const{
    
    return new Cure;
}
void Cure::use(ICharacter& target){

    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure(){

    std::cout << "destroy " << Type << " ( CURE )" << std::endl;
}
