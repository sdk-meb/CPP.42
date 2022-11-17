/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:52 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:53 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Fixed.h"

Fixed::Fixed():Fixe_piont(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix){
    std::cout << "Copy constructor called" << std::endl;

    *this  = fix;
}

Fixed& Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;

    Fixe_piont = fix.getRawBits();
    return *this;
}

int Fixed::getRawBits () const{
    std::cout << "getRawBits member function called" << std::endl;

    return Fixe_piont;
}

void    Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;

    Fixe_piont =  raw;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}