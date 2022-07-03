# include<Fixed.hpp>

/* *************************** ___CONSTRUCTRS___ *********************************/
Fixed::Fixed( const int cint){
    std::cout << "Default constructor called" << cint<< std::endl;
    fixe_point = cint << this->fraction_8;
}
Fixed::Fixed( const float cflt){
    {Fixed g;}
   this->fixe_point = (int)roundf(cflt * (1 << this->fraction_8));
}
Fixed::Fixed(const Fixed& fix){
    std::cout << "Copy constructor called" << std::endl;

    this->fixe_point = fix.getRawBits();
}

/* ********************** _COPY_ASSIGNMENT_OPERATOR_ *****************************/
Fixed& Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;

    this->fixe_point = fix.getRawBits();
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

	return this->fixe_point;
}

void Fixed::setRawBits(int pint){

	std::cout << "setRawBits called" << std::endl;
	this->fixe_point = pint;
}

int Fixed::toInt( void ) const{

    return (int)this->fixe_point >> this->fraction_8;
}

float Fixed::toFloat( void ) const{

    return (float)this->fixe_point / ( 1 << this->fraction_8 );
}

/************************** __DESTRUCTOR__ ***************************************/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
 