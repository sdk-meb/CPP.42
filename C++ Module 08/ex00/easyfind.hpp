/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:09:42 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/27 14:32:08 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include<iostream>
# include<algorithm>
# include<utility>

template <typename T>
typename T::iterator    easyfind(T& one, int i){

   
    typename T::iterator it = one.begin();
 
    it = std::find(it, one.end(), i);
    if (it == one.end())
        throw std::runtime_error("No occurrence is found.");
   return  it;
};

# endif
