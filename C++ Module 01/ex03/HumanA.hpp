#ifndef _HUMAN_A_H_
# define _HUMAN_A_H_

# include<iostream>
# include<Weapon.hpp>

class HumanA{

    Weapon* Wpn;
    std::string Name;

public:

    HumanA(std::string name, Weapon& wpn);
    void    attack();

};

# endif