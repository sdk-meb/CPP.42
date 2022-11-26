/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:00:43 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/25 20:27:53 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Serialization.hpp"

uintptr_t serialize(Data* ptr){

    return reinterpret_cast<uintptr_t>( ptr );
}

Data* deserialize(uintptr_t raw){
    
    return reinterpret_cast< Data*> (raw);
}
