/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:25:08 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/20 17:10:53 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>
# include <cstdlib>

class NoMatchException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("There is no matching value");
            }
    } nomatchex;
        
template < typename T>
int easyfind(T tab, int nb)
{
    
    typename T::const_iterator   it;
    typename T::const_iterator   ite = tab.end();

    for (it = tab.begin(); it!= ite; it++)
    {
        if (*it == nb)
            return (*it);
    }
    throw  nomatchex;
}

#endif