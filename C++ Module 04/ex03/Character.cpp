/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:34:38 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:39:16 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Character.hpp"


Character::Character(std::string name):ICharacter(name){}
Character::Character(const Character& character):ICharacter(character){

    std::cout << "copy constructor call( Character )" << std::endl;
}
Character& Character::operator=(const Character& character){
    
    std::cout << "copy assignment operator call( Character )" << std::endl;
    Name = character.Name;

    for (int idx=0; idx < 4; idx++){

        if (Inventry [idx])
            delete Inventry [idx];
        
        if (character.Inventry[idx])
            Inventry [idx] = character.Inventry[idx]->clone();
        else
            Inventry [idx] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const{

    return Name;
}
void Character::equip(AMateria* mat){

    for (int idx=0; idx < 4; idx++){

        if (Inventry [idx])
            continue;
        Inventry [idx] = mat;
        break;
    }
}
void Character::unequip(int idx){
/** be careful about the address befor calling me **/
    if (idx >= 0 && idx < 4)
        Inventry[idx] = NULL;
}
void Character::use(int idx, ICharacter& target){

    if (idx >= 0 && idx < 4 && Inventry[idx] != NULL)
        Inventry[idx]->use(target);
}

Character::~Character(){

    std::cout << "destroy " << Name << " ( Character )" << std::endl;        
}

