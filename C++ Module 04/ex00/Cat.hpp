/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:24 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 19:23:40 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include"Animal.hpp"

class Cat: public Animal{

    public:
        Cat();
        virtual void makeSound() const;
        ~Cat(void);
};

class WrongCat: public WrongAnimal{

    public:
        WrongCat();
        void makeSound() const;
        ~WrongCat(void);
};

#endif
