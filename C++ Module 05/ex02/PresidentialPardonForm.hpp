/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 09:33:18 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

# include"AForm.hpp"

# include <fstream>


class PresidentialPardonForm : public AForm {


    public:

        PresidentialPardonForm( std::string target="");
        PresidentialPardonForm( const PresidentialPardonForm& pres);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& os);

        void execute(Bureaucrat const & executor) const;

        
        ~PresidentialPardonForm();
};



# endif