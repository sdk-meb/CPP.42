/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:11:37 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 13:44:54 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef INTERN_HPP
# define INTERN_HPP

# include"AForm.hpp"


class Intern {

    public:

        Intern( );
        int    check_name(std::string name);
        AForm* makeForm(std::string name, std::string target);
        
        ~Intern();
};



# endif
