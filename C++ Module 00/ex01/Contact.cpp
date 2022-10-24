/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:41:04 by sdk-meb           #+#    #+#             */
/*   Updated: 2022/10/23 19:34:05 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

/***************************** SET THE CONTACT'S INFORMATION ***************************************/
void Contact::set_fname(std::string first_name){

	this->f_name = first_name;
}

void Contact::set_lname(std::string last_name){

	this->l_name = last_name;
}

void Contact::set_nickname(std::string dub){

	this->nickname = dub;
}

void Contact::set_num(std::string num){

	this->phone_num = num;
}

void Contact::set_secret(std::string portray){

	this->darkest_secret = portray;
}

std::string Contact::get_info(int info)
{
	switch (info)
	{
		case FRST	: return this->f_name;
		case LST	: return this->l_name;
		case NUM	: return this->phone_num;
		case DUP	: return this->nickname;
		case PORT	: return this->darkest_secret;
		default:
			break;
	}
	return NULL;
}
