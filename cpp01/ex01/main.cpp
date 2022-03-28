/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:09:03 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:09:04 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
    Zombie *horde = NULL;
    int     N;
    int     i;
    
    if (ac != 3)
    {
        std::cout << "Please use \"./zombieHorde N name\"" << std ::endl;
        std::cout << "where 'N' is the size of the horde and 'name' the name of the zombies" << std::endl;
        return (1);
    }
    i = 0;
    N = atoi(av[1]);
    if (N <= 0)
    {
        std::cout << "Please enter a number > 0" << std::endl;
        return (1);
    }
    horde = (*horde).zombieHorde(N, (std::string)av[2]);
    while (i++ < N)
        (*horde).announce();
    delete [] horde;
    return (0);
}
