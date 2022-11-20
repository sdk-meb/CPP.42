/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:54 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 21:46:33 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include"iostream"

class     ICharacter;

class AMateria{

    protected:
        std::string Type;

    public:
        AMateria(std::string const & type="");
        AMateria(const AMateria& materia);
        AMateria& operator=(const AMateria& materia);
    
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
       
        virtual ~AMateria();
};

# include "ICharacter.hpp"

# endif
