/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Constructor AAnimal" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    *this = src;
    return ;
}

AAnimal& AAnimal::operator=(AAnimal const & var)
{
    if (this != &var)
    {
        this->_type = var.getType();
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor AAnimal" << std::endl;
}

std::string    AAnimal::getType() const
{
    return (this->_type);
}
