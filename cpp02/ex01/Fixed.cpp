/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/07 12:16:17 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(int const nb) : _raw_bits(nb << this->_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nbf)
{
    std::cout << "Float constructor called" << std::endl;
    this->_raw_bits = roundf(nbf * (1 << this->_bits));
}

std::ostream & operator<<(std::ostream & ostream, Fixed const & instance)
{
    ostream << instance.toFloat();
    return (ostream);
}

Fixed& Fixed::operator=(Fixed const & var)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &var)
        this->_raw_bits = var.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (this->_raw_bits);
}

void Fixed::setRawBits( int const raw )
{
    this->_raw_bits = raw;
}

float   Fixed::toFloat( void ) const
{
    float tmp = (float)this->_raw_bits / (1 << this->_bits) ;
    return (tmp);
}

int Fixed::toInt( void ) const
{
    return (this->_raw_bits >> this->_bits);
}