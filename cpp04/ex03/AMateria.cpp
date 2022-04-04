/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Constructor AMaetria" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{}


AMateria& AMateria::operator=(AMateria const & var)
{
    this->clone();
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "Desstructor AMaetria" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{}