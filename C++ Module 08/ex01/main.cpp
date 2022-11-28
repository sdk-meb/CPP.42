/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/27 22:07:46 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Span.hpp"


int main( void ) {

    std::vector<uint> v1;
    for (uint i=0; i < 5000; i++){
        v1.push_back(i);
    //    v1.push_back(i*2 + 1);
    }

    try{
        Span sp(10000);
        sp.addNumbers(v1.begin(), v1.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e){
    
        std::cerr << e.what() << '\n';
    }

    
    try{
        Span sp(10000);
        sp.addNumbers(v1.begin(), v1.end()-500);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e){

        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
