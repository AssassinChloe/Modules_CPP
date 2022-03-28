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
class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const& src);
        ~Fixed();
        Fixed & operator=(Fixed const & rhs);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int _raw_bits;
        // const static int _div;
};

std::ofstream & operator<<(std::ofstream & o, Fixed const & i);

#endif
