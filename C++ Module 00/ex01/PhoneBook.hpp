#ifndef _PHONEBOOK_H_
# define _PHONEBOOK_H_

# include<iostream>
# include "Contact.hpp"

class PhoneBook{

private:
    Contact contact[8];

public:
    PhoneBook(); /* parameters CONSTURCTOR */
    ~PhoneBook(){return ;}; /*  DECONSTRUCTOR  */
    void add_contact(std::string name, std::string num, int c);
    void    reset_contact(int c);
    void    print_contact(int c);
};

# endif