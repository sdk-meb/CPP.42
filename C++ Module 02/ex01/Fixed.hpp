/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:39 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:42 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IEEE_H_ //  IEEE Standard for Floating-Point Arithmetic (IEEE 754)
# define _IEEE_H_ //  Institute of Electrical and Electronics Engineers

# include <iostream>
# include <cmath>

class Fixed{

    int Fixe_point;
    static const int Fraction_8 = 8;

public:

    Fixed();
    Fixed( int cint);
    Fixed( float flt);
    Fixed(const Fixed& fix);// copy constructor
    Fixed& operator= (const Fixed& fix);// copy assigenment operator overload
    int  getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

# endif