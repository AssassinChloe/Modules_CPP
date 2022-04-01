/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong_Animal")
{
    std::cout << "Constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    *this = src;
    return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & var)
{
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
    std::cout << "You hear an unbearable noise, like every Earth's animal's voices (and beyond) were talking together... oopsie" << std::endl;
}
