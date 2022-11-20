/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:24 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 10:37:16 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include"Animal.hpp"

class Cat: public Animal{

        Brain* brain;
    public:
        Cat();
        Cat(const Cat& cat);
        const Cat& operator=(const Cat& cat);
        void    setBrain( Brain* const brain);
        Brain*  getBrain() const;
        virtual void makeSound() const;
        virtual ~Cat(void);
};

#endif
