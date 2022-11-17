/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:28 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Fixed.hpp"

/**************************___CONSTRUCTRS__overloading___*********************************|
|*****************************************************************************************/
Fixed::Fixed( const int cint){
    fixe_point = cint << this->fraction_8;
}
Fixed::Fixed( const float cflt){
    {Fixed g;}
   this->fixe_point = (int)roundf(cflt * (1 << this->fraction_8));
}
Fixed::Fixed(const Fixed& fix){
    this->fixe_point = fix.getRawBits();
}

/***************************** _ASSIGNMENT_OPERATOR__ _***********************************|
|*****************************************************************************************/
Fixed& Fixed::operator = (const Fixed& fix){
    this->fixe_point = fix.getRawBits();
    return *this;
}

/****************************  __<<_OPERATOR___  *****************************************|
|*****************************************************************************************/
std::ostream& operator << (std::ostream& os, const Fixed& cfix){
    os << cfix.toFloat();
    return os;
}

/*************************____<IN/DE>crement_operators___*********************************|
|*****************************************************************************************/
Fixed Fixed::operator -- (int){          /*    pre__<IN/DE>crement   [ Built-in prefix operators ]  */
    Fixed& pre(*this);

    this->fixe_point = this->fixe_point - 1;
    return pre;
}
Fixed Fixed::operator ++ (int){
    Fixed pre(*this);

    this->fixe_point = this->fixe_point + 1;
    return pre;
}
Fixed& Fixed::operator ++ (){        /*    post__<IN/DE>crement  [ Built-in postfix operators ]  */
    this->fixe_point = this->fixe_point + 1;
    return *this;
}
Fixed& Fixed::operator -- (){
    this->fixe_point = this->fixe_point - 1;
    return *this;
}

/*************************___Comparison operators____*************************************|
|*****************************************************************************************/
bool Fixed::operator > (const Fixed& fix)  const{
    return this->fixe_point > fix.fixe_point ? true : false;
}
bool Fixed::operator < (const Fixed& fix) const{
    return this->fixe_point < fix.fixe_point ? true : false;
}
bool Fixed::operator >= (const Fixed& fix) const{
    return this->fixe_point >= fix.fixe_point ? true : false;
}
bool Fixed::operator <= (const Fixed& fix) const{
    return this->fixe_point <= fix.fixe_point ? true : false;
}
bool Fixed::operator != (const Fixed& fix) const{
    return this->fixe_point != fix.fixe_point ? true : false;

/*************************__ARITHMETIC_OPERATORS_____*********************************|
|*****************************************************************************************/
}
Fixed Fixed::operator + (const Fixed& fix) const{ /* [ addition ] */
    return this->fixe_point + fix.fixe_point;
}
Fixed Fixed::operator - (const Fixed& fix) const{ /* [ subtraction  ] */
    return this->fixe_point - fix.fixe_point;
}
Fixed Fixed::operator * (const Fixed& fix) const{ /* [ multiplication  ] */
    return this->toFloat() * fix.toFloat();
}
Fixed Fixed::operator / (const Fixed& fix) const{ /* [ division ] */
    return this->toFloat() / fix.toFloat();
}

/************************** ___others_member_function__***********************************|
|*****************************************************************************************/
int Fixed::getRawBits(void) const{
	return this->fixe_point;
}
void Fixed::setRawBits(int pint){
	this->fixe_point = pint;
}

int Fixed::toInt( void ) const{
    return (int)this->fixe_point >> this->fraction_8;
}
float Fixed::toFloat( void ) const{
    return (float)this->fixe_point / ( 1 << this->fraction_8 );
}

Fixed& Fixed::min( Fixed &a, Fixed &b){
    bool o = a.fixe_point > b.fixe_point;
    return  (o ? b : a);
}
const Fixed& Fixed::min( const Fixed& a, const Fixed& b){
    bool o = a.fixe_point > b.fixe_point;
    return  (o ? b : a);
}
Fixed& Fixed::max( Fixed &a, Fixed &b){
    bool o = a.fixe_point < b.fixe_point;
    return  (o ? b : a);
}
const Fixed& Fixed::max( const Fixed& a, const Fixed& b){
    bool o = a.fixe_point < b.fixe_point;
    return  (o ? b : a);
}

/****************************__ __DESTRUCTOR__ ___****************************************|
|*****************************************************************************************/
Fixed::~Fixed(){
   // std::cout << "Destructor called" << std::endl;
}
