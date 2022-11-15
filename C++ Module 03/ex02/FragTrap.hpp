/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 12:21:40 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include"ClapTrap.hpp"

class FragTrap: public ClapTrap{
    
    
public:
    FragTrap(std::string="unamed");

    void highFivesGuys(void);
    ~FragTrap();
};

# endif
