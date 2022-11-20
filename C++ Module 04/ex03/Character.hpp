/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:34:41 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 18:25:36 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP


# include"ICharacter.hpp"

class Character:public ICharacter{

    public:
        Character(const Character& character);
        Character(std::string name="");
        Character& operator=(const Character& character);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, Character& target);
        virtual ~Character();
};

#endif
