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


PresidentialPardonForm::PresidentialPardonForm( std::string target):AForm(target, 25, 5){

    std::cout << "default constructor (PresidentialPardonForm)" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& pres):AForm(pres.getName(), 25, 5){

    std::cout << "copy constructor (PresidentialPardonForm)" << std::endl;
    setSign(pres.getSign());
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& pres){


    std::cout << "copy assignment operator (PresidentialPardonForm)" << std::endl;
    setSign(pres.getSign());
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    
    if (executor.getGrade() > getEGrade())
		throw LowGrade();
    if (getSign() == true)
        throw std::runtime_error( getName() + " has been pardoned by Zaphod Beeblebrox.");
    throw IsnotSigned();
}

PresidentialPardonForm::~PresidentialPardonForm(){

    std::cout << "destroy (PresidentialPardonForm)" << std::endl;
}
