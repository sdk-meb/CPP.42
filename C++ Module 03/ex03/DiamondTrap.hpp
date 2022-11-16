/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 17:14:33 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include"FragTrap.hpp"
# include"ScavTrap.hpp"

class DiamondTrap: virtual  public FragTrap, public virtual ScavTrap{

    std::string Name;

public:
    DiamondTrap(std::string="D_UNAMED");
    void whoAmI();
    ~DiamondTrap();
};


#endif
