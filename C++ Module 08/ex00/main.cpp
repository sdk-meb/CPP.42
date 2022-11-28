/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/27 16:12:24 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"easyfind.hpp"

#include <vector>
#include <list>

int main( void ) {

    try
    {
        std::vector<int> v;
        std::vector<int>::iterator it ;
        for (int i = 0; i< 10; i+=1)
            v.push_back(i%3);
        try
        {
            int i= 0;
            while (1){
                i++;
                it = easyfind(v, 2) ;;
                std::cout << i << " is find, " << "\n"; 
                *it = 0;
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::list<int> l;
        std::list<int>::iterator it;
        for (int i = 0; i< 10; i+=1)
            l.push_back(i%3);
        try
        {
            int i= 0;
            while (1){
                i++;
                it = easyfind(l, 2) ;;
                std::cout << i << " is find, " << "\n"; 
                *it = 0;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
