/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:41:25 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 21:27:51 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>


template <typename T>
void    iter(T array[], unsigned int lenth, void(*fun)(T  &)){

    for (unsigned int idx= 0; idx < lenth; idx++){
            fun(array[idx]);
    }
}
template <typename T>
void    iter(T array[], unsigned int lenth, void(*fun)(T const  &)){

    for (unsigned int idx= 0; idx < lenth; idx++){
            fun(array[idx]);
    }
}

template <typename T>
void div_2(T  &a)
{
    a /= 2;
}

#endif
