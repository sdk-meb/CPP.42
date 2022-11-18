/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/18 17:35:09 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
#define ClapTrap_H

# include <iostream>

#if __linux
    typedef unsigned int uint;
#endif

class ClapTrap{


protected:
    std::string Name;
    uint    Hit;
    uint    Energy;
    uint    AttackDamage;


public:
    ClapTrap( std::string name="C_unamed" );
    ClapTrap( const ClapTrap& claptrap2 );

    ClapTrap& operator=( const ClapTrap& claptrap );

    std::string getName(void) const;
    uint getHit(void) const;
    uint getattack(void) const;
    uint getEnergy(void) const;

    void setName( std::string name );
    void setHit(uint    hit);
    void setEnergy(uint    energy);
    void setAttackDamage(uint    attackdamage);
    
    void attack(const std::string& target);
    void takeDamage(uint amount);
    void beRepaired(uint amount);

    ~ClapTrap(void);
};

# endif
