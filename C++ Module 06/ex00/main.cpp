/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:17:32 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/24 19:03:02 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"cast_util.hpp"

int main(int ac, char** av){

    if (ac != 2){

        std::cout << "one string should be give as argement" << std::endl;
        return 1;
    }

    convert( av[1] );/** Conversion of scalar types */

    return 0;
}
