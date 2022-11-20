/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:09:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:00:19 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ICharacter.hpp"


ICharacter::ICharacter(){

}
std::string const & ICharacter::getName() const{

    return Name;
}
void ICharacter::equip(AMateria* m){

}
void ICharacter::unequip(int idx){

}
void ICharacter::use(int idx, ICharacter& target){

    if (idx >= 0 && idx < 4)
        Inventry[idx]->use(target);
}
ICharacter::~ICharacter(){
            
}
