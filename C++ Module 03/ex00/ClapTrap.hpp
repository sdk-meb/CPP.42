/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:46:43 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 10:12:29 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

class ClapTrap{

private:
    std::string Name;
    unsigned int    Hit;
    unsigned int    Energy;
    unsigned int    AttackDamage;


public:
    ClapTrap( std::string name="unamed" );
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