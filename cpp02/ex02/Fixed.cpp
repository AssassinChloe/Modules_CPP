/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:11 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:19 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw_bits(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(int const nb) : _raw_bits(nb << this->_bits)
{}

Fixed::Fixed(float const nbf)
{
    this->_raw_bits = roundf(nbf * (1 << this->_bits));
}

std::ostream & operator<<(std::ostream & ostream, Fixed const & instance)
{
    ostream << instance.toFloat();
    return (ostream);
}

Fixed& Fixed::operator=(Fixed const & var)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &var)
        this->_raw_bits = var.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator>(Fixed const & var)
{
    if (this->_raw_bits > var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed const & var)
{
    if (this->_raw_bits < var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed const & var)
{
    if (this->_raw_bits >= var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(Fixed const & var)
{
    if (this->_raw_bits <= var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed const & var)
{
    if (this->_raw_bits == var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(Fixed const & var)
{
    if (this->_raw_bits != var.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+(Fixed const & var)
{
    return (Fixed(this->toFloat() + var.toFloat()));
}

Fixed Fixed::operator-(Fixed const & var)
{
    return (Fixed(this->toFloat() - var.toFloat()));
}

Fixed Fixed::operator*(Fixed const & var)
{
    return (Fixed(this->toFloat() * var.toFloat()));
}

Fixed Fixed::operator/(Fixed const & var)
{
    return (Fixed(this->toFloat() / var.toFloat()));
}

Fixed Fixed::operator++()
{
    this->_raw_bits++;
    return (*this);  
}

Fixed Fixed::operator--()
{
    this->_raw_bits--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(this->toFloat());
    this->_raw_bits++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(this->toFloat());
    this->_raw_bits--;
    return (tmp);
}

Fixed & Fixed::min(Fixed & var1, Fixed & var2)
{
    if (var1 < var2)
        return (var1);
    return (var2);
}

Fixed const & Fixed::min(Fixed const & var1, Fixed const & var2)
{
    if (var1.getRawBits() < var2.getRawBits())
        return (var1);
    return (var2);
}

Fixed & Fixed::max(Fixed & var1, Fixed & var2)
{
    if (var1 > var2)
        return (var1);
    return (var2);
}

Fixed const & Fixed::max(Fixed const & var1, Fixed const & var2)
{
    if (var1.getRawBits() > var2.getRawBits())
        return (var1);
    return (var2);
}
