/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:30 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:31 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    Fixed& operator = ( const Fixed& fix );// copy assigenment operator overload
    friend std::ostream& operator<< ( std::ostream& os, const Fixed& dt );

    bool operator >  ( const Fixed& fix) const;
    bool operator >= ( const Fixed& fix) const;
    bool operator <  ( const Fixed& fix) const;
    bool operator <= ( const Fixed& fix) const;
    bool operator != ( const Fixed& fix) const;

    Fixed operator + ( const Fixed& fix) const; /************************/
    Fixed operator - ( const Fixed& fix) const; /*      ARITHMETIC      */
    Fixed operator * ( const Fixed& fix) const; /*      OPERATORS       */
    Fixed operator / ( const Fixed& fix) const; /************************/

    Fixed& operator ++ ();   // ___ pre--increment
    Fixed& operator -- ();   // ___ pre--decrement
    Fixed  operator ++ (int);    // post--increment
    Fixed  operator -- (int);    // post--decrement

    static Fixed& min( Fixed &a, Fixed &b);
    const static Fixed& min( const Fixed& a, const Fixed& b) ;
    static Fixed& max( Fixed &a, Fixed &b);
    const static Fixed& max( const Fixed& a, const Fixed& b);

    int  getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int   toInt( void ) const;

    ~Fixed();
};

# endif