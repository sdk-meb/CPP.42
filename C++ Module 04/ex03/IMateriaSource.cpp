/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:56:01 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:20:04 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"IMateriaSource.hpp"

IMateriaSource::IMateriaSource(/* args */){

    Materias[0] = NULL;
    Materias[1] = NULL;
    Materias[2] = NULL;
    Materias[3] = NULL;
    std::cout << "default constructor call( IMateriaSource )" << std::endl;
}
IMateriaSource::IMateriaSource(const IMateriaSource& IChar){

    std::cout << "copy constructor call( IMateriaSource )" << std::endl;

    for (int idx=0; idx < 4; idx++){

        if (IChar.Materias[idx])
            Materias [idx] = IChar.Materias[idx]->clone();
        else
            Materias [idx] = NULL;
    }
}
IMateriaSource&   IMateriaSource::operator=(const IMateriaSource& IChar){

    std::cout << "copy assignment operator call( IMateriaSource )" << std::endl;

    for (int idx=0; idx < 4; idx++){

        if (Materias [idx])
            delete Materias [idx];
        if (IChar.Materias[idx])
            Materias [idx] = IChar.Materias[idx]->clone();
        else
            Materias [idx] = NULL;
    }
    return *this;
}


IMateriaSource::~IMateriaSource(){

std::cout << "destroy " << " ( IMateriaSource )" << std::endl;
}
