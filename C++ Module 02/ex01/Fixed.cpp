# include<Fixed.hpp>

/* *************************** ___CONSTRUCTRS___ *********************************/
Fixed::Fixed(const int cint){
    std::cout << "Default constructor called" << cint<< std::endl;
    fixe_piont = cint;
}
Fixed::Fixed(const float cflt){
    int i = -1;
    
    
    

    this->fixe_piont = 0;

}
Fixed::Fixed(const Fixed& fix){
    std::cout << "Copy constructor called" << std::endl;

    this->fixe_piont = fix.fixe_piont;
}

/* ********************** _COPY_ASSIGNMENT_OPERATOR_ *****************************/
Fixed& Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;

    this->fixe_piont = fix.fixe_piont;
    return *this;
}
/********************************__<<_OPERATOR__**********************************/
std::ostream& operator<<(std::ostream& os, const Fixed& cfix)
{
    bool    signe = (cfix.fixe_piont << 31 != 1);// get the bit of signe
    int     exponent = cfix.fixe_piont >> 1;// disposal the bit of signe from IEEE-754 
    int     mantissa = exponent >> 9;
    exponent <<= 23;
    mantissa <<= 9;
    /*cast if you wont with number of bits (int8_t, ...)*/

    os << (signe ? '-':'+') << exponent << '.' << mantissa;
    return os;
}

/* *********************** ___others_member_function__ ***************************/
int Fixed::toInt( void ) const{
  //  std::cout << "getRawBits member function called" << std::endl;

    return fixe_piont;
}

float Fixed::toFloat( void ) const{
  //  std::cout << "setRawBits member function called" << std::endl;

    return 0.1;
}

/************************** __DESTRUCTOR__ ***************************************/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
