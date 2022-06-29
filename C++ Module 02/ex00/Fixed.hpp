#ifndef _OCCF_H_
# define _OCCF_H_ // Class in Orthodox Canonical Form

# include <iostream>

class Fixed{

    int fixe_piont;
    static const int fraction_8 = 8;

public:

    Fixed();
    Fixed(const Fixed& fix); // copy constructor
    Fixed& operator= (const Fixed& fix); // copy assigenment operator overload
    int  getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();

};

# endif