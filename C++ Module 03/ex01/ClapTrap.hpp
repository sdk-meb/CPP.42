#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

class ClapTrap{

protected:
    std::string Name;
    unsigned int    Hit;
    unsigned int    Energy;
    unsigned int    AttackDamage;


public:
    ClapTrap( std::string name="unamed" );
    ClapTrap( const ClapTrap& claptrap2 );
    ClapTrap& operator=( const ClapTrap& claptrap );
    unsigned int getHit() const;
    unsigned int getattack() const;
    unsigned int getEnergy() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

# endif