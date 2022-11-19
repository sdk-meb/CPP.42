/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:39 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 19:26:35 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include<iostream>

class Animal{
    
    protected:
        std::string Type;

    public:
        Animal(std::string type="Unknown");
        Animal(const Animal& animal);
        const Animal& operator=(const Animal& animal);
        void setType( std::string type );
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal(void);
};

class WrongAnimal{
    
    protected:
        std::string Type;

    public:
        WrongAnimal(std::string type="Unknown");
        WrongAnimal(const WrongAnimal& animal);
        const WrongAnimal& operator=(const WrongAnimal& animal);
        void setType( std::string type );
        std::string getType() const;
        void makeSound() const;
        ~WrongAnimal(void);
};


#endif
