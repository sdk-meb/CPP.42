/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:54 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 18:53:14 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include"iostream"

class     ICharacter;


class AMateria{

    public:
    protected:
        std::string Type;
    public:
        AMateria();
        AMateria(const AMateria& materia);
        AMateria(std::string const & type);
        AMateria& operator=(const AMateria& materia);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};

# include "ICharacter.hpp"

# endif
