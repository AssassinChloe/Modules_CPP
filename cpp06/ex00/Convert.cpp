/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:18:21 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 17:30:09 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(std::string value) : _toconvert(value)
{}

Convert::Convert(Convert const & src)
{
    *this = src;
    return ;
}

Convert& Convert::operator=(Convert const & var)
{
    if (this != &var)
    {
        this->_toconvert = var.getToConvert();
    }
    return *this;
}

Convert::~Convert()
{}

std::string Convert::getToConvert() const
{
    return (this->_toconvert);
}

int Convert::checkToConvert()
{
    
}
