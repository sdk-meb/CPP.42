/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:55:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/20 23:36:27 by sdk-meb          ###   ########.fr       */
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

void    MateriaSource::learnMateria(AMateria* materia){

    for (int idx=0; idx < 4; idx++){

        if (Materias [idx])
            continue;
        Materias [idx] = materia;
        break;
    }
}
AMateria*  MateriaSource::createMateria(std::string const & type){

    if (type == "cure")
        return new Cure;
    if (type == "ice")
        return new Ice;
    return NULL;
}

MateriaSource::~MateriaSource(){

    for (int idx=0; idx < 4; idx++){

        if (Materias [idx])
            delete Materias[idx];
    }
std::cout << "destroy " << " ( MateriaSource )" << std::endl;
}
