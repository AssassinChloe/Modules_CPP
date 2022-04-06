/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:40:24 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:49:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nb_known(0), _nb_created(0)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        this->_materia[i] = NULL;
    }
    std::cout << "Constructor MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & var)
{
    if (this != &var)
    {
        for (int i = 0; i < 4; i++)
        {
            if (i < (_nb_known - 1))
                delete this->_materia[i];
            if (var._materia[i])
                this->_materia[i] = var._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
        this->_nb_known = var._nb_known;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
        this->_materia[i] = NULL;
    }
    for (i = 0; i < this->_nb_created; i++)
    {
        delete(this->_creations[i]);
    }
    std::cout << "Destructor MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria* tolearn)
{
    if (this->_nb_known < 4)
    {
        this->_materia[this->_nb_known] = tolearn;
        this->_nb_known++;
        std::cout << tolearn->getType() << " materia has been learned" << std::endl;
    }
    else
    {
		std::cout << "Can't learn any more materias" << std::endl;
        delete(tolearn);
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;
    if (this->_nb_created == 20)
    {
        for (i = 0; i < 20; i++)
        {
            delete(this->_creations[i]);
        }
        this->_nb_created = 0;
    }
    for (i = 0; i < this->_nb_known; i++)
	{
		if (type == this->_materia[i]->getType())
        {
            std::cout << type << " materia has been created" << std::endl;
			this->_creations[this->_nb_created] = this->_materia[i]->clone();
            this->_nb_created++;
            return (this->_creations[this->_nb_created - 1]);
        }
	}
    std::cout << type << " materia unknown" << std::endl;
	return NULL;
}