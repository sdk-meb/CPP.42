/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 20:03:51 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include"AForm.hpp"

# include <fstream>


class ShrubberyCreationForm : public AForm {


    public:

        ShrubberyCreationForm( std::string target="");
        ShrubberyCreationForm( const ShrubberyCreationForm& shru);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& os);

        void execute(Bureaucrat const & executor) const;

        ~ShrubberyCreationForm();
};



# endif