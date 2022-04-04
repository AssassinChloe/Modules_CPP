/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(Dog const & src)
{
    *this = src;
    return ;
}

Dog& Dog::operator=(Dog const & var)
{
    if (this != &var)
    {
        this->_type = var.getType();
        this->_brain = new Brain();
        *this->_brain = *var.getBrain();
    }
    return *this;
}

Dog::~Dog()
{
    delete(this->_brain);
    std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf! Wouaf !" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->_brain);
}

void Dog::fillBrain(std::string idea, int i)
{
    (*this->getBrain()).setIdeas(idea, i);
}

std::string Dog::getTought(int index)
{
    return ((*this->getBrain()).getIdeas(index));
}