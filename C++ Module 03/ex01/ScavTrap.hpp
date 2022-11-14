# ifndef ScaveTrap_H
# define ScaveTrap_H

# include"ClapTrap.hpp"

class ScavTrap:public ClapTrap{

public:

    ScavTrap( std::string name);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();

};

# endif