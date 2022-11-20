/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:23 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 18:50:35 by sdk-meb          ###   ########.fr       */
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
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};





#endif
