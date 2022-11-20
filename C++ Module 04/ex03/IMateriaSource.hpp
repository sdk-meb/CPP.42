/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:55:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:22:24 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include"AMateria.hpp"



class IMateriaSource{
    
    protected:
        AMateria* Materias[4];

    public:
        IMateriaSource(/* args */);
        IMateriaSource(const IMateriaSource& IChar);
        IMateriaSource&   operator=(const IMateriaSource& IChar);
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        virtual ~IMateriaSource() ;
};



# endif
