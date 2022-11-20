/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:48:19 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Cure.hpp"


Cure::Cure(/* args */):AMateria("cure") {
    
}

Cure::Cure(const Cure& cure):AMateria("cure"){
    
    Type = cure.Type;
}

Cure& Cure::operator=(const Cure& cure){
    
    Type = cure.Type;
    return *this;
}
AMateria* Cure::clone() const{
    
    return new Cure;
}
void Cure::use(ICharacter& target){

    std::cout << "* heals " << target.getName() << "’s wounds *";
}

Cure::~Cure(){
    
}
