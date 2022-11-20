/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:43:29 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 12:54:56 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include"AMateria.hpp"

class Ice: public AMateria{


    public:
        Ice(/* args */);
        Ice(const Ice& ice);
        Ice& operator=(const Ice& ice);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
        ~Ice();
};


#endif
