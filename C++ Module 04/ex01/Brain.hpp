/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:58:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 18:26:07 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include"Animal.hpp"

class Brain
{
    std::string Ideas[100];

    public:
        Brain(/* args */);
        Brain(const Brain& brain);
        Brain& operator=(const Brain& brain);
        std::string getIdea(uint i) const;
        ~Brain();
};



# endif
