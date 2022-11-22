/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 12:52:04 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include"Bureaucrat.hpp"


int main(){



    try{

        Bureaucrat ber("man", 1);
        Form fo;
        
        
                

    }
    catch(const std::exception& e){

        std::cerr << e.what() << '\n';
    }
    

    return 0;
}