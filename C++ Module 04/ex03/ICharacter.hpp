/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:10:01 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 18:52:47 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include"AMateria.hpp"

# include"iostream"

class ICharacter
{
    public:
    protected:
        std::string Name;
        AMateria* Inventry[4];
    public:
        ICharacter();
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        virtual ~ICharacter();
};


# include"AMateria.hpp"

#endif
