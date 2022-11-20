/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:55:53 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:29:36 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include"IMateriaSource.hpp"
# include"Cure.hpp"
# include"Ice.hpp"


class MateriaSource: public IMateriaSource{

    public:
        MateriaSource(/* args */);
        MateriaSource(const MateriaSource& IChar);
        MateriaSource&   operator=(const MateriaSource& IChar);
        virtual void learnMateria(AMateria*) ;
        virtual AMateria* createMateria(std::string const & type) ;
        ~MateriaSource();
};



# endif
