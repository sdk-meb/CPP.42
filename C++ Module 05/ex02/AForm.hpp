/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 09:33:18 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include<iostream>

# include"Bureaucrat.hpp"


class AForm{

        const std::string Name;
        bool            Sign;
        short const     SGrade;
        short const     EGrade;

    public:
        AForm(const std::string name="undef", short const sgrade=1, short const grade=1);
        AForm(const AForm& Aform);
/**************    getters    **************/
        const std::string   getName()   const;
        short               getSGrade() const;
        bool                getSign()   const;
        short               getEGrade() const;
        void                setSign(bool sign);
        std::ostream& operator<<( std::ostream out) const;
        const AForm&   operator=( const AForm& Aform ) ;
        void    GradeTooHighException();
        void    GradeTooLowException();

        class GradeTooHighException : public std::exception {
	public:
		const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what(void) const throw();
	};
	class IsnotSigned : public std::exception {
	public:
		const char* what(void) const throw();
	};
	class LowGrade : public std::exception {
	public:
		const char* what(void) const throw();
	};

        void    beSigned(Bureaucrat& bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm();
};


#endif
