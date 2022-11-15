/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:19:37 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 11:48:07 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ScaveTrap_H
# define ScaveTrap_H

# include"ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:

    ScavTrap( std::string name="unamed");
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

# endif
