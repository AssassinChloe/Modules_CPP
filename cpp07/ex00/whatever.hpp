/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:27:10 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/15 14:58:54 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename T>
T const & min(T const & x, T const & y)
{
    if (x <= y)
        return (x);
    return (y);
}

template <typename T>
T const & max(T const & x, T const & y)
{
    if (x >= y)
        return (x);
    return (y);
}

template <typename T>
void swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

#endif