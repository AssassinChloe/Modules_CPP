/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:01:18 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 14:06:01 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "Constructor AMateria" << std::endl;
}

AMateria& AMateria::operator=(AMateria const & var)
{
    this->_type = var.getType();
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "Destructor AMateria" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}