/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(Animal const & src)
{
    *this = src;
    return ;
}

Animal& Animal::operator=(Animal const & var)
{
    if (this != &var)
    {
        this->_type = var.getType();
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{}
