#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

class ClapTrap
{
    std::string Name;
    unsigned int    Hit;
    unsigned int    Energy;
    unsigned int    Attack;


public:
    ClapTrap(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
