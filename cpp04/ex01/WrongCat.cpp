/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/13 14:10:50 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _brain(new Brain())
{
    this->_type = "WrongCat";
    std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat& WrongCat::operator=(WrongCat const & var)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &var)
    {
        this->_type = var.getType();
        this->_brain = new Brain();
        *this->_brain = *var.getBrain();
    }
    return *this;
}

WrongCat::~WrongCat()
{
    delete(this->_brain);
    std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou! Miaou!" << std::endl;
}

Brain *WrongCat::getBrain() const
{
    return (this->_brain);
}