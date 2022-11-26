/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:59:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/25 23:28:19 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define    SERIALIZATION_HPP

# include<iostream>

typedef struct DATA{

    public:

    char        c;
    int         idx;
    double      dui;
    uintptr_t   lock;
    std::string str;

} Data;


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);



# endif
