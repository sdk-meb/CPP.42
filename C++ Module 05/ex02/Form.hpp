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
        bool            Signed;
        short           Grade;
        const  short    CGrade;

    public:
        Form(const std::string name="UNAMED", const short cgrade=1);

/**************    getters    **************/
        const std::string   getName()   const;
        short               getGrade()  const;
        bool                getSigned() const;
        short               getCGrade() const;

        std::ostream& operator<<( std::ostream out) const;
        void    GradeTooHighException();
        void    GradeTooLowException();

        void    beSigned(Bureaucrat& bur);
        void    signForm();
        ~Form();
};





#endif
