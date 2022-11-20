/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:55:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 22:24:48 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */):IMateriaSource(){

    std::cout << "default constructor call( MateriaSource )" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& IChar):IMateriaSource(IChar){

    std::cout << "copy constructor call( MateriaSource )" << std::endl;
}
MateriaSource&   MateriaSource::operator=(const MateriaSource& IChar){

    std::cout << "copy assignment operator call( MateriaSource )" << std::endl;
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

void    MateriaSource::learnMateria(AMateria* materia){

    if (Materias[0] == NULL)
        Materias[0] = materia;
    else if (Materias[1] == NULL)
        Materias[1] = materia;
    else if (Materias[2] == NULL)
        Materias[2] = materia;
    else if (Materias[3] == NULL)
        Materias[3] = materia;
}
AMateria*  MateriaSource::createMateria(std::string const & type){

    if (type == "Cure")
        return new Cure;
    if (type == "Ice")
        return new Ice;
    return NULL;
}

MateriaSource::~MateriaSource(){

std::cout << "destroy " << " ( MateriaSource )" << std::endl;
}
