/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:09 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:37:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Constructor Cure" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
    *this = src;
    return ;
}

Cure& Cure::operator=(Cure const & var)
{
    if (this != &var)
        this->_type = var.getType();
    return *this;
}

Cure::~Cure()
{
    std::cout << "Destructor Cure" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
