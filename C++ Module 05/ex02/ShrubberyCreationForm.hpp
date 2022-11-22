/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:55 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/22 13:32:22 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include"AForm.hpp"

# include <fstream>

class ShrubberyCreationForm : public AForm {


    public:
        ShrubberyCreationForm(std::string name="");
        ~ShrubberyCreationForm();
};



# endif