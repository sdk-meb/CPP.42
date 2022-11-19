/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:29 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 17:32:44 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include"Animal.hpp"
# include"Brain.hpp"

class Dog: public Animal{

        Brain*  brain;
    public:
        Dog();
        ~Dog(void);
};

#endif
