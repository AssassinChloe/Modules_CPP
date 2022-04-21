/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:27:22 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/21 12:13:56 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
# include <vector>
# include <iterator>

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
    i = 0;
    std::vector<int>::const_iterator it;
    std::vector<int>::const_iterator ite = tab.end();
    for (it = tab.begin(); it!= ite; it++)
    {
        std::cout << tab[i] << " ";
        i++;
    }
    std::cout << std::endl;
    nb = 60;
    while (nb >= 0)
    {
        try
        {
            std::cout << nb << " : " << easyfind(tab, nb) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }

        nb -= rand() % 2 + 1;
    }
    return (0);
}