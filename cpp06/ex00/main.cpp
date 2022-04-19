/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:15 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/19 12:14:11 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main (int ac, char**av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl 
        << "Usage : ./convert 'value'" << std::endl;
        return (1);
    }
    Convert value(av[1]);
    value.conversion();
    return (0);
}