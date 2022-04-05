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

Character::Character()
{}

Character::Character(const std::string & name) : _name(name), _nb_obj(0)
{
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
        while (i < _nb_obj)
            this->_inventory[i] = getInventory(i++);
    }
    return *this;
}

Character::~Character()
{
    int i;

    for (i = 0; i < this->_nb_obj; i++)
    {
        delete this->_inventory[i];
    }
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
    if (this->_nb_obj < 4)
    {
        this->_inventory[this->_nb_obj - 1] = m;
        this->_nb_obj++;
        std::cout << m->getType() << " materia successfully equiped" << std::endl;
    }
    else
        std::cout << "Your inventory is full !" << std::endl;
}

void Character::unequip(int idx)
{
    int i;

    i = idx + 1;
    while (i < 4 && i <= this->_nb_obj)
    {
        this->_inventory[i - 1] = this->_inventory[i];
        i++;
    }
    this->_inventory[i] = NULL;
    this->_nb_obj -= 1; 
}

void Character::use(int idx, ICharacter& target)
{
    this->_inventory[idx]->use(target);
    this->unequip(idx);
}
