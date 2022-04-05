/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:40:24 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:18:50 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb_known(0)
{
    std::cout << "Constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & var)
{
    if (this != &var)
    {
        for (int i = 0; i < 4; i++)
	{
		if (i < _nb_known)
			delete this->_materia[i];
		if (var._materia[i])
			this->_materia[i] = var._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
    this->_nb_known = var._nb_known;
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria* tolearn)
{
    if (this->_nb_known < 4)
    {
        this->_materia[this->_nb_known] = tolearn;
        this->_nb_known++;
        std::cout << tolearn->getType() << " Materia has been learned" << std::endl;
    }
    else
		std::cout << "Can't learn any more materias" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_nb_known; i++)
	{
		if (type == this->_materia[i]->getType())
			return this->_materia[i]->clone();
	}
	return NULL;
}