/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:05 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/06 15:46:36 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(const std::string & name) : _name(name), _nb_obj(0)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    std::cout << "Constructor Character" << std::endl;
}

Character::Character(Character const & src)
{
    *this = src;
    return ;
}

Character& Character::operator=(const Character & var)
{
    int i;

    i = 0;
    if (this != &var)
    {
        this->_name = var.getName();
        while (i < this->_nb_obj)
            delete this->_inventory[i++];
        this->_nb_obj = var.getInventorySize();
        i = 0;
        while (i < this->_nb_obj)
        {
            this->_inventory[i] = getInventory(i);
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

int Character::getInventorySize() const
{
    return (this->_nb_obj);
}

AMateria *Character::getInventory(int i) const
{
    return (this->_inventory[i]);
}

void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    if (this->_nb_obj < 4)
    {
        while (this->_inventory[i] != NULL)
            i++;
        this->_inventory[i] = m;
        this->_nb_obj++;
        std::cout << m->getType() << " materia successfully equiped" << std::endl;
    }
    else
        std::cout << "Your inventory is full !" << std::endl;
}

void Character::unequip(int idx)
{
    if (this->_inventory[idx])    
        this->_inventory[idx] = NULL;
    this->_nb_obj--; 
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
    {
        this->_inventory[idx]->use(target);
        this->unequip(idx);
    }
}
