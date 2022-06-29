#ifndef _IEEE_H_
# define _IEEE_H_ // Class in Orthodox Canonical Form

# include <iostream>
# include <cmath>

class Fixed{

    int fixe_piont;
    static const int fraction_8 = 8;

public:

    Fixed(const int cint=0);
    Fixed(float flt);
    Fixed(const Fixed& fix);// copy constructor
    Fixed& operator= (const Fixed& fix);// copy assigenment operator overload
    friend std::ostream& operator<<(std::ostream& os, const Fixed& dt);
    float toFloat( void ) const;
    int   toInt( void ) const;
    ~Fixed();
};

# endif