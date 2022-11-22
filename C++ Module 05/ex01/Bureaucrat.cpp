/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:52 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 13:03:48 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, short grade):Name(name){

    if (grade <= 150 && grade > 0)
        Grade = grade;
    else
        throw   std::range_error("The grade " + std::to_string(grade)
                                + " is not convenable for range [1, 150]");
}
std::ostream& Bureaucrat::operator<<( std::ostream out) const{

    return out << Name << ", bureaucrat grade " << Grade;
}

/**********************    getters    **********************/
const std::string   Bureaucrat::getName() const{

    return Name;
}
short   Bureaucrat::getGrade() const{

    return Grade;
}

void    Bureaucrat::incrementGrade(){

    if (Grade > 1)
        Grade -= 1;
    else
        throw Bureaucrat::GradeTooHighException() ;
}
void    Bureaucrat::decrementGrade(){

    if (Grade < 150)
        Grade += 1;
    else
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat::GradeTooHighException::GradeTooHighException( ):range_error("the Grade has totally HIGH"){
    
};
Bureaucrat::GradeTooLowException::GradeTooLowException( ):range_error("the Grade has totally LOW"){
    
};

void    Bureaucrat::signForm(const Form& form){

    if (form.getSign())
        std::cout << Name << " signed " <<  form.getName() << std::endl;
    else
        std::cout   << Name << " couldn't sign " << form.getName()
                    << " because his grade not yet." << std::endl;
}

