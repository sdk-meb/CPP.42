/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:24 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 17:31:57 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include"Animal.hpp"
# include"Brain.hpp"

class Cat: public Animal{

    Brain*  brain;
    public:
        Cat();

        ~Cat(void);
};

#endif
