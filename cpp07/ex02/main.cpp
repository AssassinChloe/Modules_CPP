/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:01:46 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/15 17:45:02 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    std::cout << "Array <int> of 12 elements" << std::endl;
    Array <int>tab(12);
    std::cout << "Array size : " << tab.size() << std::endl;
    
    std::cout << "Empty Array" << std::endl;
    Array <int>empty;
    std::cout << "Array size : " << empty.size() << std::endl;
    try
    {
        std::cout << "index 2 of Array (12) => ";
        std::cout << tab[2] << std::endl;
        std::cout << "value modification tab[2] = 12 => ";
        tab[2] = 12;
        std::cout << tab[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "index 42 of Array (12) = ";
        std::cout << tab[42] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        empty = tab;
        std::cout << empty[2] << std::endl;
        tab[2] = 654;
        std::cout << empty[2] << std::endl;
        std::cout << tab[2] << std::endl;
        Array <int>copy(empty);
        std::cout << copy[2] << std::endl;
        empty[2] = 987;
        std::cout << empty[2] << std::endl;
        std::cout << tab[2] << std::endl;
        std::cout << copy[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}