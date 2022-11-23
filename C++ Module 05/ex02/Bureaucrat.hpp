/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 20:22:48 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include<ostream>

class AForm;

class Bureaucrat{

    const std::string   Name;
    short               Grade; 

    public:
        Bureaucrat(const std::string name="UNEMED", short grade=1);
        const std::string   getName() const;
        short             getGrade() const;
        std::ostream& operator<<( std::ostream out) const;

        class    GradeTooHighException : public std::range_error{

            public:
            GradeTooHighException();
        };
        class    GradeTooLowException : public std::range_error{

            public:
            GradeTooLowException();
        };

        void    incrementGrade();
        void    decrementGrade();

        void    signAForm(const AForm& Aform);
        void    executeForm(AForm const & form);
};

# include"AForm.hpp"

# endif
