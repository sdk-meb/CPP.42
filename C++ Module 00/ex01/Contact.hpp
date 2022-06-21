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
    ~Contact(){return ;}; /* DECONSTRUCTOR*/
    void  add_name(Contact *con, std::string name);
    void  add_num(Contact *con, std::string num);
    std::string get_info(Contact con, int info);
};

# endif