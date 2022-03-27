/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:12:32 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:12:33 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void    HumanA::attack() const
{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
