/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap parts : Initialization in progress..." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
 _name(name), _hit_points(10), _energy(10), _damage(0), _max_hit_point(10), _max_energy(10)
{
    std::cout << "ClapTrap " << _name << " : Initialization complete" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & var)
{
    if (this != &var)
    {
        this->_name = var.getname();
        this->_hit_points = var.gethitpoint();
        this->_energy = var.getenergy();
        this->_damage = var.getdamage();
        this->_max_hit_point = var.getmaxhealth();
        this->_max_energy = var.getenergy();
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap parts of " << this->_name << " : Termination complete" << std::endl;
}

std::ostream & operator<<(std::ostream & ostream, ClapTrap const & i)
{
    ostream << i.getname() << ":" << std::endl << "Health : " << i.gethitpoint() << "/" << i.getmaxhealth() << std::endl
    << "Energy : " << i.getenergy() << "/" << i.getmaxenergy();
    return (ostream);
}

std::string ClapTrap::getname() const
{
    return (this->_name);
}

int         ClapTrap::gethitpoint() const
{
    return (this->_hit_points);
}

int         ClapTrap::getenergy() const
{
    return (this->_energy);
}

int         ClapTrap::getdamage() const
{
    return (this->_damage);
}

int   ClapTrap::getmaxhealth() const
{
    return(this->_max_hit_point);
}
int   ClapTrap::getmaxenergy() const
{
    return(this->_max_energy);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
    std::cout << this->_damage << " points of damage !" << std::endl;
    this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " has been hit *shrieking noise* and lost ";
    std::cout << amount << " health points !" << std::endl;
    this->_hit_points -= amount;
    if (this->_hit_points < 0)
        this->_hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "*Buzzing and drilling noises* " << this->_name << " regains ";
    std::cout << amount << " health points !" << std::endl;
    this->_energy--;
    this->_hit_points += amount;
    if (this->_hit_points > 10)
        this->_hit_points = 10;
}

