/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:48:21 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 13:55:12 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap robot1("C3PO");
    DiamondTrap robot2("C6PO");

    std::cout << std::endl << robot1 << std::endl;
    std::cout << std::endl << robot2 << std::endl;

    robot2.guardGate();
    robot2.whoAmI();
    std::cout << std::endl;
    robot1.attack(robot2.getname());
    robot2.takeDamage(robot1.getdamage());
    std::cout << std::endl;
    robot1.beRepaired(20);
    
    std::cout << std::endl << robot1 << std::endl;
    std::cout << std::endl << robot2 << std::endl;

    robot2.guardGate();
    robot1.highFivesGuys();
    std::cout << robot1.getname() << " runs away throught the ungarded gates! * " << std::endl << std::endl;
    return (0);
}