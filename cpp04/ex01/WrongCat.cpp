/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
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
    *this = src;
    return ;
}

WrongCat& WrongCat::operator=(WrongCat const & var)
{
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