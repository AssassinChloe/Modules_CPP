/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & var)
{
    if (this != &var)
    {
        /*modifier les variables*/
        this-> ;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{}

std::ostream & operator<<(std::ostream & ostream, DiamondTrap const & instance)
{
    ostream << ;
    return (ostream);
}
