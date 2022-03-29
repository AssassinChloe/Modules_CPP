/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:18:29 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:18:32 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <cmath>
class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const& src);
        Fixed(int const nb);
        Fixed(float const nbf);
        ~Fixed();
        Fixed & operator=(Fixed const & var);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        int _raw_bits;
        const static int _bits = 8;
};

std::ostream & operator<<(std::ostream & ostream, Fixed const & instance);

#endif
