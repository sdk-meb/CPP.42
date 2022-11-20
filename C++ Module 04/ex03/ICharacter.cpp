/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:09:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:13:11 by mes-sadk         ###   ########.fr       */
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
    if (IChar.Inventry[0])
        Inventry [0] = IChar.Inventry[0]->clone();
    else
        Inventry [0] = NULL;
    if (IChar.Inventry[1])
        Inventry [1] = IChar.Inventry[1]->clone();
    else
        Inventry [1] = NULL;
    if (IChar.Inventry[0])
        Inventry [2] = IChar.Inventry[2]->clone();
    else
        Inventry [2] = NULL;
    if (IChar.Inventry[0])
        Inventry [3] = IChar.Inventry[3]->clone();
    else
        Inventry [3] = NULL;
}
ICharacter&   ICharacter::operator=(const ICharacter& IChar){

    std::cout << "copy assignment operator call( ICharacter )" << std::endl;
    Name = IChar.Name;
    if (Inventry [0])
        delete Inventry [0];
    if (Inventry [1])
        delete Inventry [1];
    if (Inventry [2])
        delete Inventry [2];
    if (Inventry [3])
        delete Inventry [3];
    if (IChar.Inventry[0])
        Inventry [0] = IChar.Inventry[0]->clone();
    else
        Inventry [0] = NULL;
        if (IChar.Inventry[1])
        Inventry [1] = IChar.Inventry[1]->clone();
    else
        Inventry [1] = NULL;
    if (IChar.Inventry[0])
        Inventry [2] = IChar.Inventry[2]->clone();
    else
        Inventry [2] = NULL;
    if (IChar.Inventry[0])
        Inventry [3] = IChar.Inventry[3]->clone();
    else
        Inventry [3] = NULL;
    return *this;
}

ICharacter::~ICharacter(){

    std::cout << "destroy " << Name << " ( ICHARACTER )" << std::endl;
}
