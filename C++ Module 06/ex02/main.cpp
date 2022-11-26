/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:17:32 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 08:57:09 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Ident.hpp"

int main(){

    Base *o = generate( );
    std::cout << "gener -> identify(POINTER)\n";
    identify( o);
    std::cout << "gener -> identify(ref)\n";
    identify( *o);
    return 0;
}
