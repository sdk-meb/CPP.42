/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:23 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:55:02 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include"AMateria.hpp"

class Cure: public AMateria{


    public:
        Cure(/* args */);
        Cure(const Cure& cure);
        Cure& operator=(const Cure& cure);
        AMateria* Cure::clone() const;
        void use(ICharacter& target);
        ~Cure();
};





#endif
