/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 20:03:07 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# ifndef ROBOTMYREQ_HPP
# define ROBOTMYREQ_HPP

# include"AForm.hpp"

# include <fstream>


class RobotomyRequestForm : public AForm {


    public:

        RobotomyRequestForm( std::string target="");
        RobotomyRequestForm( const RobotomyRequestForm& robot);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& root);

        void execute(Bureaucrat const & executor) const;

        
        ~RobotomyRequestForm();
};



# endif