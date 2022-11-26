/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ident.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:59:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 09:00:14 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENT_HPP
# define    IDENT_HPP

# include<iostream>

class Base{

    public:

        virtual    ~Base(){};
};

Base*    generate( );
void    identify(Base* p);
void    identify(Base& p);

class A: public Base{

    public:
        ~A(){};
};
class B: public Base{

    public:
        ~B(){};
};

class C: public Base{

    public:
        ~C(){};
};


# endif
