/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:17 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:30:51 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AMateria.hpp"

AMateria::AMateria(std::string const & type){

    Type = type;
    std::cout << "default constructor call( AMATERIA )->" << Type << std::endl;
}
AMateria::AMateria(const AMateria& materia){

    std::cout << "copy constructor call( AMATERIA )" << std::endl;
    Type = materia.Type;
}
AMateria&   AMateria::operator=(const AMateria& materia){

    std::cout << "copy assignment operator call( AMATERIA )" << std::endl;
    Type = materia.Type;
    return *this;
}


void AMateria::use(ICharacter& target){

    target.getName();
}

std::string const & AMateria::getType() const{
    
    return Type;
}
AMateria::~AMateria(){

    std::cout << "destroy " << Type << " ( AMETERIA )" << std::endl;
}

