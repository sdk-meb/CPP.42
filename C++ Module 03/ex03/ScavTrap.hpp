/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:19:37 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 18:19:22 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ScaveTrap_H
# define ScaveTrap_H

# include"ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{

public:

    ScavTrap( std::string name="unamed");
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

# endif
