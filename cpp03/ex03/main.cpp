/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:48:21 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/08 10:48:21 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap robot1("Oscar");
    ScavTrap robot2("Jarvis");
    FragTrap robot3("Wall-E");
    DiamondTrap robot4("C3PO");

    int i(0);
    std::string tab[] = 
    {
        "YOU SHALL NOT PASS!",
        "YOU SHALL NOT PASS! I said, don't you listen?",
        "Don't be a fool! Fly...",
        "You are getting on my nerves...",
        "I will END you small piece of junk!",
        "YOU ARE BIPING YOUR LAST BIIPIBIP!",
    };
    std::cout << std::endl << robot1 << std::endl;
    std::cout << std::endl << robot2 << std::endl;
    std::cout << std::endl << robot3 << std::endl;
    std::cout << std::endl << robot4 << std::endl << std::endl;

    robot2.guardGate();
    robot4.whoAmI();
    while (robot1.gethitpoint() > 0 && robot2.gethitpoint() > 0)
    {
        std::cout << std::endl << robot2.getname() << " : " << tab[i] << std::endl;
        std::cout << robot1.getname() <<": Biipboupbi bouup bip!" << std::endl;
        robot3.highFivesGuys();
        std::cout << std::endl;
        if (robot1.getenergy() > 0)
        {
            robot1.attack(robot2.getname());
            robot2.takeDamage(robot1.getdamage());
            std::cout << std::endl;
        }
        robot3.highFivesGuys();
        robot2.attack(robot1.getname());
        robot1.takeDamage(robot2.getdamage());
        std::cout << std::endl;
        robot3.highFivesGuys();
        if (robot1.getenergy() > 0)
            robot1.beRepaired(7);
        std::cout << std::endl << robot1 << std::endl;
        std::cout << std::endl << robot2 << std::endl;
        std::cout << std::endl << robot3 << std::endl;
        std::cout << std::endl << robot4 << std::endl << std::endl;
        i++;
    }
    std::cout << "SPROCH" << std::endl << std::endl;
    robot2.guardGate();
    robot3.highFivesGuys();
    robot3.attack(robot2.getname());
    robot4.attack(robot2.getname());
    std::cout << "*" << robot3.getname() << " and " << robot4.getname() << " run away throught the ungarded gates! * " << std::endl << std::endl;
    robot4.whoAmI();
    return (0);
}