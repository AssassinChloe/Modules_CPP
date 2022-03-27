/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:09:53 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:09:55 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name)
{
    int i;

    i = 0;
    Zombie *horde = new Zombie[N];
    while (i < N)
        horde[i++]._name = name;
    return (horde);
}
