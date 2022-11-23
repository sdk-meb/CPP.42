/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 16:32:18 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target):AForm(target, 145, 137){

    std::cout << "default constructor (ShrubberyCreationForm)" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& shru):AForm(shru.getName(), 145, 137){


    std::cout << "copy constructor (ShrubberyCreationForm)" << std::endl;
    setSign(shru.getSign());
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shru){


    std::cout << "copy assignment operator (ShrubberyCreationForm)" << std::endl;
    setSign(shru.getSign()) ;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > getEGrade())
        throw LowGrade();
    
    if (getSign() == false)
        throw IsnotSigned();
    {
        std::ofstream ofs;

        ofs.open ( (getName() + "_shrubbery"));

        if (!ofs)
            throw   "can't creaet file\n";
        ofs << "\n"
            << "         &&& &&  & &&\n"
            << "      && &\\/&\\|& ()|/ @, &&\n"
            << "      &\\/(/&/&||/& /_/)_&/_&\n"
            << "   &() &\\/&|()|/&\\/ '%\" & ()\n"
            << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
            << "&&   && & &| &| /& & % ()& /&&\n"
            << " ()&_---()&\\&\\|&&-&&--%---()~\n"
            << "     &&     \\|||\n"
            << "             |||\n"
            << "             |||\n"
            << "             |||\n"
            << "       , -=-~  .-^- _\n"
            << "\n"
            << "\n"
            << "     ccee88oo\n"
            << "  C8O8O8Q8PoOb o8oo\n"
            << " dOB69QO8PdUOpugoO9bD\n"
            << "CgggbU8OU qOp qOdoUOdcb\n"
            << "    6OuU  /p u gcoUodpP\n"
            << "      \\\\//  /douUP\n"
            << "        \\\\////\n"
            << "         |||/\\n"
            << "         |||\\/\n"
            << "         |||||\n"
            << "   .....//||||\\....\n" ;
        
            ofs.close();
        }        
}
        

ShrubberyCreationForm::~ShrubberyCreationForm(){


    std::cout << "destroy (ShrubberyCreationForm)" << std::endl;
}
