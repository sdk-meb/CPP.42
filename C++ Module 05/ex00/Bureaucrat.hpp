/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 14:26:36 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include<ostream>

class Bureaucrat{

    const std::string   Name;
    short               Grade  ; 

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
};

# endif
