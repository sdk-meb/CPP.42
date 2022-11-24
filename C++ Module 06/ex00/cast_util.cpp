/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_util.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:00:43 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/24 21:00:46 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"cast_util.hpp"

bool    check_ppf( std::string str ){

    for (size_t i = str.find('.') + 1; i <= str.size() && std::isdigit(str[i]) ; i++){

        if ( str[i] != '0')
            return true;
    }
    return false;
}

void    convert( std::string str ){

    try{

        int i = std::stoi( str );
        (std::isprint(i)? std::cout << "char: '" << (static_cast<char> (i)) <<  "'" : std::cout << "char: Non displayable");
        
        std::cout << std::endl << "int: " << i << std::endl;
    }
    catch ( const std::exception& exc){

        if (str.size() == 1)
            std::cout << "char: '" << str[0] << "'\n";
        else
            std::cout << "char: impossible\n";
        std::cerr   << "int: impossible" << std::endl;
    }

    try{

        std::cout   << "float: " << (std::stof( str ))
                    << ( str.find('.') <= (str.size() ) && check_ppf( str ) ? "f" :  ".0f")
                    << std::endl;
    }
    catch ( const std::exception& exc){

        std::cerr   << "nanf" << std::endl;
    }

    try{
         std::cout  << "double: " << (std::stod( str ))
                    << ( str.find('.') <= (str.size() ) && check_ppf( str ) ? "" :  ".0")
                    <<  std::endl;
    }
    catch ( const std::exception& exc){

        std::cerr   << "nan" << std::endl;
    }
}
