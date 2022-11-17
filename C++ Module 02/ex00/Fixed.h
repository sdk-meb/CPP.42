/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:50 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/17 10:52:51 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _OCCF_H_
# define _OCCF_H_ // Class in Orthodox Canonical Form

# include <iostream>

class Fixed{

    int Fixe_piont;
    static const int Fraction_8 = 8;

public:

    Fixed();
    Fixed(const Fixed& fix); // copy constructor
    Fixed& operator= (const Fixed& fix); // copy assigenment operator overload
    int  getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();

};

# endif