/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy = 100;
    this->_damage = 30;
    this->_max_hit_point = 100;
    this->_max_energy = 100;
    std::cout << "FragTrap " << this->_name << " : Initialization Complete! " << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;
    return ;
}

FragTrap& FragTrap::operator=(FragTrap const & var)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " : Termination in Progress..." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name <<" : Heeeeey Guys! Hight five !? HIGHT FIVE !" << std::endl;
    this->_energy--;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->_name << " slap " << target << " on the face, causing ";
    std::cout << this->_damage << " points of damage..." << std::endl;
    this->_energy--;
}