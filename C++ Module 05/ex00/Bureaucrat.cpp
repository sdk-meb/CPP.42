/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:52 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 11:29:35 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, short grade):Name(name){

    if (grade < 150 && grade > 0)
        Grade = grade;
    else
        Grade = 1;
}
std::ostream& Bureaucrat::operator<<( std::ostream out) const{

    return out << Name << ", bureaucrat grade " << Grade;
}
const std::string   Bureaucrat::getName() const{

    return Name;
}
short   Bureaucrat::getGrade() const{

    return Grade;
}
void    Bureaucrat::GradeTooHighException(){

    if (Grade > 1)
        Grade -= 1;
    else
        throw   std::runtime_error("the Grade has totally HIGH");
}
void    Bureaucrat::GradeTooLowException(){

    if (Grade < 150)
        Grade += 1;
    else
        throw   std::runtime_error("the Grade has totally LOW");
}
