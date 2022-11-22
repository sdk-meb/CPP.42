/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 13:06:36 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"AForm.hpp"

AForm::AForm(const std::string name, short const sgrade, short const Egrade)
:Name(name),SGrade(sgrade),EGrade(Egrade) { Sign = 0; }
AForm::AForm(const AForm& Aform): Name( Aform.getName()),
                            SGrade( Aform.getSGrade()),
                            EGrade( Aform.getEGrade()){

    Sign = Aform.getSign();
}

/**************    getters    **************/
const std::string   AForm::getName() const{

    return Name;
}
short               AForm::getSGrade() const{

    return SGrade;
}
bool                AForm::getSign() const{

    return Sign;
}
short               AForm::getEGrade() const{

    return  EGrade;
}

const AForm& AForm::operator=( const AForm& Aform ){

    Sign = Aform.getSign();

    return *this;
}
std::ostream& AForm::operator<<( std::ostream out) const{

    return out  << Name << ", has " << EGrade << "grade required to execute " 
                << " and " << SGrade << "grade required to sign it \n";
}
void    AForm::GradeTooHighException(){

    if (SGrade == 1)
        throw   std::runtime_error("the Grade has totally HIGH");
}
void    AForm::GradeTooLowException(){

    if (SGrade == 150)
        throw   std::runtime_error("the Grade has totally LOW");
}

void    AForm::beSigned(Bureaucrat& bur){

    if (bur.getGrade() <= SGrade)
        Sign = 1;
    else
        throw   std::runtime_error("the Grade has totally LOW");
}

AForm::~AForm(){

}

