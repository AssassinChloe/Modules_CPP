/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:13:22 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:13:25 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void    humanA(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
 
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}

void    humanB(void)
{
    Weapon hammer = Weapon("hammer of thunder");
    HumanB jim("Jim");

    jim.attack();
    jim.setWeapon(hammer);
    jim.attack();
    hammer.setType("some other type of hammer");
    jim.attack();
}

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);

        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");

        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    humanA();
    humanB();
    return (0);
}
