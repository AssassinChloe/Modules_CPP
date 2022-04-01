/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain" << std::endl;
}

Brain::Brain(Brain const & src)
{
    *this = src;
    return ;
}

Brain& Brain::operator=(Brain const & var)
{
    if (this != &var)
    {
    
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain" << std::endl;
}
