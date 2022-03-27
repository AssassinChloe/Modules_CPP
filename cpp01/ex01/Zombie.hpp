/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:09:38 by cassassi          #+#    #+#             */
/*   Updated: 2022/03/28 00:09:41 by cassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    public :

    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void) const;
    Zombie* zombieHorde(int N, std::string name);
    
    private :

    std::string _name;
};

#endif
