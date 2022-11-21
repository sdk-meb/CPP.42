/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 17:48:38 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Form.hpp"

Form::Form(const std::string name, const short cgrade):Name(name),CGrade(cgrade) {}

/**************    getters    **************/
const std::string   Form::getName() const{

    return Name;
}
short               Form::getGrade() const{

    return Grade;
}
bool                Form::getSigned() const{

    return Signed;
}
short               Form::getCGrade() const{

    return  CGrade;
}

std::ostream& Form::operator<<( std::ostream out) const{

    return out << Name << ", Form grade " << Grade;
}
void    Form::GradeTooHighException(){

    if (Grade > 1)
        Grade -= 1;
    else
        throw   std::runtime_error("the Grade has totally HIGH");
}
void    Form::GradeTooLowException(){

    if (Grade < 150)
        Grade += 1;
    else
        throw   std::runtime_error("the Grade has totally LOW");
}

void    Form::beSigned(Bureaucrat& bur){

    if (bur.getGrade() <= Grade)
        Signed = 1;
    GradeTooLowException();
}
void    Form::signForm(){

    if (Signed)
        std::cout << Name << " signed " << this << std::endl;
    else
        std::cout << Name << " couldn't sign " << this << " because " << "reason" << std::endl;
}

Form::~Form(){

}

