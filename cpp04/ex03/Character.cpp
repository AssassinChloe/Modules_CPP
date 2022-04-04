/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:33:05 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/04 17:18:18 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Constructor Character" << std::endl;
}

Character::Character(Character const & src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Character& Character::operator=(Character const & var)
{
    if (this != &var)
    {
        this->_name = var.getName();
        this->_inventory = var.getInventory(;)
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
