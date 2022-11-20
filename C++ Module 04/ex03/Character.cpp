/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:34:38 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:27:47 by mes-sadk         ###   ########.fr       */
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
    if (Inventry [0])
        delete Inventry [0];
    if (Inventry [1])
        delete Inventry [1];
    if (Inventry [2])
        delete Inventry [2];
    if (Inventry [3])
        delete Inventry [3];
    if (character.Inventry[0])
        Inventry [0] = character.Inventry[0]->clone();
    else
        Inventry [0] = NULL;
        if (character.Inventry[1])
        Inventry [1] = character.Inventry[1]->clone();
    else
        Inventry [1] = NULL;
    if (character.Inventry[0])
        Inventry [2] = character.Inventry[2]->clone();
    else
        Inventry [2] = NULL;
    if (character.Inventry[0])
        Inventry [3] = character.Inventry[3]->clone();
    else
        Inventry [3] = NULL;

    return *this;
}

std::string const & Character::getName() const{

    return Name;
}
void Character::equip(AMateria* mat){

    if (Inventry [0] == NULL)
        Inventry [0] = mat;
    else if (Inventry [1] == NULL)
        Inventry [1] = mat;
    else if (Inventry [2] == NULL)
        Inventry [2] = mat;
    else if (Inventry [3] == NULL)
        Inventry [3] = mat;
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
            
}

