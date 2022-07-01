#ifndef _IEEE_H_ //  IEEE Standard for Floating-Point Arithmetic (IEEE 754)
# define _IEEE_H_ //  Institute of Electrical and Electronics Engineers

# include <iostream>
# include <cmath>

class Fixed{

    int fixe_point;
    static const int fraction_8 = 8;

public:

    Fixed( int cint=0);
    Fixed( float flt);
    Fixed(const Fixed& fix);// copy constructor
    Fixed& operator= (const Fixed& fix);// copy assigenment operator overload
    friend std::ostream& operator<<(std::ostream& os, const Fixed& dt);
    int  getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;
    ~Fixed();
};

# endif