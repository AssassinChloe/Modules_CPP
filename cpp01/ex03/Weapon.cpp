/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:13:51 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:13:54 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string&  Weapon::getType() const
{
    const std::string& weapon_ref = this->_type;
    return(weapon_ref);
}

void    Weapon::setType(std::string new_weapon)
{
    this->_type = new_weapon;
}
