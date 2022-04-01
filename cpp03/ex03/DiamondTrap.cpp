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

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy = ScavTrap::_energy;
    this->_damage = FragTrap::_damage;
    this->_max_hit_point = FragTrap::_max_hit_point;
    this->_max_energy = ScavTrap::_max_energy;
    std::cout << "DiamondTrap " << this->_name << " : Initialization Complete! " << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    *this = src;
    return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & var)
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

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap parts : Termination in Progress..." << std::endl;
}

std::string DiamondTrap::getname() const
{
    return (this->_name);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::_name = this->_name;
    ScavTrap::attack(target);
    ClapTrap::_name = this->_name + "_clap_name";

}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->_name << " " << ClapTrap::_name << std::endl;
}