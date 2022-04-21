/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:25:08 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/21 12:11:16 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stdexcept>
        
template < typename T>
int easyfind(T tab, int nb)
{
    typename T::const_iterator  ret = find(tab.begin(), tab.end(), nb);
    if (ret == tab.end())
        throw  std::invalid_argument("no matching value");
    return (*ret);
}

#endif