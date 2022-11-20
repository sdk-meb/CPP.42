/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:56:01 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:23:27 by mes-sadk         ###   ########.fr       */
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
    if (IChar.Materias[0])
        Materias [0] = IChar.Materias[0]->clone();
    else
        Materias [0] = NULL;
    if (IChar.Materias[1])
        Materias [1] = IChar.Materias[1]->clone();
    else
        Materias [1] = NULL;
    if (IChar.Materias[0])
        Materias [2] = IChar.Materias[2]->clone();
    else
        Materias [2] = NULL;
    if (IChar.Materias[0])
        Materias [3] = IChar.Materias[3]->clone();
    else
        Materias [3] = NULL;
}
IMateriaSource&   IMateriaSource::operator=(const IMateriaSource& IChar){

    std::cout << "copy assignment operator call( IMateriaSource )" << std::endl;
    if (Materias [0])
        delete Materias [0];
    if (Materias [1])
        delete Materias [1];
    if (Materias [2])
        delete Materias [2];
    if (Materias [3])
        delete Materias [3];
    if (IChar.Materias[0])
        Materias [0] = IChar.Materias[0]->clone();
    else
        Materias [0] = NULL;
        if (IChar.Materias[1])
        Materias [1] = IChar.Materias[1]->clone();
    else
        Materias [1] = NULL;
    if (IChar.Materias[0])
        Materias [2] = IChar.Materias[2]->clone();
    else
        Materias [2] = NULL;
    if (IChar.Materias[0])
        Materias [3] = IChar.Materias[3]->clone();
    else
        Materias [3] = NULL;
    return *this;
}


IMateriaSource::~IMateriaSource(){

std::cout << "destroy " << " ( IMateriaSource )" << std::endl;
}
