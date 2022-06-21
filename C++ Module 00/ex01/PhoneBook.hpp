#ifndef _PHONEBOOK_H_
# define _PHONEBOOK_H_

# include<iostream>
# include "Contact.hpp"

class PhoneBook{

private:
    Contact contact[8];

public:
    PhoneBook(bool init=1); /* parameters CONSTURCTOR */
    ~PhoneBook(){return ;}; /*  DECONSTRUCTOR  */
    void add_contact(PhoneBook *myphone
    , std::string name, std::string num, int c);
    void    reset_contact(PhoneBook *myphone, int c);
    void    print_contact(PhoneBook myphone, int c);
};

# endif