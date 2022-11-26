/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:09:42 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 10:15:22 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include<iostream>

template <typename T>
void    swap(T& a, T& b){

    T c = a;
    a = b;
    b = c;
}
template <typename T>
T& min(T& a,T& b){

    return (a < b? a : b);
}
template <typename T>
T& max(T& a,T& b){

    return (a > b? a : b);
}

# endif
