/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:09:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:41:06 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ICharacter.hpp"


ICharacter::ICharacter(std::string name){
    
    Name = name;
    Inventry [0] = NULL;
     Inventry [1] = NULL;
      Inventry [2] = NULL;
       Inventry [3] = NULL;
    std::cout << "default constructor call( IChARACTER )->" << Name << std::endl;

}
ICharacter::ICharacter(const ICharacter& IChar){

    std::cout << "copy constructor call( ICharacter )" << std::endl;
    Name = IChar.getName();
    for (int idx=0; idx < 4; idx++){

        if (IChar.Inventry[idx])
            Inventry [idx] = IChar.Inventry[idx]->clone();
        else
            Inventry [idx] = NULL;
    }
}
ICharacter&   ICharacter::operator=(const ICharacter& IChar){

    std::cout << "copy assignment operator call( ICharacter )" << std::endl;
    Name = IChar.Name;
    for (int idx=0; idx < 4; idx++){

        if (Inventry [idx])
            delete Inventry [idx];

        if (IChar.Inventry[idx])
            Inventry [idx] = IChar.Inventry[idx]->clone();
        else
            Inventry [idx] = NULL;
    }
    return *this;
}

ICharacter::~ICharacter(){

    for (int idx=0; idx < 4; idx++){

        if (Inventry [idx])
            delete Inventry[idx];
    }
    std::cout << "destroy " << Name << " ( ICHARACTER )" << std::endl;
}
