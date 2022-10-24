#include "PhoneBook.hpp"

void	read_fifo(std::string &info, std::string type_){

	std::cout << type_ << ": ";
	std::getline(std::cin, info);

	if (std::cin.eof() == true)
		exit(1) ;
	if (info == "")
		read_fifo(info, type_);
}

/************************* REPOSOTRY MANAGERE *********************************/
void contact_repo(PhoneBook &phonebook){

	std::string cmd;
	std::string contact[PORT + 1];
	static int	person;

	read_fifo(cmd, "\n\033[1;34m you can ADD or SEARCH a contact. \033[0m\n>>");
	if (cmd == "ADD")
	{
		std::cout << "new contact: " << person % 8 + 1 << std::endl;
		read_fifo(contact[FRST],	"first name");
		read_fifo(contact[LST] ,	"last name");
		read_fifo(contact[NUM] ,	"phone number");
		read_fifo(contact[DUP] ,	"nickname");
		read_fifo(contact[PORT],	"description");

		phonebook.add_contact(contact, person++ % 8);
	}
	else if (cmd == "SEARCH")
	{
		phonebook.repo_guide_display();
		std::stringstream	stoi;
		int					con = 0;
		read_fifo(cmd, "what contact would like");
		stoi << cmd;
		stoi >> con;
		if (con > 8 || con <= 0 || person < con)
			std::cout << "contact " << con << " not Found \n$>";
		else
			phonebook.print_contact((con % 9) - 1);
	}
	else if (cmd == "EXIT")
		exit (0);
	else
		std::cout << "\033[1;31m write {EXIT} if you haven't needed to me\n \033[0m";
}

int main(){

	PhoneBook phonebook;
	while(1) contact_repo(phonebook);

	return 0;
}