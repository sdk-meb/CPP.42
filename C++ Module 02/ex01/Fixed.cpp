/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:44 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:45 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Fixed.hpp"

/* *************************** ___CONSTRUCTRS___ *********************************/
Fixed::Fixed(){

    std::cout << "Default constructor called" << std::endl;
    Fixe_point = 0;
}
Fixed::Fixed( const int cint){

    std::cout << "Int constructor called" << std::endl;
    Fixe_point = cint << Fraction_8;
}
Fixed::Fixed( const float cflt){

    std::cout << "Float constructor called" << std::endl;
    Fixe_point = (int)roundf(cflt * (1 << Fraction_8));
}
Fixed::Fixed(const Fixed& fix){

    std::cout << "Copy constructor called" << std::endl;
    Fixe_point = fix.getRawBits();
}

/* ********************** _COPY_ASSIGNMENT_OPERATOR_ *****************************/
Fixed& Fixed::operator=(const Fixed& fix){

    std::cout << "Copy assignment operator called" << std::endl;
    Fixe_point = fix.getRawBits();
    return *this;
}

/********************************__<<_OPERATOR__**********************************/
std::ostream& operator<<(std::ostream& os, const Fixed& cfix)
{
    os << cfix.toFloat();
    return os;
}

/* *********************** ___others_member_function__ ***************************/
int Fixed::getRawBits(void) const{

	return Fixe_point;
}

void Fixed::setRawBits(int pint){

	std::cout << "setRawBits called" << std::endl;
    Fixe_point = pint;
}

int Fixed::toInt( void ) const{

    return (int)Fixe_point >> Fraction_8;
}

float Fixed::toFloat( void ) const{

    return (float)Fixe_point / ( 1 << Fraction_8 );
}

/************************** __DESTRUCTOR__ ***************************************/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
 