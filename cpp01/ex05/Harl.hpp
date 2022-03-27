/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:16:04 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:16:05 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl
{
    public :
        Harl();
        ~Harl();
        void complain( std::string level) const;

    private :

    std::string _level;

    void debug( void ) const;
    void info( void ) const;
    void warning( void ) const;
    void error( void ) const;
};

#endif
