/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/13 14:09:57 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
    this->_type = "Cat";
    std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(Cat const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat& Cat::operator=(Cat const & var)
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

Brain *Cat::getBrain() const
{
    return (this->_brain);
}

Cat::~Cat()
{
    delete(this->_brain);
    std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou! Miaou!" << std::endl;
}
