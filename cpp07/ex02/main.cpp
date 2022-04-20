/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:01:46 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/19 17:11:30 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main ()
{
    std::cout << "Array <int> tab of 12 elements" << std::endl;
    Array <int>tab(12);
    std::cout << "tab size : " << tab.size() << std::endl << std::endl;
    
    std::cout << "Array empty" << std::endl;
    Array <int>empty;
    std::cout << "empty size : " << empty.size() << std::endl << std::endl;
    try
    {
        std::cout << "index 2 of Array tab(12) => ";
        std::cout << tab[2] << std::endl << std::endl;
        std::cout << "value modification tab[2] = 42 => ";
        tab[2] = 42;
        std::cout << tab[2] << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "index 42 of Array tab (12) = ";
        std::cout << tab[42] << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "index 2 of Array empty (0) = ";
        std::cout << empty[2] << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << "Test assignation empty = tab" << std::endl;
        empty = tab;
        
        std::cout << "index 2 of Array empty = ";
        std::cout << empty[2] << std::endl << std::endl;
        
        std::cout << "value modification tab[2] = 654" << std::endl;
        tab[2] = 654;
        
        std::cout << "index 2 of empty & tab " << std::endl;
        std::cout << "empty : " << empty[2] << std::endl;
        std::cout << "tab : " << tab[2] << std::endl << std::endl;
        
        std::cout << "Test copy -> Array copy(empty)" << std::endl;
        const Array <int>copy(empty);
        
        std::cout << std::endl << "index 2 of copy = ";
        std::cout << copy[2] << std::endl << std::endl;
        
        std::cout << "value modification empty[2] = 987" << std::endl;
        empty[2] = 987;
        std::cout << std::endl << "index 2 of empty & tab & copy" << std::endl;
        std::cout << "empty : " << empty[2] << std::endl;
        std::cout << "tab : " << tab[2] << std::endl;
        std::cout << "copy : " << copy[2] << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}