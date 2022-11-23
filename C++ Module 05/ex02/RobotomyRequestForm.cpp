/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 20:19:23 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target):AForm(target, 45, 72){}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& robot):AForm(robot.getName(), 45, 72){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robot){

    robot.getEGrade();
    return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
    if (getSign())
    {
        if (getEGrade() > executor.getGrade())
            return ;
        throw "PresidentialPardonForm is sine";
    }
    throw "PresidentialPardonForm is sine";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

