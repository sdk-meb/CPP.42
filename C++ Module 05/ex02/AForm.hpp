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
        AForm(const std::string name="undef", short const Egrade=1, short const Sgrade=1);
        AForm(const AForm& Aform);
/**************    getters    **************/
        const std::string   getName()   const;
        short               getSGrade()  const;
        bool                getSign() const;
        short               getEGrade() const;

        std::ostream& operator<<( std::ostream out) const;
        const AForm&   operator=( const AForm& Aform ) ;
        void    GradeTooHighException();
        void    GradeTooLowException();

        virtual void    beSigned(Bureaucrat& bur) = 0;
        ~AForm();
};





#endif
