/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 20:18:47 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target):AForm(target, 137, 145){
    
    std::ofstream ofs;

    target += "_shrubbery";
    ofs.open ( target.c_str());

    if (!ofs)
        throw   "can't creaet file\n";
    ofs << "ascii tree\n";

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& shru):AForm(shru.getName(), 137, 145){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shru){

    shru.getEGrade();
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    
    if (getSign())
    {
        if (getEGrade() > executor.getGrade())
            return ;
        throw "PresidentialPardonForm is sine";
    }
    throw "PresidentialPardonForm is sine";
}
        

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
