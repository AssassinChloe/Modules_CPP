/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:12:58 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:13:01 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void    HumanB::attack()
{

    if (this->_weapon)
    {
        std::cout << this->_name << " attack with their " << (*this->_weapon).getType() << std::endl;
    }
    else
        std::cout << this->_name << " has no weapon, he can't fight." << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
