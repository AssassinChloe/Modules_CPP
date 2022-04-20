/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:27:22 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/20 17:25:44 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    int i;
    std::vector<int> tab;
    int nb = rand() % 3 + 1;
    for (i = 0; i < 60; i+= nb)
    {
        tab.push_back(i);
        nb = rand() % 3 + 1;
    }
    std::vector<int>::const_iterator   it = tab.begin();
    std::vector<int>::const_iterator   ite = tab.end();
    std::advance(it, 5);
    std::inserter(tab, it);
    i = 0;
    for (it = tab.begin(); it!= ite; it++)
    {
        std::cout << tab[i] << " ";
        i++;
    }
    std::cout << std::endl;
    try
    {
        std::cout << "60 : " << easyfind(tab, 60) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "42 : " << easyfind(tab, 42) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "0 : "<< easyfind(tab, 0) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "3 : " << easyfind(tab, 3) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "12 : " << easyfind(tab, 12) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "13 : "<< easyfind(tab, 13) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "14 : " << easyfind(tab, 14) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "15 : " << easyfind(tab, 15) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
        try
    {
        std::cout << "16 : " << easyfind(tab, 16) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}