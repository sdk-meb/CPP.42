#ifndef _CONTACT_H_
# define _CONTACT_H_

# include<iostream>

class Contact{

private:
    std::string name;
    std::string number;

public:
    Contact(){/* empty CONSTRUCTOR */
        name = "";
        number = "";
    }
    void  add_name(std::string name);
    void  add_num(std::string num);
    std::string get_info(int info);
};

# endif