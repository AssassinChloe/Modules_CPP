/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:49:09 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 14:26:18 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot1("Oscar");
    ScavTrap robot2("Jarvis");

    std::cout << std::endl << robot1 << std::endl;
    std::cout << std::endl << robot2 << std::endl << std::endl;
    robot2.guardGate();
    std::cout << std::endl << robot2.getname() << " : YOU SHALL NOT PASS!" << std::endl;
    std::cout << robot1.getname() <<": Biipboupbi bouup bip!" << std::endl << std::endl;
    if (robot1.getenergy() > 0)
    {
        robot1.attack(robot2.getname());
        robot2.takeDamage(robot1.getdamage());
        std::cout << std::endl;
    }
    if (robot2.getenergy() > 0)
    {
        robot2.attack(robot1.getname());
        robot1.takeDamage(robot2.getdamage());
        std::cout << std::endl;
    }
    robot1.beRepaired(20);
    std::cout << "SPROCH" << std::endl << std::endl;
    std::cout << std::endl << robot1 << std::endl;
    std::cout << std::endl << robot2 << std::endl << std::endl;
    robot2.guardGate();
    robot2.beRepaired(10);
    std::cout << robot2 << std::endl;
    return (0);
}