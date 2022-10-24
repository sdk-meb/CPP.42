/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:41:12 by sdk-meb           #+#    #+#             */
/*   Updated: 2022/10/24 10:55:57 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

/************************** ADD CONTACT ***************************************/
void PhoneBook::add_contact(std::string name[PORT + 1], int con){

	this->contact[con].set_fname	(name[FRST]);
	this->contact[con].set_lname	(name[LST]);
	this->contact[con].set_num		(name[NUM]);
	this->contact[con].set_nickname	(name[DUP]);
	this->contact[con].set_secret 	(name[PORT]);
}

void    PhoneBook::repo_guide_display(){

	int c = 0;
	std::string wall = "+----------",
	column1 = "  INDEX" , column2 = "FRST NAME",
	column3 = "LAST NAME",column4 = " NICKNAME" ;

	do{
		std::cout << wall + wall + wall + wall + '+' << std::endl 
		<< "|" << std::left << std::setw(10) << (column1.length() <= 10 ? column1 : column1.replace(9, 1, ".").substr(0, 10))
		<< "|" << std::setw(10) << (column2.length() <= 10 ? column2 : column2.replace(9, 1, ".").substr(0, 10))
		<< "|" << std::setw(10) << (column3.length() <= 10 ? column3 : column3.substr(0, 10).replace(9, 1, "."))
		<< "|" << std::setw(10) << (column4.length() <= 10 ? column4 : column4.substr(0, 10).replace(9, 1, "."))
		<< "|" << std::endl;

		std::stringstream stream;
		stream << c + 1;
		stream >> column1 ;
		if (c >= 8)
			break;
		column2 = this->contact[c].get_info(FRST);
		column3 = this->contact[c].get_info(LST);
		column4 = this->contact[c++].get_info(DUP);

	}while (column2.empty() == false);
	std::cout << wall + wall + wall + wall + '+' << std::endl;

}

/************************** WRITE INFO OF CONTACT *****************************/
void PhoneBook::print_contact(int c){

	std::cout << "first name: "
			  << this->contact[c].get_info(FRST) << std::endl;
	std::cout << "last name: "
			  << this->contact[c].get_info(LST) << std::endl;
	std::cout << "phone number: "
			  << this->contact[c].get_info(NUM) << std::endl;
	std::cout << "nickname: "
			  << this->contact[c].get_info(DUP) << std::endl;
	std::cout << "description: "
			  << this->contact[c].get_info(PORT) << std::endl;
}

/************************* BOOK CONSTRUCTOR ***********************************/
PhoneBook::PhoneBook(){

	std::cout << "\033[1;44m Welcome to your contact repository \033[0m";
}
