/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 09:33:18 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include<iostream>

# include"Bureaucrat.hpp"


class Form{

        const std::string Name;
        bool            Sign;
        short const     SGrade;
        short const     EGrade;

    public:
        Form(const std::string name="undef", short const Egrade=1, short const Sgrade=1);
        Form(const Form& form);
/**************    getters    **************/
        const std::string   getName()   const;
        short               getSGrade()  const;
        bool                getSign() const;
        short               getEGrade() const;

        std::ostream& operator<<( std::ostream out) const;
        const Form&   operator=( const Form& form ) ;
        void    GradeTooHighException();
        void    GradeTooLowException();

        void    beSigned(Bureaucrat& bur);
        ~Form();
};





#endif
