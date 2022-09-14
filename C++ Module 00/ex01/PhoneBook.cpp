#include "PhoneBook.hpp"
#include <string>
#include <sstream>

/************************** ADD CONTACT ***************************************/
void PhoneBook::add_contact(std::string name, std::string num, int c)
{
	this->contact[c].add_name(name);
	this->contact[c].add_num(num);
}

/************************* REST CONTACT ***************************************/
void PhoneBook::reset_contact(int c)
{
	this->contact[c].add_name("");
	this->contact[c].add_num("");
}

/***************************** ADD NAME ***************************************/
void Contact::add_name(std::string name)
{
	this->name = name;
}

/**************************** ADD NUMBER **************************************/
void Contact::add_num(std::string num)
{
	this->number = num;
}

/************************** WRITE INFO OF CONTACT *****************************/
void PhoneBook::print_contact(int c)
{

	std::cout << "{ " << c + 1 << " }\n name: "
			  << this->contact[c].get_info(1) << std::endl;
	std::cout << " number: "
			  << this->contact[c].get_info(2) << std::endl;

}

/********************** GET PRIVATE INFO OF CONTACT ***************************/
std::string Contact::get_info(int info)
{
	return (info == 1 ? this->name : this->number);
}

/************************* REPOSOTRY MANAGERE *********************************/
void contact_repo(PhoneBook repo)
{
	std::string command;
	std::string name;
	std::string number;
	int person = 0, contact = 0;

S	:
	std::cout << "\n\033[1;34m you can ADD or SEARCH a contact. \033[0m"
			  << std::endl
			  << "$>";
	std::getline(std::cin, command);
	if (std::cin.eof() == true)
		return ;
	if (command == "ADD")
	{
		if (person >= 8)
			repo.reset_contact(person % 8);
		std::cout << "new name :";
		std::getline(std::cin, name);
		if (std::cin.eof() == true)
			return ;
		std::cout << "number :";
		std::getline(std::cin, number);
		if (std::cin.eof() == true)
			return ;
		repo.add_contact(name, number, person++ % 8);
	}
	else if (command == "EXIT")
		return ;
	else if (command == "SEARCH")
	{
		std::cout << "what contact would like : ";
		std::getline(std::cin, name);
		if (std::cin.eof() == true)
			return ;
		std::stringstream stoi;
		stoi << name;
		stoi >> contact;
		if (contact > 8 || contact <= 0 || person < contact)
			std::cout << "contact " << contact << " not Found \n$>";
		else
			repo.print_contact((contact % 9) - 1);
	}
	else
		std::cout << "\033[1;31m write {EXIT} if you haven't needed to me\n \033[0m";
	goto S;
}

/************************* BOOK CONSTRUCTOR ***********************************/
PhoneBook::PhoneBook()
{
	std::cout << "\033[1;44m Welcome to your contact repository \033[0m";
}

/*************************** main function ************************************/
int main()
{
	PhoneBook repo;

	contact_repo(repo);

	return 0;
}