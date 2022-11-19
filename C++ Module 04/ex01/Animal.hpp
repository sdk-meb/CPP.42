/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:39 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 18:27:59 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include<iostream>

typedef unsigned int uint;

class Animal{
    
    protected:
        std::string Type;

    public:
        Animal(std::string type="Unknown");
        Animal(const Animal& animal);
        const Animal& operator=(const Animal& animal);
        void setType( std::string type );
        std::string getType() const;
        void makeSound() const;
        virtual ~Animal(void);
};


#endif