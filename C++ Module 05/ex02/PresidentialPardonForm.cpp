/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 09:33:18 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( std::string target):AForm(target, 45, 72){}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& pres):AForm(pres.getName(), 45, 72){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& pres){

    pres.getEGrade();
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    
    if (getSign())
    {
        if (getEGrade() > executor.getGrade())
            return ;
        throw "PresidentialPardonForm is sine";
    }
    throw "PresidentialPardonForm is sine";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

