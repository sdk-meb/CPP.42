/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 12:14:18 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

class ClapTrap{

    std::string Name;

protected:
    unsigned int    Hit;
    unsigned int    Energy;
    unsigned int    AttackDamage;


public:
    ClapTrap( std::string name="unamed", uint hit=10, uint energy=10, uint attdmg=0 );
    ClapTrap( const ClapTrap& claptrap2 );

    ClapTrap& operator=( const ClapTrap& claptrap );

    std::string getName(void) const;
    unsigned int getHit(void) const;
    unsigned int getattack(void) const;
    unsigned int getEnergy(void) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ~ClapTrap(void);
};

# endif