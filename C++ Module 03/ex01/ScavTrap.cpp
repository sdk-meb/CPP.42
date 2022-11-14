# include"Scavtrap.hpp"

ScavTrap::ScavTrap( std::string name):ClapTrap(name) {
    Hit *= 10; Energy *= 50; AttackDamage += 20;
    
};