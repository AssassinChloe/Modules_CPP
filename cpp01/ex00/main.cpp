/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:07:16 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:07:18 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *paul;   
    std::cout << std::endl << "Creating a Zombie" << std::endl;
    Zombie mary = Zombie("Mary");
    mary.announce();
    std::cout << std::endl << "Creating a newZombie" << std::endl;
    paul = mary.newZombie("Paul");
    mary.announce();
    (*paul).announce();

    std::cout << std::endl << "Creating a randomChump" << std::endl;
    mary.randomChump("Vlad");
    mary.announce();
    (*paul).announce();

    delete(paul);
    return (0);
}
