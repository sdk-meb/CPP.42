# include<Fixed.hpp>

/* *************************** ___CONSTRUCTRS___ *********************************/
Fixed::Fixed( const int cint){
    std::cout << "Default constructor called" << cint<< std::endl;
    fixe_point = cint << this->fraction_8;
}
Fixed::Fixed( const float cflt){
    
   this->fixe_point = (int)roundf(cflt * (1 << this->fraction_8));
}
Fixed::Fixed(const Fixed& fix){
    std::cout << "Copy constructor called" << std::endl;

    this->fixe_point = fix.fixe_point;
    //*this = fix;
    //this->fixe_point = fix.getRawBits();
}

/* ********************** _COPY_ASSIGNMENT_OPERATOR_ *****************************/
Fixed& Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;

    this->fixe_point = fix.fixe_point;//this->fixe_point = fix.getRawBits();
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

	std::cout << "getRawBits called" << std::endl;
	return this->fixe_point;
}

void Fixed::setRawBits(int pint){

	std::cout << "setRawBits called" << std::endl;
	this->fixe_point = pint;
}

int Fixed::toInt( void ) const{
  //  std::cout << "toInt member function called" << std::endl;

    return (int)this->fixe_point >> this->fraction_8 ;
}

float Fixed::toFloat( void ) const{
  //  std::cout << "toFloat member function called" << std::endl;
    return (float)this->fixe_point / ( 1 << this->fraction_8 );
}

/************************** __DESTRUCTOR__ ***************************************/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
 