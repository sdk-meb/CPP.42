/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:11:39 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 13:44:27 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Intern.hpp"


Intern::Intern(){}

int Intern::check_name(std::string name){

    std::string lvls[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i = 3;

    do{
        switch (name.compare( lvls[i] ))
        {
            case true:
                return (i);
            default:
                break;
        }

    }   while (i--);

    return (-1);
}


AForm* Intern::makeForm(std::string name, std::string target){

    switch (check_name( name ))
    {
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            break;
    }
    std::cerr << name << ": This name of form is non-existent" << std::endl;
    return NULL;
}

Intern::~Intern(){

}