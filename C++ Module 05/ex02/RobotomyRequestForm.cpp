/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 16:32:57 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target):AForm(target, 72, 45){

    std::cout << "default constructor (RobotomyRequestForm)" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& robot):AForm(robot.getName(), 72, 45){

    std::cout << "copy constructor (RobotomyRequestForm)" << std::endl;
    setSign(robot.getSign());
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robot){

    std::cout << "copy assignement operator (RobotomyRequestForm)" << std::endl;

    setSign(robot.getSign());
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{

    if (executor.getGrade() > getEGrade())
		throw LowGrade();
    if (getSign() == false)
        throw IsnotSigned();
    srand( time(NULL) );
    if ( rand() % 2 )
        throw  std::runtime_error ("!#@%$#!$% " + getName() + " robotomy failed" );
    throw std::runtime_error ("!#@%$#!$% " + getName() + " has been robotomized successfull." );
}

RobotomyRequestForm::~RobotomyRequestForm(){

    std::cout << "destroy (RobotomyRequestForm)" << std::endl;
}

