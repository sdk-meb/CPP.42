/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:29 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 10:14:29 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include"Animal.hpp"

class Dog: public Animal{

        Brain* brain;
    public:
        Dog();
        Dog(const Dog& dog);
        const Dog& operator=(const Dog& dog);
    
        void    setBrain( Brain* const brain);
        Brain*  getBrain() const;
    
        virtual void makeSound() const;
    
        virtual ~Dog(void);
};

#endif
