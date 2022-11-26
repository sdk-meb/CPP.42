/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:17:32 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/25 23:27:50 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Serialization.hpp"

int main(){

    Data copy = {'A',\
                987654321,\
                987654321.987654321,\
                9876543210,\
                "this data will not change after de/serialize"};
    Data* m1 = new Data(copy);


    std::cout << m1 << std::endl;
    uintptr_t pres = serialize(m1);
    std::cout << pres << std::endl;
    std::cout << &pres << std::endl;

    m1 = deserialize(pres);

    std::cout << m1 << std::endl;
    std::cout <<  m1->c << std::endl;
    std::cout <<  m1->idx << std::endl;
    std::cout <<  m1->dui << std::endl;
    std::cout <<  m1->lock << std::endl;
    std::cout <<  m1->str << std::endl;
    
    return 0;
}
