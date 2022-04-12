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

void Convert::checkToConvert()
{
    int type;
    double res;
    char *pEnd;
    std::string spe_case[] = {"nanf", "-inff", "+inff", "nan", "-inf", "+inf"};

    if (this->_toconvert.size() == 1 && isalpha(this->_toconvert[0]))
    {    
        type = CHAR;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (spe_case[i] == this->_toconvert)
        {
            type = SPE_CASE;
            return;
        }
    }
    res = strtod(this->_toconvert.c_str(), &pEnd);

    std::cout << static_cast<char>(res) << std::endl;
    std::cout << static_cast<int>(res) << std::endl;
    std::cout << static_cast<float>(res) << std::endl;
    std::cout << res << std::endl;

}
