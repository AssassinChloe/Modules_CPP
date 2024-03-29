/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:03 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:27:29 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Constructor Ice" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
    *this = src;
    return ;
}

Ice& Ice::operator=(Ice const & var)
{
    if (this != &var)
        this->_type = var.getType();
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Destructor Ice" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

