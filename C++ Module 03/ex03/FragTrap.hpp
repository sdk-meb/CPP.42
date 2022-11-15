/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/15 18:19:55 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include"ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
    
public:
    FragTrap(std::string="unamed");

    void highFivesGuys(void);
    ~FragTrap();
};

# endif
