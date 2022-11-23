/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 16:26:51 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Form.hpp"

Form::Form(const std::string name, short const sgrade, short const Egrade)
:Name(name),SGrade(sgrade),EGrade(Egrade) { 
    
    std::cout << "default constructor (******)" << std::endl;
    Sign = false;
}
Form::Form(const Form& form): Name( form.getName()),
                            SGrade( form.getSGrade()),
                            EGrade( form.getEGrade()){

    Sign = form.getSign();
}

/**************    getters    **************/
const std::string   Form::getName() const{

    return Name;
}
short               Form::getSGrade() const{

    return SGrade;
}
bool                Form::getSign() const{

    return Sign;
}
short               Form::getEGrade() const{

    return  EGrade;
}

const Form& Form::operator=( const Form& form ){

    Sign = form.getSign();

    return *this;
}
std::ostream& Form::operator<<( std::ostream out) const{

    return out  << Name << ", has " << EGrade << "grade required to execute " 
                << " and " << SGrade << "grade required to sign it \n";
}
void    Form::GradeTooHighException(){

    if (SGrade == 1)
        throw   std::runtime_error("the Grade has totally HIGH");
}
void    Form::GradeTooLowException(){

    if (SGrade == 150)
        throw   std::runtime_error("the Grade has totally LOW");
}

void    Form::beSigned(Bureaucrat& bur){

    if (bur.getGrade() <= SGrade)
        Sign = 1;
    else
        throw   std::runtime_error("the Grade has totally LOW");
}

Form::~Form(){

    std::cout << "default destructor (******)" << std::endl;
}

