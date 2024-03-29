/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:49:17 by cassassi          #+#    #+#             */
/*   Updated: 2022/04/11 14:12:20 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot1("Oscar");
    ClapTrap robot2("A1-2C4");
    
    std::cout << std::endl;
    
    while (robot1.getenergy() > 0 && robot2.getenergy() > 0)
    {
        robot1.attack(robot2.getname());
        robot2.takeDamage(robot1.getdamage());
        robot2.beRepaired(5);
        robot2.attack(robot1.getname());
        robot1.takeDamage(robot2.getdamage());

        std::cout << std::endl << robot1 << std::endl;
        std::cout << std::endl << robot2 << std::endl << std::endl;
    }
    
    robot1.beRepaired(5);
    robot2.beRepaired(5);

    return (0);
}