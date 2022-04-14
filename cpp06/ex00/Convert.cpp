/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:18:21 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/14 17:14:37 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(std::string value) : _toconvert(value), _precision(value.size() + 1)
{
    this->setType();
}

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
        this->_type = var.getType();
        this->_precision = var.getPrecision();
    }
    return *this;
}

Convert::~Convert()
{}

std::string Convert::getToConvert() const
{
    return (this->_toconvert);
}

int Convert::getType() const
{
    return (this->_type);
}
int Convert::getPrecision() const
{
    return (this->_precision);
}

void Convert::setType()
{
    std::string spe_casef[] = {"nanf", "-inff", "+inff", "inff"};
    std::string spe_cased[] = {"nan", "-inf", "+inf", "inf"};
    unsigned int i;
    int nb_point = 0;
    int nb_f = 0;
    int nb_signed = 0;
    int nb_char = 0;
    
    for (i = 0; i < 4; i++)
    {
        if (spe_casef[i] == this->_toconvert)
        {
            this->_type = SPE_CASE_F;
            return;
        }
        else if (spe_cased[i] == this->_toconvert)
        {
            this->_type = SPE_CASE_D;
            return;
        }
    }
    if (this->_toconvert.size() == 1 && isdigit(this->_toconvert[0]) == 0)
    {    
        this->_type = CHAR;
        return;
    }
    for (i = 0; i < this->_toconvert.size(); i++)
    {
        if (this->_toconvert[i] == '+' || this->_toconvert[i] == '-')
            nb_signed++;
        else if (this->_toconvert[i] == '.')
            nb_point++;
        else if (this->_toconvert[i] == 'f')
            nb_f++;
        else if (isdigit(this->_toconvert[i]) == 0)
            nb_char++;         
    }
    if (this->_toconvert.size() == 0 || nb_signed > 1 || nb_f > 1 || nb_point > 1 || nb_char > 0)
    {
        this->_type = INVALID;
        return ;
    }
    else if (nb_f == 1)
        this->_type = FLOAT;
    else if (nb_point == 1)
        this->_type = DOUBLE;
    else
        this->_type = INT;
}

void    Convert::conversion()
{
    switch (this->_type)
    {
        case INVALID :
        {
            std::cout << "Wrong input value, please try again" << std::endl;
            return ;
        }
        case CHAR :
        {
            convert_char();
            break ;
        }
        case INT :
        {
            convert_int();
            break ;
        }
        case DOUBLE : 
        {
            convert_double();
            break ;
        }
        case FLOAT: 
        {
            convert_float();
            break ;
        }
        case SPE_CASE_D: case SPE_CASE_F:
        {
            convert_spe();
            break ;
        }
        default:
            break ;

    }
}

void Convert::convert_char()
{
    char conv = this->_toconvert[0];
    if (static_cast<int>(conv) > 99)
        this->_precision += 2;
    else if (static_cast<int>(conv) > 9)
        this->_precision++;
    std::cout << std::setw(8) << "Char : " <<  conv << std::endl;
    std::cout << std::setw(8) << "Int : " << static_cast<int>(conv) << std::endl;
    std::cout << std::setw(8) << "Float : " << std::showpoint << std::setprecision(this->_precision) << static_cast<float>(conv) << 'f' << std::endl;
    std::cout << std::setw(8) << "Double: " << std::showpoint << std::setprecision(this->_precision) << static_cast<double>(conv) << std::endl;
    
}
void Convert::convert_int()
{
    int conv = atoi(this->_toconvert.c_str());
    if ( conv < 0 || conv >= 128)
        std::cout << std::setw(8) << "Char : " <<  "Impossible" << std::endl;
    else if (isprint(conv) == 0)
        std::cout << std::setw(8) << "Char : " <<  "Non displayable" << std::endl;
    else
        std::cout << std::setw(8) << "Char : " <<  static_cast <char>(conv) << std::endl;
    std::cout << std::setw(8) << "Int : " << conv << std::endl;
    std::cout << std::setw(8) << "Float : " << std::showpoint << std::setprecision(this->_precision)<< static_cast<float>(conv) << 'f' << std::endl;
    std::cout << std::setw(8) << "Double: " << std::showpoint << std::setprecision(this->_precision) << static_cast<double>(conv) << std::endl;
    
}

void Convert::convert_float()
{
    float conv = atof(this->_toconvert.c_str());
    this->_precision -= 3;
    if ( conv < 0 || conv >= 128)
        std::cout << std::setw(8) << "Char : " <<  "Impossible" << std::endl;
    else if (isprint(conv) == 0)
        std::cout << std::setw(8) << "Char : " <<  "Non displayable" << std::endl;
    else
        std::cout << std::setw(8) << "Char : " <<  static_cast <char>(conv) << std::endl;
    if (conv > std::numeric_limits<int>::max() || conv < std::numeric_limits<int>::min())    
        std::cout << std::setw(8) << "Int : " <<  "Impossible" << std::endl;
    else
        std::cout << std::setw(8) << "Int : " << static_cast<int>(conv) << std::endl;
    std::cout << std::setw(8) << "Float : " << std::showpoint << std::setprecision(this->_precision)<< conv << 'f' <<std::endl;
    std::cout << std::setw(8) << "Double: " << std::showpoint << std::setprecision(this->_precision) << static_cast<double>(conv) << std::endl;
}

void Convert::convert_double()
{
    char *end;
    double conv = strtod(this->_toconvert.c_str(), &end);
    this->_precision -= 2;
    if ( conv < 0 || conv >= 128)
        std::cout << std::setw(8) << "Char : " <<  "Impossible" << std::endl;
    else if (isprint(conv) == 0)
        std::cout << std::setw(8) << "Char : " <<  "Non displayable" << std::endl;
    else
        std::cout << std::setw(8) << "Char : " <<  static_cast <char>(conv) << std::endl;
    if (conv > std::numeric_limits<int>::max() || conv < std::numeric_limits<int>::min()) 
        std::cout << std::setw(8) << "Int : " <<  "Impossible" << std::endl;
    else
        std::cout << std::setw(8) << "Int : " << static_cast<int>(conv) << std::endl;
    std::cout << std::setw(8) << "Float : " << std::showpoint << std::setprecision(this->_precision) << static_cast<float>(conv) << 'f' << std::endl;
    std::cout << std::setw(8) << "Double: " << std::showpoint << std::setprecision(this->_precision)<< conv << std::endl;
}

void Convert::convert_spe()
{
    std::cout << std::setw(8) << "Char : " <<  "Impossible" << std::endl;
    std::cout << std::setw(8) << "Int : " << "Impossible" << std::endl;
    if (this->_type == SPE_CASE_D)
    {
        std::cout << std::setw(8) << "Float : " <<  this->_toconvert + "f" << std::endl;
        std::cout << std::setw(8) << "Double: " << this->_toconvert << std::endl;
    }
    else
    {
        std::cout << std::setw(8) << "Float : " <<  this->_toconvert << std::endl;
        std::cout << std::setw(8) << "Double: " << this->_toconvert.substr(0, (this->_toconvert.size() - 1)) << std::endl;
    }
}