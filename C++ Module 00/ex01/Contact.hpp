/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:41:10 by sdk-meb           #+#    #+#             */
/*   Updated: 2022/09/29 09:17:47 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_H_
# define _CONTACT_H_

# include<iostream>

enum INFO{FRST, LST, NUM, DUP, PORT};

class Contact{

private:
    std::string f_name;
    std::string l_name;
    std::string phone_num;
    std::string nickname;
    std::string darkest_secret;

public:
    void set_fname(std::string first_name);
    void set_lname(std::string last_name);
    void set_num(std::string num);
    void set_nickname(std::string dub);
    void set_secret(std::string portray);
    std::string get_info(int info);

};

# endif