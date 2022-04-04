/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:40:24 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:14:00 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
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
        /*modifier les variables*/
        this-> ;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource" << std::endl;

}

std::ostream & operator<<(std::ostream & ostream, MateriaSource const & instance)
{
    ostream << ;
    return (ostream);
}
