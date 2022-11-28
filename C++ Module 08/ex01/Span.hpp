/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:09:42 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/27 22:04:38 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include<iostream>
# include<algorithm>
# include<utility>
# include<vector>

class Span{

        const uint  N;
        std::vector<uint> VInt;

    public:
        Span( uint n=0 );
        Span( const Span& span );
        Span& operator=( const Span& span);
        typedef std::vector<uint>::iterator uter;
        void    addNumber(uint ui);
        void    addNumbers( uter _pos, uter ultimate);
        uint    longestSpan( void );
        uint    shortestSpan( void );
        
        uint                getN() const;
        std::vector<uint>   getVInt() const;
        
        ~Span();

};



# endif
