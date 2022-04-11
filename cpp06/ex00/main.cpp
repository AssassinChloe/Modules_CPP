/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:15 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 17:16:42 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int main (int ac, char**av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl 
        << "Usage : ./convert 'value'" << std::endl;
    }
    Convert value(av[1]);
    
    int     nb = static_cast<int>(value);
    float   fnb = static_cast<float>(value);
    double  dnb = static_cast<double>(value);
    char    c = static_cast<char>(value);
    
    std::cout << nb << std::endl << fnb << std::endl << dnb << std::endl << c << std::endl;

    return (0);
}