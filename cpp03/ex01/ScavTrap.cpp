/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap(std::string name) : _gate_keeping_active(false)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy = 50;
    this->_damage = 20;
    this->_max_hit_point = 100;
    this->_max_energy = 50;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & var)
{
    if (this != &var)
    {
        this->_name = var.getname();
        this->_hit_points = var.gethitpoint();
        this->_energy = var.getenergy();
        this->_damage = var.getdamage();
    }
    return *this;
}

std::ostream & operator<<(std::ostream & ostream, ScavTrap const & i)
{
    if (i.get_status() == true)
        ostream << std::endl << "Mode Gate Keeper is active";
    else
        ostream << std::endl << "Mode Gate Keeper is inactive";
    return (ostream);
}

ScavTrap::~ScavTrap()
{}

bool ScavTrap::get_status() const
{
    return (this->_gate_keeping_active);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << ": Gate Keeper Mode ACTIVATED !" << std::endl;
    this->_gate_keeping_active = true;
}