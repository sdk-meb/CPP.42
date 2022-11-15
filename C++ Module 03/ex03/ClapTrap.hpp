/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 17:31:02 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

#if __linux
    typedef unsigned int uint;
#endif

class ClapTrap{

    std::string Name;

protected:
    uint    Hit;
    uint    Energy;
    uint    AttackDamage;


public:
    ClapTrap( std::string name="unamed", uint hit=10, uint energy=10, uint attdmg=0 );
    ClapTrap( const ClapTrap& claptrap2 );

    ClapTrap& operator=( const ClapTrap& claptrap );

    std::string getName(void) const;
    uint getHit(void) const;
    uint getattack(void) const;
    uint getEnergy(void) const;

    void attack(const std::string& target);
    void takeDamage(uint amount);
    void beRepaired(uint amount);

    ~ClapTrap(void);
};

# endif