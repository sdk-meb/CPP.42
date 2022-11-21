/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:24 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 02:15:25 by sdk-meb          ###   ########.fr       */
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


/* *******************   WRONG_CAT   ******************* */
class WrongCat: public WrongAnimal{

    public:
        WrongCat();
        void makeSound() const;
        ~WrongCat(void);
};

#endif
