/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:41:15 by sdk-meb           #+#    #+#             */
/*   Updated: 2022/10/23 17:56:51 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_H_
# define _PHONEBOOK_H_

# include<iostream>
# include<string>
# include<sstream>
# include<stdlib.h>
# include<iomanip>

# include "Contact.hpp"

class PhoneBook{

private:
    Contact contact[8];

public:
    PhoneBook();
    void    add_contact(std::string name[PORT + 1], int c);
    void    repo_guide_display();
    void    print_contact(int c);
};

# endif