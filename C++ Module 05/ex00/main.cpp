/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 11:36:53 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include"Bureaucrat.hpp"


int main(){


        Bureaucrat ber("man", 0);

        Bureaucrat bere("man", 0);

    try{

        ber.GradeTooHighException();
        ber.GradeTooHighException();
        ber.GradeTooHighException();
        ber.GradeTooHighException();
        ber.GradeTooLowException();

    }
    catch(const std::exception& e){

        std::cerr << e.what() << '\n';
    }
    

    return 0;
}