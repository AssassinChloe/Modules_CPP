/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/13 14:10:42 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & var)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &var)
    {
        this->_type = getType();
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
}
