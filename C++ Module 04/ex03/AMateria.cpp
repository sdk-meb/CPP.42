/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:17 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:56:29 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AMateria.hpp"

AMateria::AMateria(){

}

AMateria::AMateria(const AMateria& materia){
    
    Type = materia.Type;
}

AMateria::AMateria(std::string const & type){
    Type = type;
}

AMateria&   AMateria::operator=(const AMateria& materia){

    Type = materia.Type;
    return *this;
}

void AMateria::use(ICharacter& target){
    std::cout << target.getName() << std::endl;
}
std::string const & AMateria::getType() const{
    
    return Type;
}
AMateria::~AMateria(){
    
}

