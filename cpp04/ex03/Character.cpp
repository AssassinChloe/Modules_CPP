/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:05 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/05 13:55:08 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

_inventory_size = 0;
Character::Character()
{}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Constructor Character" << std::endl;
}

Character::Character(Character const & src)
{
    *this = src;
    return ;
}

Character& Character::operator=(Character const & var)
{
    int i;

    i = 0;
    if (this != &var)
    {
        this->_name = var.getName();
        while (i < _inventory_size)
        {
            this->_inventory[i] = AMateria::clone(var.getInventory(i);
            i++;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Destructor Character" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

AMateria *Character::getInventory(int i) const
{
    return (this->_inventory[i]);
}

void Character::equip(AMateria* m)
{}
void Character::unequip(int idx)
{}
void Character::use(int idx, ICharacter& target)
{}
