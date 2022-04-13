/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/13 14:10:28 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Brain& Brain::operator=(Brain const & var)
{
    std::cout << "Copy assignment operator called" << std::endl;
    int i;

    if (this != &var)
    {
        for (i = 0; i < 100; i++)
        {
            this->_ideas[i] = var._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain" << std::endl;
}

void Brain::setIdeas(std::string idea, int index)
{
    if (index >= 0 && index <= 99)
        this->_ideas[index] = idea;   
}

std::string Brain::getIdeas(int index)
{
    if (index >= 0 && index <= 99)
        return(this->_ideas[index]);
    return (NULL);
}
