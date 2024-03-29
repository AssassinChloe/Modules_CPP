/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:56:26 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/19 16:24:33 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template <typename array>
void iter(const array *tab, int size, void (fct)(array const &))
{
    for (int i = 0; i < size; i++)
    {
        fct(tab[i]);
    }
}

#endif
