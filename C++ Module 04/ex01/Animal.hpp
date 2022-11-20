/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:39 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 23:11:40 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include<iostream>

#if __linux
    typedef unsigned int uint;
#endif

# include"Brain.hpp"

class Animal{
    
    protected:
        std::string Type;

    public:
        Animal(std::string type="Unknown");
        Animal(const Animal& animal);
        virtual const Animal& operator=(const Animal& animal);
        void setType( std::string type );
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal(void);
};

#endif
