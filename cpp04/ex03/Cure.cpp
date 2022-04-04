/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:09 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:11:50 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : _type("cure")
{
    std::cout << "Constructor Cure" << std::endl;
}

Cure::Cure(Cure const & src)
{
    *this = src;
    return ;
}

// Cure& Cure::operator=(Cure const & var)
// {
//     if (this != &var)
//     {
//         /*modifier les variables*/
//         this-> ;
//     }
//     return *this;
// }

Cure::~Cure()
{}

AMateria* Cure::clone() const
{
    return (new Cure());
}


void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

