/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:54 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:58:22 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include"iostream"

class AMateria{

    protected:
        std::string Type;
    public:
    # include "ICharacter.hpp"
        AMateria();
        AMateria(const AMateria& materia);
        AMateria(std::string const & type);
        AMateria& operator=(const AMateria& materia);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        ~AMateria();
};

    # include "ICharacter.hpp"

# endif
